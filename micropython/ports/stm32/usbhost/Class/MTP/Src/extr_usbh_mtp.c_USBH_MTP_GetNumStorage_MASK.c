
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_10__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_8__ {int n; } ;
struct TYPE_9__ {TYPE_2__ storids; } ;
struct TYPE_11__ {scalar_t__ is_ready; TYPE_3__ info; } ;
struct TYPE_7__ {TYPE_5__* pData; } ;
typedef TYPE_5__ MTP_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;

USBH_StatusTypeDef FUNC_0 (USBH_HandleTypeDef *VAR_2, uint8_t *VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_0;
  MTP_HandleTypeDef *VAR_5 = VAR_2->pActiveClass->pData;

  if(VAR_5->is_ready > 0)
  {
    *VAR_3 = VAR_5->info.storids.n;
    VAR_4 = VAR_1;
  }

  return VAR_4;
}
