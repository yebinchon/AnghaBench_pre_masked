
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int *) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_0, pdf_obj *VAR_1, pdf_obj *VAR_2, pdf_obj *VAR_3)
{
 pdf_obj *VAR_4, *VAR_5;
 int VAR_6, VAR_7;


 VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);
 if (!VAR_4)
  return;



 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_5 == ((void*)0))
 {
  VAR_4 = FUNC_10(VAR_0, VAR_4);
  if (FUNC_9(VAR_0, VAR_4))
   VAR_4 = FUNC_1(VAR_0, VAR_4);
  else if (FUNC_8(VAR_0, VAR_4))
   VAR_4 = FUNC_0(VAR_0, VAR_4);
  else
   VAR_4 = ((void*)0);
  if (VAR_4)
   FUNC_7(VAR_0, VAR_1, VAR_3, VAR_4);
  return;
 }


 if (FUNC_9(VAR_0, VAR_4))
 {
  VAR_7 = FUNC_5(VAR_0, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  {
   pdf_obj *VAR_8 = FUNC_3(VAR_0, VAR_4, VAR_6);
   pdf_obj *VAR_9 = FUNC_4(VAR_0, VAR_4, VAR_6);

   if (FUNC_2(VAR_0, VAR_1, VAR_8))
    continue;
   FUNC_6(VAR_0, VAR_1, VAR_8, VAR_9);
  }
 }
}
