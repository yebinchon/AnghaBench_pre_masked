
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {scalar_t__ rescue_wq; } ;


 struct worker* FUNC_0 () ;

bool FUNC_1(void)
{
 struct worker *VAR_0 = FUNC_0();

 return VAR_0 && VAR_0->rescue_wq;
}
