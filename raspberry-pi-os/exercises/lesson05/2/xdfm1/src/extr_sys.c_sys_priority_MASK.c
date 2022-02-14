
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned long priority; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct task_struct** VAR_1 ;

void FUNC_1(int VAR_2, unsigned long VAR_3)
{
    if(VAR_2 >= VAR_0)
    {
 return;
    }
    struct task_struct *VAR_4 = VAR_1[VAR_2];
    VAR_4->priority = VAR_3;
    FUNC_0();
}
