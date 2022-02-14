
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(fz_context *VAR_0, pdf_obj *VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)FUNC_0(VAR_0, VAR_1);
 int VAR_3, VAR_4 = FUNC_1(VAR_0, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
 {
  if (VAR_2[VAR_3] > 126) return 1;
  if (VAR_2[VAR_3] < 32 && (VAR_2[VAR_3] != '\t' && VAR_2[VAR_3] != '\n' && VAR_2[VAR_3] != '\r')) return 1;
 }
 return 0;
}
