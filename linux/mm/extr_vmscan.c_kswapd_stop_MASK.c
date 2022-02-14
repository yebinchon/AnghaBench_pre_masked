
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {struct task_struct* kswapd; } ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*) ;

void FUNC_2(int VAR_0)
{
 struct task_struct *VAR_1 = FUNC_0(VAR_0)->kswapd;

 if (VAR_1) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_0)->kswapd = ((void*)0);
 }
}
