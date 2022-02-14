
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,char const*,int) ;
 int * FUNC_2 (int *,int *,int ) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*) ;

pdf_obj *FUNC_5(fz_context *VAR_1, pdf_obj *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 const char *VAR_5;
 pdf_obj *VAR_6 = ((void*)0);
 int VAR_7;




 VAR_4 = VAR_3 - 1;

 while (VAR_4 && VAR_2)
 {
  VAR_5 = VAR_4 + 1;
  VAR_4 = FUNC_3(VAR_5, '.');
  VAR_7 = VAR_4 ? VAR_4 - VAR_5 : (int)FUNC_4(VAR_5);
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_7);
  if (VAR_4)
   VAR_2 = FUNC_2(VAR_1, VAR_6, FUNC_0(VAR_0));
 }

 return VAR_6;
}
