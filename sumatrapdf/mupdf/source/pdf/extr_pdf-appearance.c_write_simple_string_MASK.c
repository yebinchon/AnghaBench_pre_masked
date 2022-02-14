
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char) ;
 int FUNC_1 (int*,char const*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_buffer *VAR_2, const char *VAR_3, const char *VAR_4)
{
 FUNC_0(VAR_1, VAR_2, '(');
 while (VAR_3 < VAR_4)
 {
  int VAR_5;
  VAR_3 += FUNC_1(&VAR_5, VAR_3);
  VAR_5 = FUNC_2(VAR_5);
  if (VAR_5 < 0) VAR_5 = VAR_0;
  if (VAR_5 == '(' || VAR_5 == ')' || VAR_5 == '\\')
   FUNC_0(VAR_1, VAR_2, '\\');
  FUNC_0(VAR_1, VAR_2, VAR_5);
 }
 FUNC_0(VAR_1, VAR_2, ')');
}
