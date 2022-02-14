
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
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(fz_context *VAR_3, pdf_document *VAR_4, pdf_obj *VAR_5)
{
 pdf_obj *VAR_6, *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_2));
 VAR_7 = FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_1));

 if (FUNC_7(VAR_3, VAR_6))
 {

  if (FUNC_2(VAR_3, VAR_6, 0) == FUNC_0(VAR_0))
  {
   VAR_8 = 1;
   FUNC_1(VAR_3, VAR_6, 0);
   if (FUNC_7(VAR_3, VAR_7))
    FUNC_1(VAR_3, VAR_7, 0);
  }

  if (FUNC_3(VAR_3, VAR_6) == 1)
  {
   VAR_6 = FUNC_2(VAR_3, VAR_6, 0);
   FUNC_6(VAR_3, VAR_5, FUNC_0(VAR_2), VAR_6);
   if (VAR_7)
   {
    VAR_7 = FUNC_2(VAR_3, VAR_7, 0);
    FUNC_6(VAR_3, VAR_5, FUNC_0(VAR_1), VAR_7);
   }
  }

  else if (FUNC_3(VAR_3, VAR_6) == 0)
  {
   FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_2));
   FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_1));
  }
 }
 else if (VAR_6 == FUNC_0(VAR_0))
 {
  VAR_8 = 1;
  FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_2));
  FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_1));
 }

 return VAR_8;
}
