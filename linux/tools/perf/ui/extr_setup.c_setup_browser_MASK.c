
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_2 ;

void FUNC_6(bool VAR_3)
{
 if (VAR_2 < 2 && (!FUNC_0(1) || VAR_1))
  VAR_2 = 0;


 if (VAR_2 < 0)
  VAR_2 = 1;

 switch (VAR_2) {
 case 2:
  if (FUNC_2() == 0)
   break;
  FUNC_1("GTK browser requested but could not find %s\n",
         VAR_0);
  FUNC_4(1);
  VAR_2 = 1;

 case 1:
  if (FUNC_5() == 0)
   break;

 default:
  VAR_2 = 0;
  if (VAR_3)
   FUNC_3();
  break;
 }
}
