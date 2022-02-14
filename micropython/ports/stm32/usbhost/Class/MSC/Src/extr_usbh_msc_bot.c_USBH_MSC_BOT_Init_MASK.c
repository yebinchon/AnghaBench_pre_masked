
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


typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_9__ {int Tag; int Signature; } ;
struct TYPE_10__ {TYPE_2__ field; } ;
struct TYPE_11__ {int cmd_state; int state; TYPE_3__ cbw; } ;
struct TYPE_13__ {TYPE_4__ hbot; } ;
struct TYPE_8__ {TYPE_6__* pData; } ;
typedef TYPE_6__ MSC_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

USBH_StatusTypeDef FUNC_0(USBH_HandleTypeDef *VAR_5)
{

  MSC_HandleTypeDef *VAR_6 = VAR_5->pActiveClass->pData;

  VAR_6->hbot.cbw.field.Signature = VAR_0;
  VAR_6->hbot.cbw.field.Tag = VAR_1;
  VAR_6->hbot.state = VAR_3;
  VAR_6->hbot.cmd_state = VAR_2;

  return VAR_4;
}
