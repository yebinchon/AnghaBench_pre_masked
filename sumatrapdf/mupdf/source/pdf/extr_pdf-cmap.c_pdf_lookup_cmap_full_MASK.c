
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int low; unsigned int high; unsigned int out; } ;
typedef TYPE_1__ pdf_xrange ;
struct TYPE_7__ {unsigned int low; unsigned int high; unsigned int out; } ;
typedef TYPE_2__ pdf_range ;
struct TYPE_8__ {unsigned int low; size_t out; } ;
typedef TYPE_3__ pdf_mrange ;
struct TYPE_9__ {int rlen; int xlen; int mlen; int* dict; struct TYPE_9__* usecmap; TYPE_3__* mranges; TYPE_1__* xranges; TYPE_2__* ranges; } ;
typedef TYPE_4__ pdf_cmap ;



int
FUNC_0(pdf_cmap *VAR_0, unsigned int VAR_1, int *VAR_2)
{
 pdf_range *VAR_3 = VAR_0->ranges;
 pdf_xrange *VAR_4 = VAR_0->xranges;
 pdf_mrange *VAR_5 = VAR_0->mranges;
 unsigned int VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = 0;
 VAR_8 = VAR_0->rlen - 1;
 while (VAR_7 <= VAR_8)
 {
  VAR_9 = (VAR_7 + VAR_8) >> 1;
  if (VAR_1 < VAR_3[VAR_9].low)
   VAR_8 = VAR_9 - 1;
  else if (VAR_1 > VAR_3[VAR_9].high)
   VAR_7 = VAR_9 + 1;
  else
  {
   VAR_2[0] = VAR_1 - VAR_3[VAR_9].low + VAR_3[VAR_9].out;
   return 1;
  }
 }

 VAR_7 = 0;
 VAR_8 = VAR_0->xlen - 1;
 while (VAR_7 <= VAR_8)
 {
  VAR_9 = (VAR_7 + VAR_8) >> 1;
  if (VAR_1 < VAR_4[VAR_9].low)
   VAR_8 = VAR_9 - 1;
  else if (VAR_1 > VAR_4[VAR_9].high)
   VAR_7 = VAR_9 + 1;
  else
  {
   VAR_2[0] = VAR_1 - VAR_4[VAR_9].low + VAR_4[VAR_9].out;
   return 1;
  }
 }

 VAR_7 = 0;
 VAR_8 = VAR_0->mlen - 1;
 while (VAR_7 <= VAR_8)
 {
  VAR_9 = (VAR_7 + VAR_8) >> 1;
  if (VAR_1 < VAR_5[VAR_9].low)
   VAR_8 = VAR_9 - 1;
  else if (VAR_1 > VAR_5[VAR_9].low)
   VAR_7 = VAR_9 + 1;
  else
  {
   int *VAR_10 = &VAR_0->dict[VAR_0->mranges[VAR_9].out];
   unsigned int VAR_11 = (unsigned int)*VAR_10++;
   for (VAR_6 = 0; VAR_6 < VAR_11; ++VAR_6)
    VAR_2[VAR_6] = *VAR_10++;
   return VAR_11;
  }
 }

 if (VAR_0->usecmap)
  return FUNC_0(VAR_0->usecmap, VAR_1, VAR_2);

 return 0;
}
