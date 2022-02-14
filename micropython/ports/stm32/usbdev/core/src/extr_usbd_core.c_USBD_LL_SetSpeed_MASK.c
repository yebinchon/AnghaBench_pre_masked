
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
typedef int USBD_SpeedTypeDef ;
struct TYPE_3__ {int dev_speed; } ;
typedef TYPE_1__ USBD_HandleTypeDef ;


 int VAR_0 ;

USBD_StatusTypeDef FUNC_0(USBD_HandleTypeDef *VAR_1, USBD_SpeedTypeDef VAR_2)
{
  VAR_1->dev_speed = VAR_2;
  return VAR_0;
}
