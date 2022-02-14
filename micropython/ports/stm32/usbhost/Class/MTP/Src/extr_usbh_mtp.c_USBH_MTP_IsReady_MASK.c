
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {int is_ready; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef TYPE_3__ MTP_HandleTypeDef ;



uint8_t FUNC_0 (USBH_HandleTypeDef *VAR_0)
{
  MTP_HandleTypeDef *VAR_1 = VAR_0->pActiveClass->pData;

  return (VAR_1->is_ready);
}
