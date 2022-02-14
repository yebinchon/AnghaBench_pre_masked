
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 struct aa_label* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct aa_label*,struct aa_label*,int ) ;
 int FUNC_2 (struct aa_label*) ;
 int VAR_1 ;
 struct task_struct* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct aa_label*) ;

__attribute__((used)) static int FUNC_7(struct aa_label *VAR_2,
         const char **VAR_3)
{
 struct task_struct *VAR_4;
 struct aa_label *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 FUNC_4();
 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)

  VAR_5 = FUNC_0(VAR_4);


 if (!VAR_4 || FUNC_6(VAR_5))
  goto out;

 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_0);

out:
 FUNC_5();
 FUNC_2(VAR_5);

 if (VAR_6)
  *VAR_3 = "ptrace prevents transition";
 return VAR_6;
}
