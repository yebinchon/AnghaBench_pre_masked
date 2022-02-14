
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int netmode_type ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

int8_t FUNC_2(netmode_type VAR_4)
{
   uint8_t VAR_5 = 0;

   if(VAR_4 & ~(VAR_3 | VAR_2 | VAR_1)) return -1;



   VAR_5 = FUNC_0();
   VAR_5 |= (uint8_t)VAR_4;
   FUNC_1(VAR_5);
   return 0;
}
