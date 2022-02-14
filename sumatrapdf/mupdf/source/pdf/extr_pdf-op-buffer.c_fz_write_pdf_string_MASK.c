
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_output ;
typedef int fz_context ;
typedef size_t c ;


 int FUNC_0 (int *,int *,char) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_output *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  if (VAR_2[VAR_4] < 32 || VAR_2[VAR_4] >= 127)
   break;

 if (VAR_4 < VAR_3)
 {
  FUNC_0(VAR_0, VAR_1, '<');
  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  {
   unsigned char VAR_5 = VAR_2[VAR_4];
   FUNC_0(VAR_0, VAR_1, "0123456789abcdef"[(VAR_5>>4)&15]);
   FUNC_0(VAR_0, VAR_1, "0123456789abcdef"[(VAR_5)&15]);
  }
  FUNC_0(VAR_0, VAR_1, '>');
 }
 else
 {
  FUNC_0(VAR_0, VAR_1, '(');
  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  {
   unsigned char VAR_6 = VAR_2[VAR_4];
   if (VAR_6 == '(' || VAR_6 == ')' || VAR_6 == '\\')
    FUNC_0(VAR_0, VAR_1, '\\');
   FUNC_0(VAR_0, VAR_1, VAR_6);
  }
  FUNC_0(VAR_0, VAR_1, ')');
 }
}
