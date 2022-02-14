
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {struct work_struct* current_work; } ;
struct work_struct {int dummy; } ;


 struct worker* FUNC_0 () ;

struct work_struct *FUNC_1(void)
{
 struct worker *VAR_0 = FUNC_0();

 return VAR_0 ? VAR_0->current_work : ((void*)0);
}
