
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vmtx_len; int vmtx_cap; TYPE_3__* vmtx; } ;
typedef TYPE_1__ pdf_font_desc ;
typedef int fz_context ;
struct TYPE_6__ {int lo; int hi; int x; int y; int w; } ;


 TYPE_3__* FUNC_0 (int *,TYPE_3__*,int,int ) ;
 int VAR_0 ;

void
FUNC_1(fz_context *VAR_1, pdf_font_desc *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_2->vmtx_len + 1 >= VAR_2->vmtx_cap)
 {
  int VAR_8 = VAR_2->vmtx_cap + 16;
  VAR_2->vmtx = FUNC_0(VAR_1, VAR_2->vmtx, VAR_8, VAR_0);
  VAR_2->vmtx_cap = VAR_8;
 }

 VAR_2->vmtx[VAR_2->vmtx_len].lo = VAR_3;
 VAR_2->vmtx[VAR_2->vmtx_len].hi = VAR_4;
 VAR_2->vmtx[VAR_2->vmtx_len].x = VAR_5;
 VAR_2->vmtx[VAR_2->vmtx_len].y = VAR_6;
 VAR_2->vmtx[VAR_2->vmtx_len].w = VAR_7;
 VAR_2->vmtx_len++;
}
