
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float type; int gen; int * obj; int * stm_buf; scalar_t__ stm_ofs; scalar_t__ num; scalar_t__ ofs; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2)
{
 pdf_xref_entry *VAR_3;

 if (VAR_2 <= 0 || VAR_2 >= FUNC_4(VAR_0, VAR_1))
 {
  FUNC_1(VAR_0, "object out of range (%d 0 R); xref size %d", VAR_2, FUNC_4(VAR_0, VAR_1));
  return;
 }

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_0(VAR_0, VAR_3->stm_buf);
 FUNC_2(VAR_0, VAR_3->obj);

 VAR_3->type = 'f';
 VAR_3->ofs = 0;
 VAR_3->gen += 1;
 VAR_3->num = 0;
 VAR_3->stm_ofs = 0;
 VAR_3->stm_buf = ((void*)0);
 VAR_3->obj = ((void*)0);
}
