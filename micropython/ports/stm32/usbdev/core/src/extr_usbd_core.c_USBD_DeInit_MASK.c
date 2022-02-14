
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_8__ {int dev_config; TYPE_1__* pClass; int dev_state; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;
struct TYPE_7__ {int (* DeInit ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;

USBD_StatusTypeDef FUNC_3(USBD_HandleTypeDef *VAR_2)
{

  VAR_2->dev_state = VAR_1;


  VAR_2->pClass->DeInit(VAR_2, VAR_2->dev_config);


  FUNC_1(VAR_2);


  FUNC_0(VAR_2);

  return VAR_0;
}
