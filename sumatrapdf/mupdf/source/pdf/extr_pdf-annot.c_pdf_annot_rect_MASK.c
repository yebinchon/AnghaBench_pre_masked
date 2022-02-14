
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int obj; int page; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int *,int *) ;

fz_rect
FUNC_4(fz_context *VAR_1, pdf_annot *VAR_2)
{
 fz_matrix VAR_3;
 fz_rect VAR_4;
 FUNC_3(VAR_1, VAR_2->page, ((void*)0), &VAR_3);
 VAR_4 = FUNC_2(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 return FUNC_1(VAR_4, VAR_3);
}
