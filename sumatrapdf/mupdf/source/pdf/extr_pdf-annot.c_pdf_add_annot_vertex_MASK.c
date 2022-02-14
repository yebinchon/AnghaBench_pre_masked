
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_10__ {int obj; TYPE_3__* page; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_11__ {int y; int x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_12__ {int * doc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ FUNC_3 (TYPE_2__,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,TYPE_3__*,int *,int *) ;
 int VAR_1 ;

void FUNC_11(fz_context *VAR_2, pdf_annot *VAR_3, fz_point VAR_4)
{
 pdf_document *VAR_5 = VAR_3->page->doc;
 fz_matrix VAR_6, VAR_7;
 pdf_obj *VAR_8;

 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), VAR_1);

 FUNC_10(VAR_2, VAR_3->page, ((void*)0), &VAR_6);
 VAR_7 = FUNC_2(VAR_6);

 VAR_8 = FUNC_5(VAR_2, VAR_3->obj, FUNC_0(VAR_0));
 if (!FUNC_8(VAR_2, VAR_8))
 {
  VAR_8 = FUNC_9(VAR_2, VAR_5, 32);
  FUNC_6(VAR_2, VAR_3->obj, FUNC_0(VAR_0), VAR_8);
 }

 VAR_4 = FUNC_3(VAR_4, VAR_7);
 FUNC_4(VAR_2, VAR_8, VAR_4.x);
 FUNC_4(VAR_2, VAR_8, VAR_4.y);

 FUNC_7(VAR_2, VAR_3);
}
