
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void* bInterval; int wMaxPacketSize; void* bmAttributes; void* bEndpointAddress; void* bDescriptorType; void* bLength; } ;
typedef TYPE_1__ USBH_EpDescTypeDef ;


 int FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1 (USBH_EpDescTypeDef *VAR_0,
                               uint8_t *VAR_1)
{

  VAR_0->bLength = *(uint8_t *) (VAR_1 + 0);
  VAR_0->bDescriptorType = *(uint8_t *) (VAR_1 + 1);
  VAR_0->bEndpointAddress = *(uint8_t *) (VAR_1 + 2);
  VAR_0->bmAttributes = *(uint8_t *) (VAR_1 + 3);
  VAR_0->wMaxPacketSize = FUNC_0 (VAR_1 + 4);
  VAR_0->bInterval = *(uint8_t *) (VAR_1 + 6);
}
