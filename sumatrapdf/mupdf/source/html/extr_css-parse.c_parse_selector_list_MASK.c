
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lexbuf {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ fz_css_selector ;


 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 void* FUNC_1 (struct lexbuf*) ;
 int FUNC_2 (struct lexbuf*) ;

__attribute__((used)) static fz_css_selector *FUNC_3(struct lexbuf *VAR_0)
{
 fz_css_selector *VAR_1, *VAR_2;

 VAR_1 = VAR_2 = FUNC_1(VAR_0);
 while (FUNC_0(VAR_0, ','))
 {
  FUNC_2(VAR_0);
  VAR_2 = VAR_2->next = FUNC_1(VAR_0);
 }
 return VAR_1;
}
