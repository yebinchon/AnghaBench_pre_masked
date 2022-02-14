
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int VAR_3 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;

pdf_obj *FUNC_3(fz_context *VAR_4, pdf_obj *VAR_5)
{
 pdf_obj *VAR_6 = FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_0));
 pdf_obj *VAR_7 = FUNC_1(VAR_4, FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_2)));
 if (!VAR_7) VAR_7 = FUNC_1(VAR_4, FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_1)));
 if (!VAR_7) VAR_7 = FUNC_0(VAR_3);
 return VAR_7;
}
