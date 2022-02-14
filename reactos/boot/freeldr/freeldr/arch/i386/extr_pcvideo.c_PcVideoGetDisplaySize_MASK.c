
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {int BitsPerPixel; int GreenMaskSize; } ;
typedef int* PULONG ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

VOID
FUNC_0(PULONG VAR_6, PULONG VAR_7, PULONG VAR_8)
{
  *VAR_6 = VAR_2;
  *VAR_7 = VAR_1;
  if (VAR_5 == VAR_0 && VAR_3)
    {
      if (16 == VAR_4.BitsPerPixel)
        {


          *VAR_8 = (6 == VAR_4.GreenMaskSize ? 16 : 15);
        }
      else
        {
          *VAR_8 = VAR_4.BitsPerPixel;
        }
    }
  else
    {
      *VAR_8 = 0;
    }
}
