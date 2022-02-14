
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_5__ {scalar_t__ speed; } ;
struct TYPE_6__ {TYPE_1__ device; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ,int ,int ,scalar_t__*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_4,
                                uint8_t *VAR_5,
                                uint16_t VAR_6,
                                uint8_t VAR_7,
                                uint8_t VAR_8 )
{
  if(VAR_4->device.speed != VAR_3)
  {
    VAR_8 = 0;
  }

  FUNC_0 (VAR_4,
                          VAR_7,
                          0,
                          VAR_0,
                          VAR_2,
                          VAR_5,
                          VAR_6,
                          VAR_8);

  return VAR_1;
}
