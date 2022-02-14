
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
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int
FUNC_9(fz_context *VAR_5, pdf_document *VAR_6, pdf_obj *VAR_7, int VAR_8)
{
 pdf_obj *VAR_9 = FUNC_4(VAR_5, VAR_7, FUNC_0(VAR_2));
 int VAR_10, VAR_11 = 0, VAR_12 = FUNC_3(VAR_5, VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
 {
  pdf_obj *VAR_13 = FUNC_2(VAR_5, VAR_9, VAR_10);
  if (FUNC_8(VAR_5, VAR_13) == VAR_8)
   return VAR_11;
  if (FUNC_6(VAR_5, FUNC_4(VAR_5, VAR_13, FUNC_0(VAR_4)), FUNC_0(VAR_3)))
  {
   pdf_obj *VAR_14 = FUNC_4(VAR_5, VAR_13, FUNC_0(VAR_0));
   int VAR_15 = FUNC_7(VAR_5, VAR_14);
   if (!FUNC_5(VAR_5, VAR_14) || VAR_15 < 0)
    FUNC_1(VAR_5, VAR_1, "illegal or missing count in pages tree");
   VAR_11 += VAR_15;
  }
  else
   VAR_11++;
 }
 FUNC_1(VAR_5, VAR_1, "kid not found in parent's kids array");
}
