
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ fz_css_rule ;
struct TYPE_6__ {TYPE_1__* rule; } ;
typedef TYPE_2__ fz_css ;
typedef int fz_context ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(fz_context *VAR_0, fz_css *VAR_1)
{
 fz_css_rule *VAR_2 = VAR_1->rule;
 while (VAR_2)
 {
  FUNC_0(VAR_2);
  VAR_2 = VAR_2->next;
 }
}
