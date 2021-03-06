
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opt; int name; } ;


 int ARRAY_SIZE (TYPE_1__*) ;
 int EINVAL ;
 int ENOMEM ;
 int GFP_KERNEL ;
 int Opt_error ;
 int Opt_seclabel ;
 int kfree (char const*) ;
 char* kmemdup_nul (char const*,int,int ) ;
 int selinux_add_opt (int,char const*,void**) ;
 int selinux_free_mnt_opts (void*) ;
 scalar_t__ strcmp (char const*,int ) ;
 TYPE_1__* tokens ;
 scalar_t__ unlikely (int) ;

__attribute__((used)) static int selinux_add_mnt_opt(const char *option, const char *val, int len,
          void **mnt_opts)
{
 int token = Opt_error;
 int rc, i;

 for (i = 0; i < ARRAY_SIZE(tokens); i++) {
  if (strcmp(option, tokens[i].name) == 0) {
   token = tokens[i].opt;
   break;
  }
 }

 if (token == Opt_error)
  return -EINVAL;

 if (token != Opt_seclabel) {
  val = kmemdup_nul(val, len, GFP_KERNEL);
  if (!val) {
   rc = -ENOMEM;
   goto free_opt;
  }
 }
 rc = selinux_add_opt(token, val, mnt_opts);
 if (unlikely(rc)) {
  kfree(val);
  goto free_opt;
 }
 return rc;

free_opt:
 if (*mnt_opts) {
  selinux_free_mnt_opts(*mnt_opts);
  *mnt_opts = ((void*)0);
 }
 return rc;
}
