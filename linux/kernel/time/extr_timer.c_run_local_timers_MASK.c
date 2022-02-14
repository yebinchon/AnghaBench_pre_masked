
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_base {int clk; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct timer_base* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int * VAR_4 ;

void FUNC_5(void)
{
 struct timer_base *VAR_5 = FUNC_3(&VAR_4[VAR_0]);

 FUNC_1();

 if (FUNC_4(VAR_3, VAR_5->clk)) {
  if (!FUNC_0(VAR_1))
   return;

  VAR_5++;
  if (FUNC_4(VAR_3, VAR_5->clk))
   return;
 }
 FUNC_2(VAR_2);
}
