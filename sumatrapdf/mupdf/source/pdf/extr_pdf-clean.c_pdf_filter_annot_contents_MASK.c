
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_text_filter_fn ;
typedef int pdf_page_contents_process_fn ;
typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int pdf_after_text_object_fn ;
typedef int fz_cookie ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int,int *,int *,void*,int,int) ;
 int * FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(fz_context *VAR_1, pdf_document *VAR_2, pdf_annot *VAR_3, fz_cookie *VAR_4,
 pdf_page_contents_process_fn *VAR_5, pdf_text_filter_fn *VAR_6, pdf_after_text_object_fn *VAR_7, void *VAR_8, int VAR_9, int VAR_10)
{
 pdf_obj *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_2(VAR_1, VAR_3->obj, FUNC_0(VAR_0));
 if (VAR_11 == ((void*)0))
  return;

 VAR_13 = FUNC_4(VAR_1, VAR_11);
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
 {
  pdf_obj *VAR_14 = FUNC_3(VAR_1, VAR_11, VAR_12);

  if (VAR_14 == ((void*)0))
   continue;

  FUNC_1(VAR_1, VAR_2, VAR_14, ((void*)0), VAR_4, 1, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }
}
