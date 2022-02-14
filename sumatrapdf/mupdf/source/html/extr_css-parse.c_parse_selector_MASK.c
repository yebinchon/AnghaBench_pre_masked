
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {char lookahead; } ;
typedef int fz_css_selector ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int * FUNC_1 (struct lexbuf*,char,int *) ;
 int * FUNC_2 (struct lexbuf*) ;

__attribute__((used)) static fz_css_selector *FUNC_3(struct lexbuf *VAR_1)
{
 fz_css_selector *VAR_2 = FUNC_2(VAR_1);
 for (;;)
 {
  if (FUNC_0(VAR_1, ' '))
  {
   if (FUNC_0(VAR_1, '+'))
    VAR_2 = FUNC_1(VAR_1, '+', VAR_2);
   else if (FUNC_0(VAR_1, '>'))
    VAR_2 = FUNC_1(VAR_1, '>', VAR_2);
   else if (VAR_1->lookahead != ',' && VAR_1->lookahead != '{' && VAR_1->lookahead != VAR_0)
    VAR_2 = FUNC_1(VAR_1, ' ', VAR_2);
   else
    break;
  }
  else if (FUNC_0(VAR_1, '+'))
   VAR_2 = FUNC_1(VAR_1, '+', VAR_2);
  else if (FUNC_0(VAR_1, '>'))
   VAR_2 = FUNC_1(VAR_1, '>', VAR_2);
  else
   break;
 }
 return VAR_2;
}
