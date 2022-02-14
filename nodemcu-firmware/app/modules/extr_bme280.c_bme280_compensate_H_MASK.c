
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dig_H1; scalar_t__ dig_H2; scalar_t__ dig_H3; scalar_t__ dig_H6; scalar_t__ dig_H5; scalar_t__ dig_H4; } ;
typedef int BME280_U32_t ;
typedef int BME280_S32_t ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BME280_U32_t FUNC_0(BME280_S32_t VAR_2) {
 BME280_S32_t VAR_3;

 VAR_3 = (VAR_1 - ((BME280_S32_t)76800));
 VAR_3 = (((((VAR_2 << 14) - (((BME280_S32_t)VAR_0.dig_H4) << 20) - (((BME280_S32_t)VAR_0.dig_H5) * VAR_3)) +
  ((BME280_S32_t)16384)) >> 15) * (((((((VAR_3 * ((BME280_S32_t)VAR_0.dig_H6)) >> 10) * (((VAR_3 *
  ((BME280_S32_t)VAR_0.dig_H3)) >> 11) + ((BME280_S32_t)32768))) >> 10) + ((BME280_S32_t)2097152)) *
  ((BME280_S32_t)VAR_0.dig_H2) + 8192) >> 14));
 VAR_3 = (VAR_3 - (((((VAR_3 >> 15) * (VAR_3 >> 15)) >> 7) * ((BME280_S32_t)VAR_0.dig_H1)) >> 4));
 VAR_3 = (VAR_3 < 0 ? 0 : VAR_3);
 VAR_3 = (VAR_3 > 419430400 ? 419430400 : VAR_3);
 VAR_3 = VAR_3>>12;
 return (BME280_U32_t)((VAR_3 * 1000)>>10);
}
