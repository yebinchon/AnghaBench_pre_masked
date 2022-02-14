
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_7__ {int obj; int page; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ FUNC_2 (TYPE_2__,int ) ;
 int * FUNC_3 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int *,int *) ;

void FUNC_8(fz_context *VAR_1, pdf_annot *VAR_2, fz_point VAR_3)
{
 fz_matrix VAR_4, VAR_5;
 pdf_obj *VAR_6, *VAR_7;

 FUNC_7(VAR_1, VAR_2->page, ((void*)0), &VAR_4);
 VAR_5 = FUNC_1(VAR_4);

 VAR_6 = FUNC_6(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 VAR_7 = FUNC_3(VAR_1, VAR_6, FUNC_4(VAR_1, VAR_6)-1);

 VAR_3 = FUNC_2(VAR_3, VAR_5);
 FUNC_5(VAR_1, VAR_7, VAR_3.x);
 FUNC_5(VAR_1, VAR_7, VAR_3.y);
}
