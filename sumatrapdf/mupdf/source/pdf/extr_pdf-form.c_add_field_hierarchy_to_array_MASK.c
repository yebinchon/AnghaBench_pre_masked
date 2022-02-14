
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(fz_context *VAR_2, pdf_obj *VAR_3, pdf_obj *VAR_4)
{
 pdf_obj *VAR_5 = FUNC_4(VAR_2, VAR_4, FUNC_0(VAR_1));
 pdf_obj *VAR_6 = FUNC_4(VAR_2, VAR_4, FUNC_0(VAR_0));

 if (VAR_6)
  return;

 FUNC_3(VAR_2, VAR_3, VAR_4);

 if (VAR_5)
 {
  int VAR_7, VAR_8 = FUNC_2(VAR_2, VAR_5);

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   FUNC_5(VAR_2, VAR_3, FUNC_1(VAR_2, VAR_5, VAR_7));
 }
}
