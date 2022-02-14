
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (int *,int *,int*,float*) ;

__attribute__((used)) static int FUNC_2(fz_context *VAR_0, pdf_obj *VAR_1, float VAR_2[3])
{
 float VAR_3[4];
 int VAR_4;
 FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_3);
 if (VAR_4 == 0)
 {
  return 0;
 }
 else if (VAR_4 == 1)
 {
  VAR_2[0] = VAR_2[1] = VAR_2[2] = VAR_3[0];
 }
 else if (VAR_4 == 3)
 {
  VAR_2[0] = VAR_3[0];
  VAR_2[1] = VAR_3[1];
  VAR_2[2] = VAR_3[2];
 }
 else if (VAR_4 == 4)
 {
  VAR_2[0] = 1 - FUNC_0(1, VAR_3[0] + VAR_3[3]);
  VAR_2[1] = 1 - FUNC_0(1, VAR_3[1] + VAR_3[3]);
  VAR_2[2] = 1 - FUNC_0(1, VAR_3[2] + VAR_3[3]);
 }
 return 1;
}
