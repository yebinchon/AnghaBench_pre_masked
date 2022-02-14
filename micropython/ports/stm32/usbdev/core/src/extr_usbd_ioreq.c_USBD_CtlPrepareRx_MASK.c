
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
typedef int USBD_StatusTypeDef ;
struct TYPE_6__ {TYPE_1__* ep_out; int ep0_state; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;
struct TYPE_5__ {void* rem_length; void* total_length; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *,void*) ;
 int VAR_1 ;

USBD_StatusTypeDef FUNC_1 (USBD_HandleTypeDef *VAR_2,
                                  uint8_t *VAR_3,
                                  uint16_t VAR_4)
{

  VAR_2->ep0_state = VAR_0;
  VAR_2->ep_out[0].total_length = VAR_4;
  VAR_2->ep_out[0].rem_length = VAR_4;

  FUNC_0 (VAR_2,
                          0,
                          VAR_3,
                         VAR_4);

  return VAR_1;
}
