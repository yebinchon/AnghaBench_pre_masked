
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lo; int hi; int x; } ;
typedef TYPE_1__ pdf_vmtx ;
struct TYPE_9__ {int w; } ;
typedef TYPE_2__ pdf_hmtx ;
struct TYPE_10__ {int vmtx_len; TYPE_1__ dvmtx; TYPE_1__* vmtx; } ;
typedef TYPE_3__ pdf_font_desc ;
typedef int fz_context ;


 TYPE_2__ FUNC_0 (int *,TYPE_3__*,int) ;

pdf_vmtx
FUNC_1(fz_context *VAR_0, pdf_font_desc *VAR_1, int VAR_2)
{
 pdf_hmtx VAR_3;
 pdf_vmtx VAR_4;
 int VAR_5 = 0;
 int VAR_6 = VAR_1->vmtx_len - 1;
 int VAR_7;

 if (!VAR_1->vmtx)
  goto notfound;

 while (VAR_5 <= VAR_6)
 {
  VAR_7 = (VAR_5 + VAR_6) >> 1;
  if (VAR_2 < VAR_1->vmtx[VAR_7].lo)
   VAR_6 = VAR_7 - 1;
  else if (VAR_2 > VAR_1->vmtx[VAR_7].hi)
   VAR_5 = VAR_7 + 1;
  else
   return VAR_1->vmtx[VAR_7];
 }

notfound:
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_4 = VAR_1->dvmtx;
 VAR_4.x = VAR_3.w / 2;
 return VAR_4;
}
