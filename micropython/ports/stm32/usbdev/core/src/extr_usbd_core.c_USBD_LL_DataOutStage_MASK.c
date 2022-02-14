
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int USBD_StatusTypeDef ;
struct TYPE_10__ {scalar_t__ ep0_state; scalar_t__ dev_state; TYPE_1__* pClass; TYPE_3__* ep_out; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;
struct TYPE_11__ {scalar_t__ rem_length; scalar_t__ maxpacket; } ;
typedef TYPE_3__ USBD_EndpointTypeDef ;
struct TYPE_9__ {int (* DataOut ) (TYPE_2__*,scalar_t__) ;int (* EP0_RxReady ) (TYPE_2__*) ;} ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;

USBD_StatusTypeDef FUNC_5(USBD_HandleTypeDef *VAR_3 , uint8_t VAR_4, uint8_t *VAR_5)
{
  USBD_EndpointTypeDef *VAR_6;

  if(VAR_4 == 0)
  {
    VAR_6 = &VAR_3->ep_out[0];

    if ( VAR_3->ep0_state == VAR_0)
    {
      if(VAR_6->rem_length > VAR_6->maxpacket)
      {
        VAR_6->rem_length -= VAR_6->maxpacket;

        FUNC_1 (VAR_3,
                            VAR_5,
                            FUNC_0(VAR_6->rem_length ,VAR_6->maxpacket));
      }
      else
      {
        if((VAR_3->pClass->EP0_RxReady != ((void*)0))&&
           (VAR_3->dev_state == VAR_2))
        {
          VAR_3->pClass->EP0_RxReady(VAR_3);
        }
        FUNC_2(VAR_3);
      }
    }
  }
  else if((VAR_3->pClass->DataOut != ((void*)0))&&
          (VAR_3->dev_state == VAR_2))
  {
    VAR_3->pClass->DataOut(VAR_3, VAR_4);
  }
  return VAR_1;
}
