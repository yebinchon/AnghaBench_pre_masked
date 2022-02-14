
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_11__ {int obj; TYPE_6__* page; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_12__ {int y; int x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_13__ {int doc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ FUNC_3 (TYPE_2__,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,TYPE_6__*,int *,int *) ;

void
FUNC_9(fz_context *VAR_2, pdf_annot *VAR_3, fz_point VAR_4, fz_point VAR_5)
{
 fz_matrix VAR_6, VAR_7;
 pdf_obj *VAR_8;

 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), VAR_1);

 FUNC_8(VAR_2, VAR_3->page, ((void*)0), &VAR_6);
 VAR_7 = FUNC_2(VAR_6);

 VAR_4 = FUNC_3(VAR_4, VAR_7);
 VAR_5 = FUNC_3(VAR_5, VAR_7);

 VAR_8 = FUNC_7(VAR_2, VAR_3->page->doc, 4);
 FUNC_5(VAR_2, VAR_3->obj, FUNC_0(VAR_0), VAR_8);
 FUNC_4(VAR_2, VAR_8, VAR_4.x);
 FUNC_4(VAR_2, VAR_8, VAR_4.y);
 FUNC_4(VAR_2, VAR_8, VAR_5.x);
 FUNC_4(VAR_2, VAR_8, VAR_5.y);

 FUNC_6(VAR_2, VAR_3);
}
