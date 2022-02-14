
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hmtx_len; int hmtx_cap; TYPE_3__* hmtx; } ;
typedef TYPE_1__ pdf_font_desc ;
typedef int fz_context ;
struct TYPE_6__ {int lo; int hi; int w; } ;


 TYPE_3__* FUNC_0 (int *,TYPE_3__*,int,int ) ;
 int VAR_0 ;

void
FUNC_1(fz_context *VAR_1, pdf_font_desc *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_2->hmtx_len + 1 >= VAR_2->hmtx_cap)
 {
  int VAR_6 = VAR_2->hmtx_cap + 16;
  VAR_2->hmtx = FUNC_0(VAR_1, VAR_2->hmtx, VAR_6, VAR_0);
  VAR_2->hmtx_cap = VAR_6;
 }

 VAR_2->hmtx[VAR_2->hmtx_len].lo = VAR_3;
 VAR_2->hmtx[VAR_2->hmtx_len].hi = VAR_4;
 VAR_2->hmtx[VAR_2->hmtx_len].w = VAR_5;
 VAR_2->hmtx_len++;
}
