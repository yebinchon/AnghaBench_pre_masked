
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_location ;
typedef int fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int) ;

fz_location FUNC_3(fz_context *VAR_0, fz_document *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = FUNC_1(VAR_0, VAR_1);
 int VAR_6 = 0;
 if (VAR_2 < 0)
  VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3)
 {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
  if (VAR_2 < VAR_6 + VAR_4)
   return FUNC_2(VAR_3, VAR_2 - VAR_6);
  VAR_6 += VAR_4;
 }
 return FUNC_2(VAR_3-1, VAR_4-1);
}
