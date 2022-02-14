
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned int exit_code; scalar_t__ exit_state; int ptrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct task_struct*) ;
 int VAR_2 ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int VAR_3 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct task_struct *VAR_4, unsigned int VAR_5)
{
 if (!FUNC_4(VAR_5))
  return -VAR_0;


 FUNC_3(VAR_4);

 FUNC_5(&VAR_3);




 FUNC_0(!VAR_4->ptrace || VAR_4->exit_state);




 VAR_4->exit_code = VAR_5;
 FUNC_1(VAR_2, VAR_4);
 FUNC_6(&VAR_3);

 FUNC_2(VAR_4, VAR_1);

 return 0;
}
