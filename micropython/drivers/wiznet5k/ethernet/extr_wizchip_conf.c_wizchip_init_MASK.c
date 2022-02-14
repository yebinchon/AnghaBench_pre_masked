
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t int8_t ;
typedef int WIZCHIP_EXPORT ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 () ;

int8_t FUNC_3(uint8_t* VAR_1, uint8_t* VAR_2)
{
   int8_t VAR_3;
   int8_t VAR_4 = 0;
   FUNC_2();
   if(VAR_1)
   {
      VAR_4 = 0;
      for(VAR_3 = 0 ; VAR_3 < VAR_0; VAR_3++)
         VAR_4 += VAR_1[VAR_3];
      if(VAR_4 > 16) return -1;
      for(VAR_3 = 0 ; VAR_3 < VAR_0; VAR_3++)
         FUNC_1(VAR_3, VAR_1[VAR_3]);
   }
   if(VAR_2)
   {
      VAR_4 = 0;
      for(VAR_3 = 0 ; VAR_3 < VAR_0; VAR_3++)
         VAR_4 += VAR_2[VAR_3];
      if(VAR_4 > 16) return -1;
      for(VAR_3 = 0 ; VAR_3 < VAR_0; VAR_3++)
         FUNC_0(VAR_3, VAR_2[VAR_3]);
   }

   WIZCHIP_EXPORT(FUNC_4)();

   return 0;
}
