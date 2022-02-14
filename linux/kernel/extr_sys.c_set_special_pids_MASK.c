
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
struct TYPE_2__ {struct task_struct* group_leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ,struct pid*) ;
 TYPE_1__* VAR_2 ;
 struct pid* FUNC_1 (struct task_struct*) ;
 struct pid* FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct pid *VAR_3)
{
 struct task_struct *VAR_4 = VAR_2->group_leader;

 if (FUNC_2(VAR_4) != VAR_3)
  FUNC_0(VAR_4, VAR_1, VAR_3);

 if (FUNC_1(VAR_4) != VAR_3)
  FUNC_0(VAR_4, VAR_0, VAR_3);
}
