
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* gcast; } ;
typedef TYPE_1__ js_State ;
struct TYPE_12__ {int type; int line; struct TYPE_12__* gcnext; struct TYPE_12__* parent; scalar_t__ casejump; int * jumps; int * string; scalar_t__ number; struct TYPE_12__* d; struct TYPE_12__* c; struct TYPE_12__* b; struct TYPE_12__* a; } ;
typedef TYPE_2__ js_Ast ;
typedef enum js_AstType { ____Placeholder_js_AstType } js_AstType ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static js_Ast *FUNC_1(js_State *VAR_0, enum js_AstType VAR_1, int VAR_2, js_Ast *VAR_3, js_Ast *VAR_4, js_Ast *VAR_5, js_Ast *VAR_6)
{
 js_Ast *VAR_7 = FUNC_0(VAR_0, sizeof *VAR_7);

 VAR_7->type = VAR_1;
 VAR_7->line = VAR_2;
 VAR_7->a = VAR_3;
 VAR_7->b = VAR_4;
 VAR_7->c = VAR_5;
 VAR_7->d = VAR_6;
 VAR_7->number = 0;
 VAR_7->string = ((void*)0);
 VAR_7->jumps = ((void*)0);
 VAR_7->casejump = 0;

 VAR_7->parent = ((void*)0);
 if (VAR_3) VAR_3->parent = VAR_7;
 if (VAR_4) VAR_4->parent = VAR_7;
 if (VAR_5) VAR_5->parent = VAR_7;
 if (VAR_6) VAR_6->parent = VAR_7;

 VAR_7->gcnext = VAR_0->gcast;
 VAR_0->gcast = VAR_7;

 return VAR_7;
}
