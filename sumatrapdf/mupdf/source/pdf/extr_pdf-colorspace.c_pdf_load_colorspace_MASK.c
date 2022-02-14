
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int) ;

fz_colorspace *
FUNC_3(fz_context *VAR_1, pdf_obj *VAR_2)
{
 fz_colorspace *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2)) != ((void*)0))
 {
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_2(VAR_1, VAR_2, VAR_3, 1000);

 return VAR_3;
}
