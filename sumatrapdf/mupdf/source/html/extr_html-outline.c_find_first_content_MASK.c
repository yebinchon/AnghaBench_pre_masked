
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_html_flow ;
struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* down; int * flow_head; } ;
typedef TYPE_1__ fz_html_box ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static fz_html_flow *
FUNC_0(fz_html_box *VAR_1)
{
 while (VAR_1)
 {
  if (VAR_1->type == VAR_0)
   return VAR_1->flow_head;
  VAR_1 = VAR_1->down;
 }
 return ((void*)0);
}
