
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_5__ {int Data; int DevDesc; } ;
struct TYPE_6__ {TYPE_1__ device; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;


 int FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_4, uint8_t VAR_5)
{
  USBH_StatusTypeDef VAR_6;

  if((VAR_6 = FUNC_0(VAR_4,
                                  VAR_2 | VAR_3,
                                  VAR_1,
                                  VAR_4->device.Data,
                                  VAR_5)) == VAR_0)
  {

    FUNC_1(&VAR_4->device.DevDesc, VAR_4->device.Data, VAR_5);
  }
  return VAR_6;
}
