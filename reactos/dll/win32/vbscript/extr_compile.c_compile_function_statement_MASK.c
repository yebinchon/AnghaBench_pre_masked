
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* func_decl; } ;
typedef TYPE_3__ function_statement_t ;
struct TYPE_10__ {TYPE_2__* func_decls; TYPE_1__* code; int * func; } ;
typedef TYPE_4__ compile_ctx_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
struct TYPE_7__ {int main_code; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_1(compile_ctx_t *VAR_2, function_statement_t *VAR_3)
{
    if(VAR_2->func != &VAR_2->code->main_code) {
        FUNC_0("Function is not in the global code\n");
        return VAR_0;
    }

    VAR_3->func_decl->next = VAR_2->func_decls;
    VAR_2->func_decls = VAR_3->func_decl;
    return VAR_1;
}
