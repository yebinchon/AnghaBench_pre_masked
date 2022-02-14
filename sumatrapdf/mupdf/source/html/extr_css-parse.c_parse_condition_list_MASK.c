
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lexbuf {int lookahead; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ fz_css_condition ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (struct lexbuf*) ;

__attribute__((used)) static fz_css_condition *FUNC_2(struct lexbuf *VAR_0)
{
 fz_css_condition *VAR_1, *VAR_2;

 VAR_1 = VAR_2 = FUNC_1(VAR_0);
 while (FUNC_0(VAR_0->lookahead))
 {
  VAR_2 = VAR_2->next = FUNC_1(VAR_0);
 }
 return VAR_1;
}
