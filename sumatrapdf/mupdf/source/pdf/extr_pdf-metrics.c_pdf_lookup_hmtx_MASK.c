
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lo; int hi; } ;
typedef TYPE_1__ pdf_hmtx ;
struct TYPE_6__ {int hmtx_len; TYPE_1__ dhmtx; TYPE_1__* hmtx; } ;
typedef TYPE_2__ pdf_font_desc ;
typedef int fz_context ;



pdf_hmtx
FUNC_0(fz_context *VAR_0, pdf_font_desc *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_1->hmtx_len - 1;
 int VAR_5;

 if (!VAR_1->hmtx)
  goto notfound;

 while (VAR_3 <= VAR_4)
 {
  VAR_5 = (VAR_3 + VAR_4) >> 1;
  if (VAR_2 < VAR_1->hmtx[VAR_5].lo)
   VAR_4 = VAR_5 - 1;
  else if (VAR_2 > VAR_1->hmtx[VAR_5].hi)
   VAR_3 = VAR_5 + 1;
  else
   return VAR_1->hmtx[VAR_5];
 }

notfound:
 return VAR_1->dhmtx;
}
