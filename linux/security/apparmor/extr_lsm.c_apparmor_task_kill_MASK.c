
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kernel_siginfo {int dummy; } ;
struct cred {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 struct aa_label* FUNC_2 (struct cred const*) ;
 struct aa_label* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct aa_label*,struct aa_label*,int) ;
 int FUNC_5 (struct aa_label*) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_0, struct kernel_siginfo *VAR_1,
         int VAR_2, const struct cred *VAR_3)
{
 struct aa_label *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_3) {



  VAR_4 = FUNC_2(VAR_3);
  VAR_5 = FUNC_3(VAR_0);
  VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_2);
  FUNC_5(VAR_4);
  FUNC_5(VAR_5);
  return VAR_6;
 }

 VAR_4 = FUNC_0();
 VAR_5 = FUNC_3(VAR_0);
 VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_2);
 FUNC_5(VAR_5);
 FUNC_1(VAR_4);

 return VAR_6;
}
