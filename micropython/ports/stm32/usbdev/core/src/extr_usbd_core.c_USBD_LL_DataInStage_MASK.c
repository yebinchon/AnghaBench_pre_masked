
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int USBD_StatusTypeDef ;
struct TYPE_11__ {scalar_t__ ep0_state; int ep0_data_len; scalar_t__ dev_state; int dev_test_mode; TYPE_1__* pClass; TYPE_3__* ep_in; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;
struct TYPE_12__ {int rem_length; int maxpacket; int total_length; } ;
typedef TYPE_3__ USBD_EndpointTypeDef ;
struct TYPE_10__ {int (* DataIn ) (TYPE_2__*,scalar_t__) ;int (* EP0_TxSent ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*,scalar_t__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;

USBD_StatusTypeDef FUNC_5(USBD_HandleTypeDef *VAR_3 ,uint8_t VAR_4, uint8_t *VAR_5)
{
  USBD_EndpointTypeDef *VAR_6;

  if(VAR_4 == 0)
  {
    VAR_6 = &VAR_3->ep_in[0];

    if ( VAR_3->ep0_state == VAR_0)
    {
      if(VAR_6->rem_length > VAR_6->maxpacket)
      {
        VAR_6->rem_length -= VAR_6->maxpacket;

        FUNC_0 (VAR_3,
                                  VAR_5,
                                  VAR_6->rem_length);
      }
      else
      {
        if((VAR_6->total_length % VAR_6->maxpacket == 0) &&
           (VAR_6->total_length >= VAR_6->maxpacket) &&
             (VAR_6->total_length < VAR_3->ep0_data_len ))
        {

          FUNC_0(VAR_3 , ((void*)0), 0);
          VAR_3->ep0_data_len = 0;
        }
        else
        {
          if((VAR_3->pClass->EP0_TxSent != ((void*)0))&&
             (VAR_3->dev_state == VAR_2))
          {
            VAR_3->pClass->EP0_TxSent(VAR_3);
          }
          FUNC_1(VAR_3);
        }
      }
    }
    if (VAR_3->dev_test_mode == 1)
    {
      FUNC_2(VAR_3);
      VAR_3->dev_test_mode = 0;
    }
  }
  else if((VAR_3->pClass->DataIn != ((void*)0))&&
          (VAR_3->dev_state == VAR_2))
  {
    VAR_3->pClass->DataIn(VAR_3, VAR_4);
  }
  return VAR_1;
}
