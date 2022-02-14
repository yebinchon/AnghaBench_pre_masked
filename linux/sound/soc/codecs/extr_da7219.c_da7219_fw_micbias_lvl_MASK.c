
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef enum da7219_micbias_voltage { ____Placeholder_da7219_micbias_voltage } da7219_micbias_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static enum da7219_micbias_voltage
 FUNC_1(struct device *VAR_6, u32 VAR_7)
{
 switch (VAR_7) {
 case 1600:
  return VAR_0;
 case 1800:
  return VAR_1;
 case 2000:
  return VAR_2;
 case 2200:
  return VAR_3;
 case 2400:
  return VAR_4;
 case 2600:
  return VAR_5;
 default:
  FUNC_0(VAR_6, "Invalid micbias level");
  return VAR_3;
 }
}
