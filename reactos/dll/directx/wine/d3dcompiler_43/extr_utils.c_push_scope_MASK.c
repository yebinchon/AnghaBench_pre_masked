
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_scope {int entry; struct hlsl_scope* upper; int types; int vars; } ;
struct hlsl_parse_ctx {int scopes; struct hlsl_scope* cur_scope; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct hlsl_scope* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct hlsl_parse_ctx *VAR_1)
{
    struct hlsl_scope *VAR_2 = FUNC_2(sizeof(*VAR_2));

    if (!VAR_2)
    {
        FUNC_0("Out of memory!\n");
        return;
    }
    FUNC_1("Pushing a new scope\n");
    FUNC_4(&VAR_2->vars);
    FUNC_5(&VAR_2->types, VAR_0);
    VAR_2->upper = VAR_1->cur_scope;
    VAR_1->cur_scope = VAR_2;
    FUNC_3(&VAR_1->scopes, &VAR_2->entry);
}
