
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_5__ {int state; int length; int * buff; } ;
struct TYPE_6__ {int RequestState; TYPE_1__ Control; int os_event; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;

USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_6,
                             uint8_t *VAR_7,
                             uint16_t VAR_8)
{
  USBH_StatusTypeDef VAR_9;
  VAR_9 = VAR_2;

  switch (VAR_6->RequestState)
  {
  case 129:

    VAR_6->Control.buff = VAR_7;
    VAR_6->Control.length = VAR_8;
    VAR_6->Control.state = VAR_1;
    VAR_6->RequestState = 128;
    VAR_9 = VAR_2;



    break;

  case 128:
    VAR_9 = FUNC_0(VAR_6);
     if (VAR_9 == VAR_5)
    {

      VAR_6->RequestState = 129;
      VAR_6->Control.state =VAR_0;
      VAR_9 = VAR_5;
    }
    else if (VAR_9 == VAR_4)
    {

      VAR_6->RequestState = 129;
      VAR_9 = VAR_4;
    }
    break;

  default:
    break;
  }
  return VAR_9;
}
