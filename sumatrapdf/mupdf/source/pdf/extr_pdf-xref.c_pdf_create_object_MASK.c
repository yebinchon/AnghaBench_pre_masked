
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float type; int ofs; int num; int * obj; int * stm_buf; scalar_t__ stm_ofs; scalar_t__ gen; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 TYPE_1__* FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(fz_context *VAR_2, pdf_document *VAR_3)
{

 pdf_xref_entry *VAR_4;
 int VAR_5 = FUNC_2(VAR_2, VAR_3);

 if (VAR_5 > VAR_1)
  FUNC_0(VAR_2, VAR_0, "too many objects stored in pdf");

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_5);
 VAR_4->type = 'f';
 VAR_4->ofs = -1;
 VAR_4->gen = 0;
 VAR_4->num = VAR_5;
 VAR_4->stm_ofs = 0;
 VAR_4->stm_buf = ((void*)0);
 VAR_4->obj = ((void*)0);
 return VAR_5;
}
