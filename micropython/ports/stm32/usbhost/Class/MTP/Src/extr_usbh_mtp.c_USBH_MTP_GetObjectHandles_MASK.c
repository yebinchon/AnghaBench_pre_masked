
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_11__ {scalar_t__ is_connected; } ;
struct TYPE_13__ {size_t Timer; TYPE_3__ device; TYPE_4__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_9__ {size_t n; int * Storage; } ;
struct TYPE_10__ {TYPE_1__ storids; } ;
struct TYPE_14__ {TYPE_2__ info; scalar_t__ is_ready; } ;
struct TYPE_12__ {TYPE_6__* pData; } ;
typedef int PTP_ObjectHandlesTypedef ;
typedef TYPE_6__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,size_t,size_t,int *) ;

USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_2,
                                           uint32_t VAR_3,
                                           uint32_t VAR_4,
                                           uint32_t VAR_5,
                                           PTP_ObjectHandlesTypedef* VAR_6)
{
  USBH_StatusTypeDef VAR_7 = VAR_1;
  MTP_HandleTypeDef *VAR_8 = VAR_2->pActiveClass->pData;
  uint32_t VAR_9 = VAR_2->Timer + 5000;

  if((VAR_3 < VAR_8->info.storids.n) && (VAR_8->is_ready))
  {
    while ((VAR_7 = FUNC_0 (VAR_2,
                                                VAR_8->info.storids.Storage[VAR_3],
                                                VAR_4,
                                                VAR_5,
                                                VAR_6)) == VAR_0)
    {
      if((VAR_2->Timer > VAR_9) || (VAR_2->device.is_connected == 0))
      {
        return VAR_1;
      }
    }
  }
  return VAR_7;
}
