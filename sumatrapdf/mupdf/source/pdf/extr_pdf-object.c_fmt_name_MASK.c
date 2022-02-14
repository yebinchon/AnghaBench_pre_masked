
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int dummy; } ;
typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int *,struct fmt*,unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_0, struct fmt *VAR_1, pdf_obj *VAR_2)
{
 unsigned char *VAR_3 = (unsigned char *) FUNC_3(VAR_0, VAR_2);
 int VAR_4, VAR_5;

 FUNC_0(VAR_0, VAR_1, '/');

 for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4++)
 {
  if (FUNC_1(VAR_3[VAR_4]) || FUNC_2(VAR_3[VAR_4]) ||
   VAR_3[VAR_4] == '#' || VAR_3[VAR_4] < 32 || VAR_3[VAR_4] >= 127)
  {
   FUNC_0(VAR_0, VAR_1, '#');
   VAR_5 = (VAR_3[VAR_4] >> 4) & 0xf;
   FUNC_0(VAR_0, VAR_1, VAR_5 < 0xA ? VAR_5 + '0' : VAR_5 + 'A' - 0xA);
   VAR_5 = VAR_3[VAR_4] & 0xf;
   FUNC_0(VAR_0, VAR_1, VAR_5 < 0xA ? VAR_5 + '0' : VAR_5 + 'A' - 0xA);
  }
  else
  {
   FUNC_0(VAR_0, VAR_1, VAR_3[VAR_4]);
  }
 }
}
