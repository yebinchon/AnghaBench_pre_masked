
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_18__ {int obj; TYPE_7__* page; } ;
typedef TYPE_5__ pdf_annot ;
struct TYPE_17__ {int y; int x; } ;
struct TYPE_16__ {int y; int x; } ;
struct TYPE_15__ {int y; int x; } ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_19__ {TYPE_4__ lr; TYPE_3__ ll; TYPE_2__ ur; TYPE_1__ ul; } ;
typedef TYPE_6__ fz_quad ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_20__ {int * doc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_5__*,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__ FUNC_3 (TYPE_6__,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,TYPE_7__*,int *,int *) ;
 int VAR_1 ;

void
FUNC_11(fz_context *VAR_2, pdf_annot *VAR_3, fz_quad VAR_4)
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
  VAR_8 = FUNC_9(VAR_2, VAR_5, 8);
  FUNC_6(VAR_2, VAR_3->obj, FUNC_0(VAR_0), VAR_8);
 }





 VAR_4 = FUNC_3(VAR_4, VAR_7);
 FUNC_4(VAR_2, VAR_8, VAR_4.ul.x);
 FUNC_4(VAR_2, VAR_8, VAR_4.ul.y);
 FUNC_4(VAR_2, VAR_8, VAR_4.ur.x);
 FUNC_4(VAR_2, VAR_8, VAR_4.ur.y);
 FUNC_4(VAR_2, VAR_8, VAR_4.ll.x);
 FUNC_4(VAR_2, VAR_8, VAR_4.ll.y);
 FUNC_4(VAR_2, VAR_8, VAR_4.lr.x);
 FUNC_4(VAR_2, VAR_8, VAR_4.lr.y);

 FUNC_7(VAR_2, VAR_3);
}
