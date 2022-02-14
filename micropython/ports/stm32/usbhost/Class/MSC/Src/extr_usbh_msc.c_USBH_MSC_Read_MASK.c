
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_11__ {scalar_t__ is_connected; } ;
struct TYPE_12__ {scalar_t__ gState; int Timer; TYPE_3__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_13__ {size_t rw_lun; void* state; TYPE_2__* unit; } ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_9__ {TYPE_5__* pData; } ;
typedef TYPE_5__ MSC_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,size_t) ;
 int FUNC_1 (TYPE_4__*,size_t,int,size_t*,int) ;
 int VAR_5 ;

USBH_StatusTypeDef FUNC_2(USBH_HandleTypeDef *VAR_6,
                                     uint8_t VAR_7,
                                     uint32_t VAR_8,
                                     uint8_t *VAR_9,
                                     uint32_t VAR_10)
{
  uint32_t VAR_11;
  MSC_HandleTypeDef *VAR_12 = VAR_6->pActiveClass->pData;

  if ((VAR_6->device.is_connected == 0) ||
      (VAR_6->gState != VAR_0) ||
      (VAR_12->unit[VAR_7].state != VAR_1))
  {
    return VAR_4;
  }
  VAR_12->state = VAR_2;
  VAR_12->unit[VAR_7].state = VAR_2;
  VAR_12->rw_lun = VAR_7;
  FUNC_1(VAR_6,
                     VAR_7,
                     VAR_8,
                     VAR_9,
                     VAR_10);

  VAR_11 = VAR_6->Timer + (10000 * VAR_10);
  while (FUNC_0(VAR_6, VAR_7) == VAR_3)
  {
    if((VAR_6->Timer > VAR_11) || (VAR_6->device.is_connected == 0))
    {
      VAR_12->state = VAR_1;
      return VAR_4;
    }
  }
  VAR_12->state = VAR_1;
  return VAR_5;
}
