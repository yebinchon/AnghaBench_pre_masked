
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {TYPE_1__* harness_config; } ;
struct TYPE_3__ {int adc_channel_SBU2; int adc_channel_SBU1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_4 ;

uint8_t FUNC_1(void) {
  uint8_t VAR_5 = VAR_2;


  uint32_t VAR_6 = FUNC_0(VAR_4->harness_config->adc_channel_SBU1);
  uint32_t VAR_7 = FUNC_0(VAR_4->harness_config->adc_channel_SBU2);


  if((VAR_6 < VAR_0) || (VAR_7 < VAR_0)){
    if (VAR_6 < VAR_7) {

      VAR_5 = VAR_3;
    } else {

      VAR_5 = VAR_1;
    }
  }


  return VAR_5;
}
