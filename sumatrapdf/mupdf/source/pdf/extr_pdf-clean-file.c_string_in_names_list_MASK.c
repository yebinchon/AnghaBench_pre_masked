
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(fz_context *VAR_0, pdf_obj *VAR_1, pdf_obj *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_2);
 int VAR_4;
 char *VAR_5 = FUNC_2(VAR_0, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3 ; VAR_4 += 2)
 {
  if (!FUNC_3(FUNC_2(VAR_0, FUNC_0(VAR_0, VAR_2, VAR_4)), VAR_5))
   return 1;
 }
 return 0;
}
