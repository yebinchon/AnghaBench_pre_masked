
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_4__ {int ep0_state; } ;
typedef TYPE_1__ USBD_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *,int ) ;
 int VAR_1 ;

USBD_StatusTypeDef FUNC_1 (USBD_HandleTypeDef *VAR_2)
{


  VAR_2->ep0_state = VAR_0;


  FUNC_0 (VAR_2, 0x00, ((void*)0), 0);

  return VAR_1;
}
