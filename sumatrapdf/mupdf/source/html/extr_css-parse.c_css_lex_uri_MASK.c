
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {char c; } ;


 scalar_t__ FUNC_0 (struct lexbuf*,float) ;
 int FUNC_1 (struct lexbuf*) ;
 int FUNC_2 (struct lexbuf*,float) ;
 int FUNC_3 (struct lexbuf*,char*) ;
 int FUNC_4 (char) ;

__attribute__((used)) static void FUNC_5(struct lexbuf *VAR_0)
{
 while (VAR_0->c && VAR_0->c != ')' && !FUNC_4(VAR_0->c))
 {
  if (FUNC_0(VAR_0, '\\'))
  {
   if (FUNC_0(VAR_0, 'n'))
    FUNC_2(VAR_0, '\n');
   else if (FUNC_0(VAR_0, 'r'))
    FUNC_2(VAR_0, '\r');
   else if (FUNC_0(VAR_0, 'f'))
    FUNC_2(VAR_0, '\f');
   else
   {
    FUNC_2(VAR_0, VAR_0->c);
    FUNC_1(VAR_0);
   }
  }
  else if (VAR_0->c == '!' || VAR_0->c == '#' || VAR_0->c == '$' || VAR_0->c == '%' || VAR_0->c == '&' ||
    (VAR_0->c >= '*' && VAR_0->c <= '[') ||
    (VAR_0->c >= ']' && VAR_0->c <= '~') ||
    VAR_0->c > 159)
  {
   FUNC_2(VAR_0, VAR_0->c);
   FUNC_1(VAR_0);
  }
  else
   FUNC_3(VAR_0, "unexpected character in url");
 }
 FUNC_2(VAR_0, 0);
}
