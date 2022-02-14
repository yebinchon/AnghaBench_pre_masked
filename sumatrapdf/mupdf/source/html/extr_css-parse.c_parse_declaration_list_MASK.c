
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lexbuf {char lookahead; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ fz_css_property ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 void* FUNC_1 (struct lexbuf*) ;
 int FUNC_2 (struct lexbuf*) ;

__attribute__((used)) static fz_css_property *FUNC_3(struct lexbuf *VAR_1)
{
 fz_css_property *VAR_2, *VAR_3;

 FUNC_2(VAR_1);

 if (VAR_1->lookahead == '}' || VAR_1->lookahead == VAR_0)
  return ((void*)0);

 VAR_2 = VAR_3 = FUNC_1(VAR_1);

 while (FUNC_0(VAR_1, ';'))
 {
  FUNC_2(VAR_1);

  if (VAR_1->lookahead != '}' && VAR_1->lookahead != ';' && VAR_1->lookahead != VAR_0)
  {
   VAR_3 = VAR_3->next = FUNC_1(VAR_1);
  }
 }

 return VAR_2;
}
