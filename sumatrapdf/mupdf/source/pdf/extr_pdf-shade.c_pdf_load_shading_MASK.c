
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_shade ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int ,int *) ;
 int * FUNC_7 (int *,int *,int *,int ) ;
 int FUNC_8 (int *,int *,int *,int ) ;

fz_shade *
FUNC_9(fz_context *VAR_9, pdf_document *VAR_10, pdf_obj *VAR_11)
{
 fz_matrix VAR_12;
 pdf_obj *VAR_13;
 fz_shade *VAR_14;

 if ((VAR_14 = FUNC_6(VAR_9, VAR_7, VAR_11)) != ((void*)0))
 {
  return VAR_14;
 }


 if (FUNC_4(VAR_9, VAR_11, FUNC_0(VAR_4)))
 {
  VAR_12 = FUNC_5(VAR_9, VAR_11, FUNC_0(VAR_3));

  VAR_13 = FUNC_4(VAR_9, VAR_11, FUNC_0(VAR_1));
  if (VAR_13)
  {
   if (FUNC_4(VAR_9, VAR_13, FUNC_0(VAR_0)) || FUNC_4(VAR_9, VAR_13, FUNC_0(VAR_6)))
   {
    FUNC_3(VAR_9, "shading with alpha not supported");
   }
  }

  VAR_13 = FUNC_4(VAR_9, VAR_11, FUNC_0(VAR_5));
  if (!VAR_13)
   FUNC_2(VAR_9, VAR_2, "missing shading dictionary");

  VAR_14 = FUNC_7(VAR_9, VAR_10, VAR_13, VAR_12);
 }


 else
 {
  VAR_14 = FUNC_7(VAR_9, VAR_10, VAR_11, VAR_8);
 }

 FUNC_8(VAR_9, VAR_11, VAR_14, FUNC_1(VAR_9, VAR_14));

 return VAR_14;
}
