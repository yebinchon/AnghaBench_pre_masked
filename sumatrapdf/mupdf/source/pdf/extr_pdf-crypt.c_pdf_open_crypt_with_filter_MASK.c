
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_crypt_filter ;
typedef int pdf_crypt ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int *,int *,int *,int,int) ;
 int FUNC_4 (int *,int *,int *,int *) ;

fz_stream *
FUNC_5(fz_context *VAR_1, fz_stream *VAR_2, pdf_crypt *VAR_3, pdf_obj *VAR_4, int VAR_5, int VAR_6)
{
 if (!FUNC_2(VAR_1, VAR_4, FUNC_0(VAR_0)))
 {
  pdf_crypt_filter VAR_7;
  FUNC_4(VAR_1, &VAR_7, VAR_3, VAR_4);
  return FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_7, VAR_5, VAR_6);
 }
 return FUNC_1(VAR_1, VAR_2);
}
