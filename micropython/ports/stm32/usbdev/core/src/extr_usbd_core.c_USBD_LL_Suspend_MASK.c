
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_3__ {int dev_state; int dev_old_state; } ;
typedef TYPE_1__ USBD_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;

USBD_StatusTypeDef FUNC_0(USBD_HandleTypeDef *VAR_2)
{
  VAR_2->dev_old_state = VAR_2->dev_state;
  VAR_2->dev_state = VAR_1;
  return VAR_0;
}
