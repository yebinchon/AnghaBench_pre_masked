
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(fz_context *VAR_1, pdf_obj *VAR_2)
{
 pdf_obj *VAR_3 = FUNC_3(VAR_1, VAR_2, FUNC_0(VAR_0));
 if (VAR_3)
 {
  int VAR_4, VAR_5 = FUNC_2(VAR_1, VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   FUNC_5(VAR_1, FUNC_1(VAR_1, VAR_3, VAR_4));
 }
 FUNC_4(VAR_1, VAR_2);
}
