
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (char*,unsigned char) ;

__attribute__((used)) static int FUNC_3(fz_context *VAR_0, pdf_obj *VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)FUNC_0(VAR_0, VAR_1);
 int VAR_3, VAR_4 = FUNC_1(VAR_0, VAR_1);
 int VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
 {
  if (VAR_2[VAR_3] > 126)
   VAR_5 += 4;
  else if (VAR_2[VAR_3] == 0)
   VAR_5 += 4;
  else if (FUNC_2("\n\r\t\b\f()\\", VAR_2[VAR_3]))
   VAR_5 += 2;
  else if (VAR_2[VAR_3] < 32)
   VAR_5 += 4;
  else
   VAR_5 += 1;
 }
 return VAR_5 > (VAR_4 * 2);
}
