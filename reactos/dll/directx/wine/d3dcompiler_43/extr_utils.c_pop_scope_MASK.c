
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_scope {struct hlsl_scope* upper; } ;
struct hlsl_parse_ctx {struct hlsl_scope* cur_scope; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

BOOL FUNC_1(struct hlsl_parse_ctx *VAR_2)
{
    struct hlsl_scope *VAR_3 = VAR_2->cur_scope->upper;
    if (!VAR_3)
        return VAR_0;

    FUNC_0("Popping current scope\n");
    VAR_2->cur_scope = VAR_3;
    return VAR_1;
}
