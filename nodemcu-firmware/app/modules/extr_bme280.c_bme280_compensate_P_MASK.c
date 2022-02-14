
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dig_P7; scalar_t__ dig_P8; scalar_t__ dig_P9; scalar_t__ dig_P1; scalar_t__ dig_P2; scalar_t__ dig_P3; scalar_t__ dig_P4; scalar_t__ dig_P5; scalar_t__ dig_P6; } ;
typedef int BME280_U32_t ;
typedef int BME280_S64_t ;
typedef int BME280_S32_t ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BME280_U32_t FUNC_0(BME280_S32_t VAR_2) {
 BME280_S64_t VAR_3, VAR_4, VAR_5;
 VAR_3 = ((BME280_S64_t)VAR_1) - 128000;
 VAR_4 = VAR_3 * VAR_3 * (BME280_S64_t)VAR_0.dig_P6;
 VAR_4 = VAR_4 + ((VAR_3*(BME280_S64_t)VAR_0.dig_P5)<<17);
 VAR_4 = VAR_4 + (((BME280_S64_t)VAR_0.dig_P4)<<35);
 VAR_3 = ((VAR_3 * VAR_3 * (BME280_S64_t)VAR_0.dig_P3)>>8) + ((VAR_3 * (BME280_S64_t)VAR_0.dig_P2)<<12);
 VAR_3 = (((((BME280_S64_t)1)<<47)+VAR_3))*((BME280_S64_t)VAR_0.dig_P1)>>33;
 if (VAR_3 == 0) {
  return 0;
 }
 VAR_5 = 1048576-VAR_2;
 VAR_5 = (((VAR_5<<31)-VAR_4)*3125)/VAR_3;
 VAR_3 = (((BME280_S64_t)VAR_0.dig_P9) * (VAR_5>>13) * (VAR_5>>13)) >> 25;
 VAR_4 = (((BME280_S64_t)VAR_0.dig_P8) * VAR_5) >> 19;
 VAR_5 = ((VAR_5 + VAR_3 + VAR_4) >> 8) + (((BME280_S64_t)VAR_0.dig_P7)<<4);
 VAR_5 = (VAR_5 * 10) >> 8;
 return (BME280_U32_t)VAR_5;
}
