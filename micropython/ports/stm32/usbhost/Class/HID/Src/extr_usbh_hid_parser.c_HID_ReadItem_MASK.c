
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* data; int shift; scalar_t__ count; int size; int logical_min; int logical_max; int resolution; scalar_t__ sign; } ;
typedef TYPE_1__ HID_Report_ItemTypedef ;



uint32_t FUNC_0(HID_Report_ItemTypedef *VAR_0, uint8_t VAR_1)
{
  uint32_t VAR_2=0;
  uint32_t VAR_3=0;
  uint32_t VAR_4;
  uint8_t *VAR_5=VAR_0->data;
  uint8_t VAR_6=VAR_0->shift;




  if (VAR_0->count > 0)
  {

    if (VAR_0->count <= VAR_1)
    {
      return(0);
    }


    VAR_4 = VAR_1*VAR_0->size;
    VAR_4 += VAR_6;

    VAR_5+=VAR_4/8;
    VAR_6=(uint8_t)(VAR_4%8);
  }

  for(VAR_3=0; VAR_3 < ((VAR_0->size & 0x7) ? (VAR_0->size/8)+1 : (VAR_0->size/8)); VAR_3++)
  {
    VAR_2=(uint32_t)(*VAR_5 << (VAR_3*8));
  }
  VAR_2=(VAR_2 >> VAR_6) & ((1<<VAR_0->size)-1);

  if (VAR_2 < VAR_0->logical_min || VAR_2 > VAR_0->logical_max)
  {
    return(0);
  }



  if ((VAR_0->sign) && (VAR_2 & (1<<(VAR_0->size-1))))
  {

    int VAR_7=(int)((-1 & ~((1<<(VAR_0->size))-1)) | VAR_2);

    if(VAR_0->resolution == 1)
    {
      return((uint32_t)VAR_7);
    }
    return((uint32_t)(VAR_7*VAR_0->resolution));
  }
  else
  {
    if(VAR_0->resolution == 1)
    {
      return(VAR_2);
    }
    return(VAR_2*VAR_0->resolution);
  }
}
