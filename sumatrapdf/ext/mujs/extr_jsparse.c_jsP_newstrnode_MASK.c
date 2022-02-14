
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lexline; } ;
typedef TYPE_1__ js_State ;
struct TYPE_8__ {char const* string; } ;
typedef TYPE_2__ js_Ast ;
typedef enum js_AstType { ____Placeholder_js_AstType } js_AstType ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static js_Ast *FUNC_1(js_State *VAR_0, enum js_AstType VAR_1, const char *VAR_2)
{
 js_Ast *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_0->lexline, 0, 0, 0, 0);
 VAR_3->string = VAR_2;
 return VAR_3;
}
