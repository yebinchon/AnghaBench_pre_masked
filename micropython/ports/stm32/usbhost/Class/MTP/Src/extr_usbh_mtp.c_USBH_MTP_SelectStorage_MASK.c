
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_10__ {size_t n; int * Storage; } ;
struct TYPE_11__ {TYPE_3__ storids; } ;
struct TYPE_9__ {int CurrentStorageId; } ;
struct TYPE_13__ {TYPE_4__ info; TYPE_2__ params; scalar_t__ is_ready; } ;
struct TYPE_8__ {TYPE_6__* pData; } ;
typedef TYPE_6__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_2, uint8_t VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_0;
  MTP_HandleTypeDef *VAR_5 = VAR_2->pActiveClass->pData;

  if((VAR_3 < VAR_5->info.storids.n) && (VAR_5->is_ready))
  {
      VAR_5->params.CurrentStorageId = VAR_5->info.storids.Storage[VAR_3];
      VAR_4 = VAR_1;
  }

  return VAR_4;
}
