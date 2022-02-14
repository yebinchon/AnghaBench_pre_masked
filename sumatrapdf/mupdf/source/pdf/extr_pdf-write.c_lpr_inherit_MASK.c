
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int *,char*) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static pdf_obj *
FUNC_4(fz_context *VAR_1, pdf_obj *VAR_2, char *VAR_3, int VAR_4)
{
 do
 {
  pdf_obj *VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);

  if (VAR_5)
   return FUNC_3(VAR_1, VAR_5);
  VAR_2 = FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_0));
  VAR_4--;
 }
 while (VAR_4 >= 0 && VAR_2);

 return ((void*)0);
}
