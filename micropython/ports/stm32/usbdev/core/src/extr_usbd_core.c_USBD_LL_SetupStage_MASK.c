
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBD_StatusTypeDef ;
struct TYPE_12__ {int bmRequest; int wLength; } ;
struct TYPE_11__ {TYPE_3__ request; int ep0_data_len; int ep0_state; } ;
typedef TYPE_1__ USBD_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;




USBD_StatusTypeDef FUNC_5(USBD_HandleTypeDef *VAR_2, uint8_t *VAR_3)
{

  FUNC_1(&VAR_2->request, VAR_3);

  VAR_2->ep0_state = VAR_0;
  VAR_2->ep0_data_len = VAR_2->request.wLength;

  switch (VAR_2->request.bmRequest & 0x1F)
  {
  case 130:
    FUNC_2 (VAR_2, &VAR_2->request);
    break;

  case 128:
    FUNC_4(VAR_2, &VAR_2->request);
    break;

  case 129:
    FUNC_3(VAR_2, &VAR_2->request);
    break;

  default:
    FUNC_0(VAR_2 , VAR_2->request.bmRequest & 0x80);
    break;
  }
  return VAR_1;
}
