
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* data; int shift; int physical_min; int physical_max; scalar_t__ count; int size; int resolution; } ;
typedef TYPE_1__ HID_Report_ItemTypedef ;



uint32_t FUNC_0(HID_Report_ItemTypedef *VAR_0, uint32_t VAR_1, uint8_t VAR_2)
{
  uint32_t VAR_3;
  uint32_t VAR_4;
  uint32_t VAR_5;
  uint8_t *VAR_6=VAR_0->data;
  uint8_t VAR_7=VAR_0->shift;

  if (VAR_1 < VAR_0->physical_min || VAR_1 > VAR_0->physical_max)
  {
    return(1);
  }


  if (VAR_0->count > 0)
  {

    if (VAR_0->count >= VAR_2)
    {
      return(0);
    }

    VAR_5 = VAR_2*VAR_0->size;
    VAR_5 += VAR_7;

    VAR_6+=VAR_5/8;
    VAR_7=(uint8_t)(VAR_5%8);

  }


  if (VAR_0->resolution != 1)
  {
    VAR_1=VAR_1/VAR_0->resolution;
  }


  VAR_4=(uint32_t)((1<<VAR_0->size)-1);
  VAR_1 = (VAR_1 & VAR_4) << VAR_7;

  for(VAR_3=0; VAR_3 < ((VAR_0->size & 0x7) ? (VAR_0->size/8)+1 : (VAR_0->size/8)); VAR_3++)
  {
    *(VAR_0->data+VAR_3)=(uint8_t)((*(VAR_0->data+VAR_3) & ~(VAR_4>>(VAR_3*8))) | ((VAR_1>>(VAR_3*8)) & (VAR_4>>(VAR_3*8))));
  }
  return(0);
}
