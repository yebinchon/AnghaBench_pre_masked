
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int dummy; } ;
typedef int mixedStruct ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct config_generic** FUNC_4 () ;
 int FUNC_5 (int *) ;

void
FUNC_6(void)
{
 struct config_generic **VAR_0;
 int VAR_1,
    VAR_2;


 FUNC_1();

 VAR_0 = FUNC_4();
 VAR_1 = FUNC_0();

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  mixedStruct *VAR_3 = (mixedStruct *) VAR_0[VAR_2];

  if (FUNC_2(VAR_3))
   FUNC_5(VAR_3);
 }

 FUNC_3(0);
}
