
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 float FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(fz_context *VAR_0, pdf_obj *VAR_1, float *VAR_2)
{
 int VAR_3;
 int VAR_4;
 pdf_obj *VAR_5;

 if (!FUNC_2(VAR_0, VAR_1))
  return 0;
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 < 3 || VAR_4 > 4) {
  return 0;
 }
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);
  VAR_2[VAR_3] = FUNC_3(VAR_0, VAR_5);
 }
 return 1;
}
