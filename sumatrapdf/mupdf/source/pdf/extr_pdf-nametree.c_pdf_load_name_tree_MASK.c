
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (int *,int *,int) ;
 int * FUNC_5 (int *,int *) ;

pdf_obj *
FUNC_6(fz_context *VAR_2, pdf_document *VAR_3, pdf_obj *VAR_4)
{
 pdf_obj *VAR_5 = FUNC_1(VAR_2, FUNC_5(VAR_2, VAR_3), FUNC_0(VAR_1));
 pdf_obj *VAR_6 = FUNC_1(VAR_2, VAR_5, FUNC_0(VAR_0));
 pdf_obj *VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_4);
 if (FUNC_2(VAR_2, VAR_7))
 {
  pdf_obj *VAR_8 = FUNC_4(VAR_2, VAR_3, 100);
  FUNC_3(VAR_2, VAR_8, VAR_3, VAR_7);
  return VAR_8;
 }
 return ((void*)0);
}
