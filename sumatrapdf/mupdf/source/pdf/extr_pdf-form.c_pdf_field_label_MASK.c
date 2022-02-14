
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,int ) ;
 char const* FUNC_2 (int *,int *) ;

const char *FUNC_3(fz_context *VAR_2, pdf_obj *VAR_3)
{
 pdf_obj *VAR_4 = FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_1));
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0));
 if (VAR_4)
  return FUNC_2(VAR_2, VAR_4);
 return "Unnamed";
}
