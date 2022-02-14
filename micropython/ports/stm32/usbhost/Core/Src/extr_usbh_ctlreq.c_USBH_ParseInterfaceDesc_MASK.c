
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void* iInterface; void* bInterfaceProtocol; void* bInterfaceSubClass; void* bInterfaceClass; void* bNumEndpoints; void* bAlternateSetting; void* bInterfaceNumber; void* bDescriptorType; void* bLength; } ;
typedef TYPE_1__ USBH_InterfaceDescTypeDef ;



__attribute__((used)) static void FUNC_0 (USBH_InterfaceDescTypeDef *VAR_0,
                                      uint8_t *VAR_1)
{
  VAR_0->bLength = *(uint8_t *) (VAR_1 + 0);
  VAR_0->bDescriptorType = *(uint8_t *) (VAR_1 + 1);
  VAR_0->bInterfaceNumber = *(uint8_t *) (VAR_1 + 2);
  VAR_0->bAlternateSetting = *(uint8_t *) (VAR_1 + 3);
  VAR_0->bNumEndpoints = *(uint8_t *) (VAR_1 + 4);
  VAR_0->bInterfaceClass = *(uint8_t *) (VAR_1 + 5);
  VAR_0->bInterfaceSubClass = *(uint8_t *) (VAR_1 + 6);
  VAR_0->bInterfaceProtocol = *(uint8_t *) (VAR_1 + 7);
  VAR_0->iInterface = *(uint8_t *) (VAR_1 + 8);
}
