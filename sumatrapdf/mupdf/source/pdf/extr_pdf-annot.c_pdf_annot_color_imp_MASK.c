
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 float FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_obj *VAR_1, int *VAR_2, float VAR_3[4])
{
 switch (FUNC_1(VAR_0, VAR_1))
 {
 case 0:
  if (VAR_2)
   *VAR_2 = 0;
  break;
 case 1:
 case 2:
  if (VAR_2)
   *VAR_2 = 1;
  if (VAR_3)
   VAR_3[0] = FUNC_0(VAR_0, VAR_1, 0);
  break;
 case 3:
  if (VAR_2)
   *VAR_2 = 3;
  if (VAR_3)
  {
   VAR_3[0] = FUNC_0(VAR_0, VAR_1, 0);
   VAR_3[1] = FUNC_0(VAR_0, VAR_1, 1);
   VAR_3[2] = FUNC_0(VAR_0, VAR_1, 2);
  }
  break;
 case 4:
 default:
  if (VAR_2)
   *VAR_2 = 4;
  if (VAR_3)
  {
   VAR_3[0] = FUNC_0(VAR_0, VAR_1, 0);
   VAR_3[1] = FUNC_0(VAR_0, VAR_1, 1);
   VAR_3[2] = FUNC_0(VAR_0, VAR_1, 2);
   VAR_3[3] = FUNC_0(VAR_0, VAR_1, 3);
  }
  break;
 }
}
