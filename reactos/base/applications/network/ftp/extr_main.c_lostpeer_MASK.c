
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SOCKET ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(void)
{
   extern SOCKET VAR_2;
   extern int VAR_3;

   if (VAR_0) {
      if (VAR_2) {
         FUNC_1(VAR_2);
         VAR_2 = 0;
      }
      if (VAR_3 >= 0) {
         (void) FUNC_3(VAR_3, 1+1);
         (void) FUNC_0(VAR_3);
         VAR_3 = -1;
      }
      VAR_0 = 0;
   }
   FUNC_2(1);
   if (VAR_0) {
      if (VAR_2) {
      FUNC_1(VAR_2);
         VAR_2 = 0;
      }
      VAR_0 = 0;
   }
   VAR_1 = 0;
   FUNC_2(0);
}
