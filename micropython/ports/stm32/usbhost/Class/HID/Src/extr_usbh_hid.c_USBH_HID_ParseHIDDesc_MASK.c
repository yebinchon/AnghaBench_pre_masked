
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void* wItemLength; void* bReportDescriptorType; void* bNumDescriptors; void* bCountryCode; void* bcdHID; void* bDescriptorType; void* bLength; } ;
typedef TYPE_1__ HID_DescTypeDef ;


 void* FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1 (HID_DescTypeDef *VAR_0, uint8_t *VAR_1)
{

  VAR_0->bLength = *(uint8_t *) (VAR_1 + 0);
  VAR_0->bDescriptorType = *(uint8_t *) (VAR_1 + 1);
  VAR_0->bcdHID = FUNC_0 (VAR_1 + 2);
  VAR_0->bCountryCode = *(uint8_t *) (VAR_1 + 4);
  VAR_0->bNumDescriptors = *(uint8_t *) (VAR_1 + 5);
  VAR_0->bReportDescriptorType = *(uint8_t *) (VAR_1 + 6);
  VAR_0->wItemLength = FUNC_0 (VAR_1 + 7);
}
