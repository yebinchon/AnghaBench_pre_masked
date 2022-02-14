
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int dummy; } ;
typedef int fz_context ;
typedef int c ;


 int FUNC_0 (int *,struct fmt*,int) ;
 int FUNC_1 (int *,struct fmt*,char*) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, void *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
 struct fmt *VAR_4 = (struct fmt *)VAR_1;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  VAR_6 = (unsigned char)VAR_2[VAR_5];
  if (VAR_6 == '\n')
   FUNC_1(VAR_0, VAR_4, "\\n");
  else if (VAR_6 == '\r')
   FUNC_1(VAR_0, VAR_4, "\\r");
  else if (VAR_6 == '\t')
   FUNC_1(VAR_0, VAR_4, "\\t");
  else if (VAR_6 == '\b')
   FUNC_1(VAR_0, VAR_4, "\\b");
  else if (VAR_6 == '\f')
   FUNC_1(VAR_0, VAR_4, "\\f");
  else if (VAR_6 == '(')
   FUNC_1(VAR_0, VAR_4, "\\(");
  else if (VAR_6 == ')')
   FUNC_1(VAR_0, VAR_4, "\\)");
  else if (VAR_6 == '\\')
   FUNC_1(VAR_0, VAR_4, "\\\\");
  else if (VAR_6 < 32 || VAR_6 >= 127) {
   FUNC_0(VAR_0, VAR_4, '\\');
   FUNC_0(VAR_0, VAR_4, '0' + ((VAR_6 / 64) & 7));
   FUNC_0(VAR_0, VAR_4, '0' + ((VAR_6 / 8) & 7));
   FUNC_0(VAR_0, VAR_4, '0' + ((VAR_6) & 7));
  }
  else
   FUNC_0(VAR_0, VAR_4, VAR_6);
 }
}
