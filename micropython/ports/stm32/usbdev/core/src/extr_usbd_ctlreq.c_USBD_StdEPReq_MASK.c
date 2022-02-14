
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBD_StatusTypeDef ;
struct TYPE_19__ {int bRequest; int wValue; int wIndex; } ;
typedef TYPE_2__ USBD_SetupReqTypedef ;
struct TYPE_20__ {TYPE_4__* ep_out; TYPE_4__* ep_in; int dev_state; TYPE_1__* pClass; } ;
typedef TYPE_3__ USBD_HandleTypeDef ;
struct TYPE_21__ {int status; } ;
typedef TYPE_4__ USBD_EndpointTypeDef ;
struct TYPE_18__ {int (* Setup ) (TYPE_3__*,TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int VAR_0 ;


 int VAR_1 ;



 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;

USBD_StatusTypeDef FUNC_9 (USBD_HandleTypeDef *VAR_2 , USBD_SetupReqTypedef *VAR_3)
{

  uint8_t VAR_4;
  USBD_StatusTypeDef VAR_5 = VAR_0;
  USBD_EndpointTypeDef *VAR_6;
  VAR_4 = FUNC_0(VAR_3->wIndex);

  switch (VAR_3->bRequest)
  {

  case 128 :

    switch (VAR_2->dev_state)
    {
    case 132:
      if ((VAR_4 != 0x00) && (VAR_4 != 0x80))
      {
        FUNC_6(VAR_2 , VAR_4);
      }
      break;

    case 131:
      if (VAR_3->wValue == VAR_1)
      {
        if ((VAR_4 != 0x00) && (VAR_4 != 0x80))
        {
          FUNC_6(VAR_2 , VAR_4);

        }
      }
      VAR_2->pClass->Setup (VAR_2, VAR_3);
      FUNC_3(VAR_2);

      break;

    default:
      FUNC_1(VAR_2 , VAR_3);
      break;
    }
    break;

  case 130 :

    switch (VAR_2->dev_state)
    {
    case 132:
      if ((VAR_4 != 0x00) && (VAR_4 != 0x80))
      {
        FUNC_6(VAR_2 , VAR_4);
      }
      break;

    case 131:
      if (VAR_3->wValue == VAR_1)
      {
        if ((VAR_4 & 0x7F) != 0x00)
        {
          FUNC_4(VAR_2 , VAR_4);
          VAR_2->pClass->Setup (VAR_2, VAR_3);
        }
        FUNC_3(VAR_2);
      }
      break;

    default:
      FUNC_1(VAR_2 , VAR_3);
      break;
    }
    break;

  case 129:
    switch (VAR_2->dev_state)
    {
    case 132:
      if ((VAR_4 & 0x7F) != 0x00)
      {
        FUNC_6(VAR_2 , VAR_4);
      }
      break;

    case 131:
      VAR_6 = ((VAR_4 & 0x80) == 0x80) ? &VAR_2->ep_in[VAR_4 & 0x7F]: &VAR_2->ep_out[VAR_4 & 0x7F];

      if(FUNC_5(VAR_2, VAR_4))
      {
        VAR_6->status = 0x0001;
      }
      else
      {
        VAR_6->status = 0x0000;
      }

      FUNC_2 (VAR_2,
                        (uint8_t *)&VAR_6->status,
                        2);
      break;

    default:
      FUNC_1(VAR_2 , VAR_3);
      break;
    }
    break;

  default:
    break;
  }
  return VAR_5;
}
