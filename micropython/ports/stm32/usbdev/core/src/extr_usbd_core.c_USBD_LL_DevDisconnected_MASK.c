
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_6__ {int dev_config; TYPE_1__* pClass; int dev_state; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;
struct TYPE_5__ {int (* DeInit ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

USBD_StatusTypeDef FUNC_1(USBD_HandleTypeDef *VAR_2)
{

  VAR_2->dev_state = VAR_1;
  VAR_2->pClass->DeInit(VAR_2, VAR_2->dev_config);

  return VAR_0;
}
