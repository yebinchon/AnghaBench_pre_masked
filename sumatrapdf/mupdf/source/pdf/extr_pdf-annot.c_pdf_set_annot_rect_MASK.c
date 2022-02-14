
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obj; int page; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ,int *,int *) ;

void
FUNC_6(fz_context *VAR_1, pdf_annot *VAR_2, fz_rect VAR_3)
{
 fz_matrix VAR_4, VAR_5;

 FUNC_5(VAR_1, VAR_2->page, ((void*)0), &VAR_4);
 VAR_5 = FUNC_1(VAR_4);
 VAR_3 = FUNC_2(VAR_3, VAR_5);

 FUNC_3(VAR_1, VAR_2->obj, FUNC_0(VAR_0), VAR_3);
 FUNC_4(VAR_1, VAR_2);
}
