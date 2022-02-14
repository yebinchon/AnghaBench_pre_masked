
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct task_struct {struct nsproxy* nsproxy; int fs; } ;
struct nsproxy {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct nsproxy*) ;
 int FUNC_1 (struct nsproxy*) ;
 struct nsproxy* FUNC_2 (unsigned long,struct task_struct*,struct user_namespace*,int ) ;
 int FUNC_3 (struct nsproxy*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct user_namespace*,int ) ;
 struct user_namespace* FUNC_6 (struct task_struct*,int ) ;
 struct user_namespace* VAR_10 ;

int FUNC_7(unsigned long VAR_11, struct task_struct *VAR_12)
{
 struct nsproxy *VAR_13 = VAR_12->nsproxy;
 struct user_namespace *VAR_14 = FUNC_6(VAR_12, VAR_14);
 struct nsproxy *VAR_15;

 if (FUNC_4(!(VAR_11 & (VAR_4 | VAR_6 | VAR_2 |
         VAR_5 | VAR_3 |
         VAR_1)))) {
  FUNC_3(VAR_13);
  return 0;
 }

 if (!FUNC_5(VAR_14, VAR_0))
  return -VAR_9;
 if ((VAR_11 & (VAR_2 | VAR_7)) ==
  (VAR_2 | VAR_7))
  return -VAR_8;

 VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_14, VAR_12->fs);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_12->nsproxy = VAR_15;
 return 0;
}
