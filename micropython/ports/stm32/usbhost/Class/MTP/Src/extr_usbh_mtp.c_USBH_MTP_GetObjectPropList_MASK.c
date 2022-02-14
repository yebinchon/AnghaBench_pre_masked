
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {scalar_t__ is_connected; } ;
struct TYPE_9__ {scalar_t__ Timer; TYPE_1__ device; TYPE_2__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_10__ {scalar_t__ is_ready; } ;
struct TYPE_8__ {TYPE_4__* pData; } ;
typedef int MTP_PropertiesTypedef ;
typedef TYPE_4__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,int *,scalar_t__*) ;

USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_2,
                                                uint32_t VAR_3,
                                                MTP_PropertiesTypedef *VAR_4,
                                                uint32_t *VAR_5)
{
  USBH_StatusTypeDef VAR_6 = VAR_1;
  MTP_HandleTypeDef *VAR_7 = VAR_2->pActiveClass->pData;
  uint32_t VAR_8 = VAR_2->Timer + 5000;

  if(VAR_7->is_ready)
  {
    while ((VAR_6 = FUNC_0 (VAR_2,
                                                VAR_3,
                                                VAR_4,
                                                VAR_5)) == VAR_0)
    {
      if((VAR_2->Timer > VAR_8) || (VAR_2->device.is_connected == 0))
      {
        return VAR_1;
      }
    }
  }
  return VAR_6;
}
