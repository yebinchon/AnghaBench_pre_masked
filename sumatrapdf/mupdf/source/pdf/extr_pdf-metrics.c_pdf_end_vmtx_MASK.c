
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_vmtx ;
struct TYPE_3__ {int size; int vmtx_cap; int vmtx_len; int vmtx; } ;
typedef TYPE_1__ pdf_font_desc ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

void
FUNC_1(fz_context *VAR_1, pdf_font_desc *VAR_2)
{
 if (!VAR_2->vmtx)
  return;
 FUNC_0(VAR_2->vmtx, VAR_2->vmtx_len, sizeof(pdf_vmtx), VAR_0);
 VAR_2->size += VAR_2->vmtx_cap * sizeof(pdf_vmtx);
}
