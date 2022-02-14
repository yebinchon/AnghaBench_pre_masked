
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_8__ {int page; int obj; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_9__ {void* y; void* x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 TYPE_2__ FUNC_2 (TYPE_2__,int ) ;
 int VAR_1 ;
 int * FUNC_3 (int *,int *,int) ;
 void* FUNC_4 (int *,int *,int) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int *,int *) ;

fz_point
FUNC_7(fz_context *VAR_2, pdf_annot *VAR_3, int VAR_4, int VAR_5)
{
 pdf_obj *VAR_6;
 pdf_obj *VAR_7;
 fz_matrix VAR_8;
 fz_point VAR_9;

 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), VAR_1);

 VAR_6 = FUNC_5(VAR_2, VAR_3->obj, FUNC_0(VAR_0));
 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_4);

 FUNC_6(VAR_2, VAR_3->page, ((void*)0), &VAR_8);

 VAR_9.x = FUNC_4(VAR_2, VAR_7, VAR_5 * 2 + 0);
 VAR_9.y = FUNC_4(VAR_2, VAR_7, VAR_5 * 2 + 1);
 return FUNC_2(VAR_9, VAR_8);
}
