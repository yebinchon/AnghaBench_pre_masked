
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*,int) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *,int *,int ) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static pdf_obj *FUNC_6(fz_context *VAR_1, pdf_obj *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = FUNC_3(VAR_1, VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
 {
  pdf_obj *VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_5);
  const char *VAR_8 = FUNC_4(VAR_1, VAR_7, FUNC_0(VAR_0));
  if (FUNC_5(VAR_8) == (size_t)VAR_4 && !FUNC_1(VAR_8, VAR_3, VAR_4))
   return VAR_7;
 }
 return ((void*)0);
}
