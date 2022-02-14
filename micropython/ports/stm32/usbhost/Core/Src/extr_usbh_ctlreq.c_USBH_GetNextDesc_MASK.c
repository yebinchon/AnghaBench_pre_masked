
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int bLength; } ;
typedef TYPE_1__ USBH_DescHeader_t ;



USBH_DescHeader_t *FUNC_0 (uint8_t *VAR_0, uint16_t *VAR_1)
{
  USBH_DescHeader_t *VAR_2;

  *VAR_1 += ((USBH_DescHeader_t *)VAR_0)->bLength;
  VAR_2 = (USBH_DescHeader_t *)((uint8_t *)VAR_0 + ((USBH_DescHeader_t *)VAR_0)->bLength);


  return(VAR_2);
}
