
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int low; unsigned int high; unsigned int out; } ;
typedef TYPE_1__ pdf_xrange ;
struct TYPE_6__ {unsigned int low; unsigned int high; unsigned int out; } ;
typedef TYPE_2__ pdf_range ;
struct TYPE_7__ {int rlen; int xlen; struct TYPE_7__* usecmap; TYPE_1__* xranges; TYPE_2__* ranges; } ;
typedef TYPE_3__ pdf_cmap ;



int
FUNC_0(pdf_cmap *VAR_0, unsigned int VAR_1)
{
 pdf_range *VAR_2 = VAR_0->ranges;
 pdf_xrange *VAR_3 = VAR_0->xranges;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = 0;
 VAR_5 = VAR_0->rlen - 1;
 while (VAR_4 <= VAR_5)
 {
  VAR_6 = (VAR_4 + VAR_5) >> 1;
  if (VAR_1 < VAR_2[VAR_6].low)
   VAR_5 = VAR_6 - 1;
  else if (VAR_1 > VAR_2[VAR_6].high)
   VAR_4 = VAR_6 + 1;
  else
   return VAR_1 - VAR_2[VAR_6].low + VAR_2[VAR_6].out;
 }

 VAR_4 = 0;
 VAR_5 = VAR_0->xlen - 1;
 while (VAR_4 <= VAR_5)
 {
  VAR_6 = (VAR_4 + VAR_5) >> 1;
  if (VAR_1 < VAR_3[VAR_6].low)
   VAR_5 = VAR_6 - 1;
  else if (VAR_1 > VAR_3[VAR_6].high)
   VAR_4 = VAR_6 + 1;
  else
   return VAR_1 - VAR_3[VAR_6].low + VAR_3[VAR_6].out;
 }

 if (VAR_0->usecmap)
  return FUNC_0(VAR_0->usecmap, VAR_1);

 return -1;
}
