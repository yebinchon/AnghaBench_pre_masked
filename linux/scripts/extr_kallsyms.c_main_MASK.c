
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(int VAR_4, char **VAR_5)
{
 if (VAR_4 >= 2) {
  int VAR_6;
  for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
   if(FUNC_5(VAR_5[VAR_6], "--all-symbols") == 0)
    VAR_1 = 1;
   else if (FUNC_5(VAR_5[VAR_6], "--absolute-percpu") == 0)
    VAR_0 = 1;
   else if (FUNC_5(VAR_5[VAR_6], "--base-relative") == 0)
    VAR_2 = 1;
   else
    FUNC_6();
  }
 } else if (VAR_4 != 1)
  FUNC_6();

 FUNC_2(VAR_3);
 if (VAR_0)
  FUNC_0();
 if (VAR_2)
  FUNC_3();
 FUNC_4();
 FUNC_1();
 FUNC_7();

 return 0;
}
