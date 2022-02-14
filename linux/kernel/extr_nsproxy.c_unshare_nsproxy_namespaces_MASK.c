
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct nsproxy {int dummy; } ;
struct fs_struct {int dummy; } ;
struct cred {struct user_namespace* user_ns; } ;
struct TYPE_3__ {struct fs_struct* fs; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct nsproxy*) ;
 int FUNC_1 (struct nsproxy*) ;
 struct nsproxy* FUNC_2 (unsigned long,TYPE_1__*,struct user_namespace*,struct fs_struct*) ;
 TYPE_1__* VAR_8 ;
 struct user_namespace* FUNC_3 () ;
 int FUNC_4 (struct user_namespace*,int ) ;

int FUNC_5(unsigned long VAR_9,
 struct nsproxy **VAR_10, struct cred *VAR_11, struct fs_struct *VAR_12)
{
 struct user_namespace *VAR_13;
 int VAR_14 = 0;

 if (!(VAR_9 & (VAR_4 | VAR_6 | VAR_2 |
          VAR_3 | VAR_5 | VAR_1)))
  return 0;

 VAR_13 = VAR_11 ? VAR_11->user_ns : FUNC_3();
 if (!FUNC_4(VAR_13, VAR_0))
  return -VAR_7;

 *VAR_10 = FUNC_2(VAR_9, VAR_8, VAR_13,
      VAR_12 ? VAR_12 : VAR_8->fs);
 if (FUNC_0(*VAR_10)) {
  VAR_14 = FUNC_1(*VAR_10);
  goto out;
 }

out:
 return VAR_14;
}
