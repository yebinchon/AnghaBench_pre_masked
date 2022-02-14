
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_html_flow ;
struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* down; int * flow_head; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static fz_html_flow *FUNC_0(fz_context *VAR_1, fz_html_box *VAR_2)
{

 while (VAR_2)
 {
  if (VAR_2->type == VAR_0)
   return VAR_2->flow_head;
  VAR_2 = VAR_2->down;
 }
 return ((void*)0);
}
