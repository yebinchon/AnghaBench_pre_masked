
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_image ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *,int ) ;

fz_image *
FUNC_4(fz_context *VAR_1, pdf_document *VAR_2, pdf_obj *VAR_3)
{
 fz_image *VAR_4;

 if ((VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_3)) != ((void*)0))
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, ((void*)0), VAR_3, ((void*)0), 0);
 FUNC_3(VAR_1, VAR_3, VAR_4, FUNC_0(VAR_1, VAR_4));
 return VAR_4;
}
