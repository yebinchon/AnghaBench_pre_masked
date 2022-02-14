
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 (int *,int *,char*) ;
 scalar_t__ FUNC_5 (int *,int *,char const*) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int * FUNC_7 (int *,char const*) ;

__attribute__((used)) static void FUNC_8(fz_context *VAR_3, pdf_document *VAR_4, pdf_obj *VAR_5, const char *VAR_6)
{
 pdf_obj *VAR_7 = FUNC_3(VAR_3, VAR_5, FUNC_0(VAR_1));

 if (VAR_7)
 {
  int VAR_8, VAR_9 = FUNC_2(VAR_3, VAR_7);

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   FUNC_8(VAR_3, VAR_4, FUNC_1(VAR_3, VAR_7, VAR_8), VAR_6);
 }
 else
 {
  pdf_obj *VAR_10 = FUNC_4(VAR_3, VAR_5, "AP/N");
  pdf_obj *VAR_11;

  if (FUNC_5(VAR_3, VAR_10, VAR_6))
   VAR_11 = FUNC_7(VAR_3, VAR_6);
  else
   VAR_11 = FUNC_0(VAR_2);
  FUNC_6(VAR_3, VAR_5, FUNC_0(VAR_0), VAR_11);
 }
}
