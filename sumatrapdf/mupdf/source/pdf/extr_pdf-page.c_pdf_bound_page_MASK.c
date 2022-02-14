
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_page ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int *,int *) ;

fz_rect
FUNC_2(fz_context *VAR_0, pdf_page *VAR_1)
{
 fz_matrix VAR_2;
 fz_rect VAR_3;
 FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_2);
 return FUNC_0(VAR_3, VAR_2);
}
