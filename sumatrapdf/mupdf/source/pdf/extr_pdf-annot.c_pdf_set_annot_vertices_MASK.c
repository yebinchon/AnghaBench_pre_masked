
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_10__ {int obj; TYPE_5__* page; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_11__ {int y; int x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_12__ {int * doc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*) ;
 TYPE_2__ FUNC_4 (TYPE_2__ const,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int * FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,TYPE_5__*,int *,int *) ;
 int VAR_2 ;

void
FUNC_10(fz_context *VAR_3, pdf_annot *VAR_4, int VAR_5, const fz_point *VAR_6)
{
 pdf_document *VAR_7 = VAR_4->page->doc;
 fz_matrix VAR_8, VAR_9;
 pdf_obj *VAR_10;
 fz_point VAR_11;
 int VAR_12;

 FUNC_1(VAR_3, VAR_4, FUNC_0(VAR_1), VAR_2);
 if (VAR_5 <= 0 || !VAR_6)
  FUNC_3(VAR_3, VAR_0, "invalid number of vertices");

 FUNC_9(VAR_3, VAR_4->page, ((void*)0), &VAR_8);
 VAR_9 = FUNC_2(VAR_8);

 VAR_10 = FUNC_8(VAR_3, VAR_7, VAR_5 * 2);
 for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12)
 {
  VAR_11 = FUNC_4(VAR_6[VAR_12], VAR_9);
  FUNC_5(VAR_3, VAR_10, VAR_11.x);
  FUNC_5(VAR_3, VAR_10, VAR_11.y);
 }
 FUNC_6(VAR_3, VAR_4->obj, FUNC_0(VAR_1), VAR_10);
 FUNC_7(VAR_3, VAR_4);
}
