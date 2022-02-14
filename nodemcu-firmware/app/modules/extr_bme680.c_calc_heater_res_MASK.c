
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;
struct TYPE_2__ {int par_gh3; int par_gh1; int par_gh2; int res_heat_range; int res_heat_val; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static uint8_t FUNC_0(uint16_t VAR_2)
{
 uint8_t VAR_3;
 int32_t VAR_4;
 int32_t VAR_5;
 int32_t VAR_6;
 int32_t VAR_7;
 int32_t VAR_8;
 int32_t VAR_9;

 if (VAR_2 < 200)
  VAR_2 = 200;
 else if (VAR_2 > 400)
  VAR_2 = 400;

 VAR_4 = (((int32_t) VAR_0 * VAR_1.par_gh3) / 1000) * 256;
 VAR_5 = (VAR_1.par_gh1 + 784) * (((((VAR_1.par_gh2 + 154009) * VAR_2 * 5) / 100) + 3276800) / 10);
 VAR_6 = VAR_4 + (VAR_5 / 2);
 VAR_7 = (VAR_6 / (VAR_1.res_heat_range + 4));
 VAR_8 = (131 * VAR_1.res_heat_val) + 65536;
 VAR_9 = (int32_t) (((VAR_7 / VAR_8) - 250) * 34);
 VAR_3 = (uint8_t) ((VAR_9 + 50) / 100);

 return VAR_3;
}
