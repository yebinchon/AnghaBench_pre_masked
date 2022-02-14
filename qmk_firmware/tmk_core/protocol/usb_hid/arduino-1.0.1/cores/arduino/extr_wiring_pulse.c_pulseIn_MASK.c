
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int* FUNC_4 (int) ;

unsigned long FUNC_5(uint8_t VAR_0, uint8_t VAR_1, unsigned long VAR_2)
{



 uint8_t VAR_3 = FUNC_1(VAR_0);
 uint8_t VAR_4 = FUNC_2(VAR_0);
 uint8_t VAR_5 = (VAR_1 ? VAR_3 : 0);
 unsigned long VAR_6 = 0;



 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = FUNC_3(VAR_2) / 16;


 while ((*FUNC_4(VAR_4) & VAR_3) == VAR_5)
  if (VAR_7++ == VAR_8)
   return 0;


 while ((*FUNC_4(VAR_4) & VAR_3) != VAR_5)
  if (VAR_7++ == VAR_8)
   return 0;


 while ((*FUNC_4(VAR_4) & VAR_3) == VAR_5) {
  if (VAR_7++ == VAR_8)
   return 0;
  VAR_6++;
 }





 return FUNC_0(VAR_6 * 21 + 16);
}
