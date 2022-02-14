
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dig_T3; scalar_t__ dig_T1; scalar_t__ dig_T2; } ;
typedef int BME280_S32_t ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BME280_S32_t FUNC_0(BME280_S32_t VAR_2) {
 BME280_S32_t VAR_3, VAR_4, VAR_5;
 VAR_3 = ((((VAR_2>>3) - ((BME280_S32_t)VAR_0.dig_T1<<1))) * ((BME280_S32_t)VAR_0.dig_T2)) >> 11;
 VAR_4 = (((((VAR_2>>4) - ((BME280_S32_t)VAR_0.dig_T1)) * ((VAR_2>>4) - ((BME280_S32_t)VAR_0.dig_T1))) >> 12) *
  ((BME280_S32_t)VAR_0.dig_T3)) >> 14;
 VAR_1 = VAR_3 + VAR_4;
 VAR_5 = (VAR_1 * 5 + 128) >> 8;
 return VAR_5;
}
