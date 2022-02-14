
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

uint16_t FUNC_2()
{
 uint32_t VAR_4;



 VAR_4 = ((uint32_t) (VAR_3 + VAR_2 + VAR_1) * FUNC_1(1963));
 VAR_4 += FUNC_1(477 * 4);
 VAR_4 += FUNC_1(477 * 5);
 VAR_4 += FUNC_1(500);
 VAR_4 /= FUNC_1(1000);

 VAR_4 += FUNC_1(1);
  FUNC_0("tpc_dur: %d\n", VAR_4);

 return VAR_0 + (uint16_t) VAR_4;
}
