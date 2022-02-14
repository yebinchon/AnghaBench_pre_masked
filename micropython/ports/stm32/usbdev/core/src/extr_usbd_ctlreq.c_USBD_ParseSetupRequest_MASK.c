
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void* wLength; void* wIndex; void* wValue; void* bRequest; void* bmRequest; } ;
typedef TYPE_1__ USBD_SetupReqTypedef ;


 void* FUNC_0 (void**) ;

void FUNC_1(USBD_SetupReqTypedef *VAR_0, uint8_t *VAR_1)
{
  VAR_0->bmRequest = *(uint8_t *) (VAR_1);
  VAR_0->bRequest = *(uint8_t *) (VAR_1 + 1);
  VAR_0->wValue = FUNC_0 (VAR_1 + 2);
  VAR_0->wIndex = FUNC_0 (VAR_1 + 4);
  VAR_0->wLength = FUNC_0 (VAR_1 + 6);

}
