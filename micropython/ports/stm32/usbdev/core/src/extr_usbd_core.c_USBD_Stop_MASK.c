
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_7__ {int dev_config; TYPE_1__* pClass; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;
struct TYPE_6__ {int (* DeInit ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;

USBD_StatusTypeDef FUNC_2 (USBD_HandleTypeDef *VAR_1)
{

  VAR_1->pClass->DeInit(VAR_1, VAR_1->dev_config);


  FUNC_0(VAR_1);

  return VAR_0;
}
