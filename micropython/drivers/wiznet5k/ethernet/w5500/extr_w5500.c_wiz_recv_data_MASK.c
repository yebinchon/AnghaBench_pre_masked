
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (int,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(uint8_t VAR_0, uint8_t *VAR_1, uint16_t VAR_2)
{
   uint16_t VAR_3 = 0;
   uint32_t VAR_4 = 0;

   if(VAR_2 == 0) return;
   VAR_3 = FUNC_2(VAR_0);


   VAR_4 = ((uint32_t)VAR_3 << 8) + (FUNC_1(VAR_0) << 3);

   FUNC_0(VAR_4, VAR_1, VAR_2);
   VAR_3 += VAR_2;

   FUNC_3(VAR_0,VAR_3);
}
