
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float y; struct TYPE_4__* next; } ;
typedef TYPE_1__ fz_html_flow ;
typedef int fz_context ;



__attribute__((used)) static fz_html_flow *
FUNC_0(fz_context *VAR_0, fz_html_flow *VAR_1, float VAR_2)
{
 while (VAR_1)
 {
  if (VAR_1->y >= VAR_2)
   return VAR_1;
  VAR_1 = VAR_1->next;
 }
 return ((void*)0);
}
