
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_7__ {int obj; TYPE_1__* page; } ;
typedef TYPE_2__ pdf_annot ;
typedef int fz_context ;
typedef enum pdf_line_ending { ____Placeholder_pdf_line_ending } pdf_line_ending ;
struct TYPE_6__ {int * doc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int *,int) ;

void
FUNC_7(fz_context *VAR_2, pdf_annot *VAR_3,
  enum pdf_line_ending VAR_4,
  enum pdf_line_ending VAR_5)
{
 pdf_document *VAR_6 = VAR_3->page->doc;
 pdf_obj *VAR_7;
 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), VAR_1);
 VAR_7 = FUNC_6(VAR_2, VAR_6, 2);
 FUNC_3(VAR_2, VAR_3->obj, FUNC_0(VAR_0), VAR_7);
 FUNC_2(VAR_2, VAR_7, 0, FUNC_5(VAR_2, VAR_4));
 FUNC_2(VAR_2, VAR_7, 1, FUNC_5(VAR_2, VAR_5));
 FUNC_4(VAR_2, VAR_3);
}
