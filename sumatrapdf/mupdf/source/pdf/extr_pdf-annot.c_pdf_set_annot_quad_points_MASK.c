
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_18__ {int obj; TYPE_9__* page; } ;
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_5__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*) ;
 TYPE_6__ FUNC_4 (TYPE_6__ const,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 int * FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,TYPE_9__*,int *,int *) ;
 int VAR_2 ;

void
FUNC_10(fz_context *VAR_3, pdf_annot *VAR_4, int VAR_5, const fz_quad *VAR_6)
{
 pdf_document *VAR_7 = VAR_4->page->doc;
 fz_matrix VAR_8, VAR_9;
 pdf_obj *VAR_10;
 fz_quad VAR_11;
 int VAR_12;

 FUNC_1(VAR_3, VAR_4, FUNC_0(VAR_1), VAR_2);
 if (VAR_5 <= 0 || !VAR_6)
  FUNC_3(VAR_3, VAR_0, "invalid number of quadrilaterals");

 FUNC_9(VAR_3, VAR_4->page, ((void*)0), &VAR_8);
 VAR_9 = FUNC_2(VAR_8);

 VAR_10 = FUNC_8(VAR_3, VAR_7, VAR_5);
 for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12)
 {
  VAR_11 = FUNC_4(VAR_6[VAR_12], VAR_9);
  FUNC_5(VAR_3, VAR_10, VAR_11.ul.x);
  FUNC_5(VAR_3, VAR_10, VAR_11.ul.y);
  FUNC_5(VAR_3, VAR_10, VAR_11.ur.x);
  FUNC_5(VAR_3, VAR_10, VAR_11.ur.y);
  FUNC_5(VAR_3, VAR_10, VAR_11.ll.x);
  FUNC_5(VAR_3, VAR_10, VAR_11.ll.y);
  FUNC_5(VAR_3, VAR_10, VAR_11.lr.x);
  FUNC_5(VAR_3, VAR_10, VAR_11.lr.y);
 }
 FUNC_6(VAR_3, VAR_4->obj, FUNC_0(VAR_1), VAR_10);
 FUNC_7(VAR_3, VAR_4);
}
