
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_5__ {int Data; } ;
struct TYPE_6__ {TYPE_1__ device; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;


 int FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_3,
                                            uint16_t VAR_4)
{

  USBH_StatusTypeDef VAR_5;

  VAR_5 = FUNC_0( VAR_3,
                              VAR_1 | VAR_2,
                              VAR_0,
                              VAR_3->device.Data,
                              VAR_4);

  return VAR_5;
}
