
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_12__ {int Timer; int os_event; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_13__ {int state; int timer; int DataReady; int ep_addr; int InPipe; int length; int pData; int fifo; int (* Init ) (TYPE_2__*) ;} ;
struct TYPE_11__ {TYPE_3__* pData; } ;
typedef TYPE_3__ HID_HandleTypeDef ;







 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_8(USBH_HandleTypeDef *VAR_4)
{
  USBH_StatusTypeDef VAR_5 = VAR_0;
  HID_HandleTypeDef *VAR_6 = VAR_4->pActiveClass->pData;

  switch (VAR_6->state)
  {
  case 130:
    VAR_6->Init(VAR_4);
  case 131:
    if(FUNC_2 (VAR_4,
                           0x01,
                            0,
                            VAR_6->pData,
                            VAR_6->length) == VAR_0)
    {

      FUNC_5(&VAR_6->fifo, VAR_6->pData, VAR_6->length);
      VAR_6->state = 128;
    }

    break;

  case 128:


    if(VAR_4->Timer & 1)
    {
      VAR_6->state = 132;
    }



    break;

  case 132:

    FUNC_3(VAR_4,
                              VAR_6->pData,
                              VAR_6->length,
                              VAR_6->InPipe);

    VAR_6->state = 129;
    VAR_6->timer = VAR_4->Timer;
    VAR_6->DataReady = 0;
    break;

  case 129:

    if(FUNC_4(VAR_4 , VAR_6->InPipe) == VAR_1)
    {
      if(VAR_6->DataReady == 0)
      {
        FUNC_5(&VAR_6->fifo, VAR_6->pData, VAR_6->length);
        VAR_6->DataReady = 1;
        FUNC_1(VAR_4);



      }
    }
    else if(FUNC_4(VAR_4 , VAR_6->InPipe) == VAR_3)
    {


      if(FUNC_0(VAR_4,
                         VAR_6->ep_addr) == VAR_0)
      {

        VAR_6->state = 132;
      }
    }


    break;

  default:
    break;
  }
  return VAR_5;
}
