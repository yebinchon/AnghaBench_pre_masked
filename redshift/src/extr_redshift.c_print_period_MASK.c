
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int period_t ;






 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_3(period_t VAR_1, double VAR_2)
{
 switch (VAR_1) {
 case 129:
 case 130:
 case 131:
  FUNC_2(FUNC_0("Period: %s\n"), FUNC_1(VAR_0[VAR_1]));
  break;
 case 128:
  FUNC_2(FUNC_0("Period: %s (%.2f%% day)\n"),
         FUNC_1(VAR_0[VAR_1]),
         VAR_2*100);
  break;
 }
}
