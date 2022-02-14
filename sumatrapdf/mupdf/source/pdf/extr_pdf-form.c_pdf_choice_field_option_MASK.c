
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int) ;
 char const* FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 char const* FUNC_5 (int *,int *) ;

const char *FUNC_6(fz_context *VAR_1, pdf_obj *VAR_2, int VAR_3, int VAR_4)
{
 pdf_obj *VAR_5 = FUNC_4(VAR_1, VAR_2, FUNC_0(VAR_0));
 pdf_obj *VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_4);
 if (FUNC_3(VAR_1, VAR_6) == 2)
  return FUNC_2(VAR_1, VAR_6, VAR_3 ? 0 : 1);
 else
  return FUNC_5(VAR_1, VAR_6);
}
