
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* b; struct TYPE_4__* parent; } ;
typedef TYPE_1__ js_Ast ;



__attribute__((used)) static js_Ast *FUNC_0(js_Ast *VAR_0)
{

 js_Ast *VAR_1 = VAR_0, *VAR_2 = VAR_0->b;
 while (VAR_2) {
  VAR_2->parent = VAR_1;
  VAR_1 = VAR_2;
  VAR_2 = VAR_2->b;
 }
 return VAR_0;
}
