
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int need_bufusage; int need_timer; } ;
typedef TYPE_1__ Instrumentation ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

Instrumentation *
FUNC_1(int VAR_2, int VAR_3)
{
 Instrumentation *VAR_4;


 VAR_4 = FUNC_0(VAR_2 * sizeof(Instrumentation));
 if (VAR_3 & (VAR_0 | VAR_1))
 {
  bool VAR_5 = (VAR_3 & VAR_0) != 0;
  bool VAR_6 = (VAR_3 & VAR_1) != 0;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  {
   VAR_4[VAR_7].need_bufusage = VAR_5;
   VAR_4[VAR_7].need_timer = VAR_6;
  }
 }

 return VAR_4;
}
