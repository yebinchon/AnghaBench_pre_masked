
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_hmtx ;
struct TYPE_3__ {int size; int hmtx_cap; int hmtx_len; int hmtx; } ;
typedef TYPE_1__ pdf_font_desc ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

void
FUNC_1(fz_context *VAR_1, pdf_font_desc *VAR_2)
{
 if (!VAR_2->hmtx)
  return;
 FUNC_0(VAR_2->hmtx, VAR_2->hmtx_len, sizeof(pdf_hmtx), VAR_0);
 VAR_2->size += VAR_2->hmtx_cap * sizeof(pdf_hmtx);
}
