
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int opt; int name; } ;


 int ARRAY_SIZE (TYPE_1__*) ;
 int Opt_error ;
 scalar_t__ memcmp (char*,int ,size_t) ;
 TYPE_1__* smk_mount_opts ;

__attribute__((used)) static int match_opt_prefix(char *s, int l, char **arg)
{
 int i;

 for (i = 0; i < ARRAY_SIZE(smk_mount_opts); i++) {
  size_t len = smk_mount_opts[i].len;
  if (len > l || memcmp(s, smk_mount_opts[i].name, len))
   continue;
  if (len == l || s[len] != '=')
   continue;
  *arg = s + len + 1;
  return smk_mount_opts[i].opt;
 }
 return Opt_error;
}
