
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_suspend_ops {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 struct platform_suspend_ops const* VAR_8 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (size_t) ;

void FUNC_3(const struct platform_suspend_ops *VAR_9)
{
 FUNC_0();

 VAR_8 = VAR_9;

 if (FUNC_2(VAR_1)) {
  VAR_5[VAR_1] = VAR_4[VAR_1];
  VAR_7[VAR_1] = VAR_6[VAR_1];
  if (VAR_3 == VAR_1)
   VAR_2 = VAR_1;
 }
 if (FUNC_2(VAR_0)) {
  VAR_5[VAR_0] = VAR_4[VAR_0];
  if (VAR_3 >= VAR_0)
   VAR_2 = VAR_0;
 }

 FUNC_1();
}
