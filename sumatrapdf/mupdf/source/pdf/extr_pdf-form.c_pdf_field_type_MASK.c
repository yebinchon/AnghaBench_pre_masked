
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;

int FUNC_4(fz_context *VAR_15, pdf_obj *VAR_16)
{
 pdf_obj *VAR_17 = FUNC_1(VAR_15, VAR_16, FUNC_0(VAR_2));
 int VAR_18 = FUNC_2(VAR_15, VAR_16);
 if (FUNC_3(VAR_15, VAR_17, FUNC_0(VAR_0)))
 {
  if (VAR_18 & VAR_3)
   return VAR_6;
  else if (VAR_18 & VAR_4)
   return VAR_10;
  else
   return VAR_7;
 }
 else if (FUNC_3(VAR_15, VAR_17, FUNC_0(VAR_14)))
  return VAR_12;
 else if (FUNC_3(VAR_15, VAR_17, FUNC_0(VAR_1)))
 {
  if (VAR_18 & VAR_5)
   return VAR_8;
  else
   return VAR_9;
 }
 else if (FUNC_3(VAR_15, VAR_17, FUNC_0(VAR_13)))
  return VAR_11;
 else
  return VAR_6;
}
