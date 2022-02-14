
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

int FUNC_4(fz_context *VAR_9, pdf_obj *VAR_10)
{
 pdf_obj *VAR_11;
 int VAR_12, VAR_13 = VAR_3;




 while ((VAR_11 = FUNC_2(VAR_9, VAR_10, FUNC_0(VAR_5))) != ((void*)0))
  VAR_10 = FUNC_1(VAR_9, VAR_11, 0);

 VAR_12 = FUNC_3(VAR_9, VAR_10, FUNC_0(VAR_4));

 if (VAR_12 & VAR_6)
 {
  VAR_13 = VAR_0;
 }
 else if (VAR_12 & VAR_8)
 {
  if (VAR_12 & VAR_7)
   VAR_13 = VAR_2;
 }
 else
 {
  if (VAR_12 & VAR_7)
   VAR_13 = VAR_0;
  else
   VAR_13 = VAR_1;
 }

 return VAR_13;
}
