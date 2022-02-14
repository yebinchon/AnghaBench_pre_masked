
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2(int VAR_5)
{
   int VAR_6;
   switch (VAR_5) {
      case -1: VAR_6 = VAR_1; break;
      case 0: VAR_6 = VAR_4; break;
      case 1: VAR_6 = VAR_0; break;
      default:
         if (VAR_5 < 0) VAR_6 = VAR_3;
         else VAR_6 = VAR_2;
   }
   FUNC_1(FUNC_0(), VAR_6);
}
