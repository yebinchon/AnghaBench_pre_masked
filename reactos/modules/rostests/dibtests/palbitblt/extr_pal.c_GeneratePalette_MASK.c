
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rgbRed; int rgbGreen; int rgbBlue; scalar_t__ rgbReserved; } ;
typedef TYPE_1__ RGBQUAD ;



void FUNC_0(RGBQUAD* VAR_0)
{
 int VAR_1;
 for(VAR_1=0;VAR_1<256;VAR_1++)
 {
  VAR_0[VAR_1].rgbRed = VAR_1;
  VAR_0[VAR_1].rgbGreen = VAR_1;
  VAR_0[VAR_1].rgbBlue = VAR_1;
  VAR_0[VAR_1].rgbReserved = 0;
 }
}
