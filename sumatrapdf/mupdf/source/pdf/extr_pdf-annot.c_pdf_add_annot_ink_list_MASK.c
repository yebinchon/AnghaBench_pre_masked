
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_9__ {int obj; int page; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_10__ {int y; int x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ FUNC_3 (TYPE_2__,int ) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int *,int ,int ,int) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ,int *,int *) ;

void
FUNC_11(fz_context *VAR_2, pdf_annot *VAR_3, int VAR_4, fz_point VAR_5[])
{
 fz_matrix VAR_6, VAR_7;
 pdf_obj *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), VAR_1);

 FUNC_10(VAR_2, VAR_3->page, ((void*)0), &VAR_6);
 VAR_7 = FUNC_2(VAR_6);

 VAR_8 = FUNC_6(VAR_2, VAR_3->obj, FUNC_0(VAR_0));
 if (!FUNC_9(VAR_2, VAR_8))
  VAR_8 = FUNC_7(VAR_2, VAR_3->obj, FUNC_0(VAR_0), 10);

 VAR_9 = FUNC_4(VAR_2, VAR_8, VAR_4 * 2);
 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10)
 {
  fz_point VAR_11 = FUNC_3(VAR_5[VAR_10], VAR_7);
  FUNC_5(VAR_2, VAR_9, VAR_11.x);
  FUNC_5(VAR_2, VAR_9, VAR_11.y);
 }

 FUNC_8(VAR_2, VAR_3);
}
