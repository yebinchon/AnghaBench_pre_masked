
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_page ;
typedef int fz_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (int *,int ,char*,int) ;

fz_page *
FUNC_4(fz_context *VAR_1, fz_document *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = FUNC_1(VAR_1, VAR_2);
 int VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
 {
  int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4);
  if (VAR_3 < VAR_6 + VAR_7)
   return FUNC_2(VAR_1, VAR_2, VAR_4, VAR_3 - VAR_6);
  VAR_6 += VAR_7;
 }
 FUNC_3(VAR_1, VAR_0, "Page not found: %d", VAR_3+1);
}
