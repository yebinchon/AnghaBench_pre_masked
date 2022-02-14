
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskstats {int dummy; } ;
struct task_struct {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct task_struct*,struct taskstats*) ;
 struct task_struct* FUNC_2 (int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(pid_t VAR_2, struct taskstats *VAR_3)
{
 struct task_struct *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return -VAR_0;
 FUNC_1(FUNC_0(), FUNC_4(VAR_1), VAR_4, VAR_3);
 FUNC_3(VAR_4);
 return 0;
}
