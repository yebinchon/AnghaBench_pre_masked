
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {void* bNumConfigurations; void* iSerialNumber; void* iProduct; void* iManufacturer; void* bcdDevice; void* idProduct; void* idVendor; void* bMaxPacketSize; void* bDeviceProtocol; void* bDeviceSubClass; void* bDeviceClass; void* bcdUSB; void* bDescriptorType; void* bLength; } ;
typedef TYPE_1__ USBH_DevDescTypeDef ;


 void* FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1 (USBH_DevDescTypeDef* VAR_0,
                                uint8_t *VAR_1,
                                uint16_t VAR_2)
{
  VAR_0->bLength = *(uint8_t *) (VAR_1 + 0);
  VAR_0->bDescriptorType = *(uint8_t *) (VAR_1 + 1);
  VAR_0->bcdUSB = FUNC_0 (VAR_1 + 2);
  VAR_0->bDeviceClass = *(uint8_t *) (VAR_1 + 4);
  VAR_0->bDeviceSubClass = *(uint8_t *) (VAR_1 + 5);
  VAR_0->bDeviceProtocol = *(uint8_t *) (VAR_1 + 6);
  VAR_0->bMaxPacketSize = *(uint8_t *) (VAR_1 + 7);

  if (VAR_2 > 8)
  {

    VAR_0->idVendor = FUNC_0 (VAR_1 + 8);
    VAR_0->idProduct = FUNC_0 (VAR_1 + 10);
    VAR_0->bcdDevice = FUNC_0 (VAR_1 + 12);
    VAR_0->iManufacturer = *(uint8_t *) (VAR_1 + 14);
    VAR_0->iProduct = *(uint8_t *) (VAR_1 + 15);
    VAR_0->iSerialNumber = *(uint8_t *) (VAR_1 + 16);
    VAR_0->bNumConfigurations = *(uint8_t *) (VAR_1 + 17);
  }
}
