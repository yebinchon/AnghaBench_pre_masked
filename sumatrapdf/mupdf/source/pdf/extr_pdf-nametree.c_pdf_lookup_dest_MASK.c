
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *) ;

pdf_obj *
FUNC_7(fz_context *VAR_3, pdf_document *VAR_4, pdf_obj *VAR_5)
{
 pdf_obj *VAR_6 = FUNC_1(VAR_3, FUNC_6(VAR_3, VAR_4), FUNC_0(VAR_2));
 pdf_obj *VAR_7 = FUNC_1(VAR_3, VAR_6, FUNC_0(VAR_0));
 pdf_obj *VAR_8 = FUNC_1(VAR_3, VAR_6, FUNC_0(VAR_1));
 pdf_obj *VAR_9 = ((void*)0);


 if (VAR_7)
 {
  if (FUNC_3(VAR_3, VAR_5))
   return FUNC_1(VAR_3, VAR_7, VAR_5);
  else
   return FUNC_2(VAR_3, VAR_7, FUNC_5(VAR_3, VAR_5));
 }


 if (VAR_8 && !VAR_9)
 {
  pdf_obj *VAR_10 = FUNC_1(VAR_3, VAR_8, FUNC_0(VAR_0));
  return FUNC_4(VAR_3, VAR_10, VAR_5);
 }

 return ((void*)0);
}
