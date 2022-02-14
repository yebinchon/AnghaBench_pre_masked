
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_9__ {int obj; int page; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_10__ {void* y; void* x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 TYPE_2__ FUNC_2 (TYPE_2__,int ) ;
 int VAR_1 ;
 void* FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int *,int *) ;

void
FUNC_6(fz_context *VAR_2, pdf_annot *VAR_3, fz_point *VAR_4, fz_point *VAR_5)
{
 fz_matrix VAR_6;
 pdf_obj *VAR_7;

 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), VAR_1);

 FUNC_5(VAR_2, VAR_3->page, ((void*)0), &VAR_6);

 VAR_7 = FUNC_4(VAR_2, VAR_3->obj, FUNC_0(VAR_0));
 VAR_4->x = FUNC_3(VAR_2, VAR_7, 0);
 VAR_4->y = FUNC_3(VAR_2, VAR_7, 1);
 VAR_5->x = FUNC_3(VAR_2, VAR_7, 2);
 VAR_5->y = FUNC_3(VAR_2, VAR_7, 3);
 *VAR_4 = FUNC_2(*VAR_4, VAR_6);
 *VAR_5 = FUNC_2(*VAR_5, VAR_6);
}
