
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_pixmap ;
typedef int fz_matrix ;
typedef int fz_irect ;
typedef int fz_font ;
typedef int fz_context ;


 float VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *,int,int ,int) ;
 int * FUNC_3 (int *,int *,int,int ,int *,int const*,int) ;
 float FUNC_4 (int *,int *,int *,unsigned char*,unsigned char*) ;
 int FUNC_5 (int *,char*) ;

fz_pixmap *
FUNC_6(fz_context *VAR_2, fz_font *VAR_3, int VAR_4, fz_matrix *VAR_5, const fz_irect *VAR_6, int VAR_7)
{
 fz_pixmap *VAR_8 = ((void*)0);
 unsigned char VAR_9, VAR_10;
 fz_matrix VAR_11;
 float VAR_12 = FUNC_4(VAR_2, VAR_5, &VAR_11, &VAR_9, &VAR_10);
 int VAR_13 = !!FUNC_0(VAR_2, VAR_3);

 if (VAR_12 <= VAR_0)
 {
  VAR_6 = &VAR_1;
 }
 else
 {
  if (VAR_13)
   return ((void*)0);
 }

 if (VAR_13)
 {
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_11, VAR_7);
 }
 else if (FUNC_1(VAR_2, VAR_3))
 {
  VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_11, ((void*)0), VAR_6, VAR_7);
 }
 else
 {
  FUNC_5(VAR_2, "assert: uninitialized font structure");
  VAR_8 = ((void*)0);
 }

 return VAR_8;
}
