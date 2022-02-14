
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* dim_decls; } ;
typedef TYPE_2__ dim_statement_t ;
struct TYPE_14__ {struct TYPE_14__* next; int name; scalar_t__ is_array; } ;
typedef TYPE_3__ dim_decl_t ;
struct TYPE_15__ {TYPE_3__* dim_decls_tail; TYPE_3__* dim_decls; TYPE_1__* func; } ;
typedef TYPE_4__ compile_ctx_t ;
struct TYPE_12__ {int array_cnt; int var_cnt; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_8(compile_ctx_t *VAR_5, dim_statement_t *VAR_6)
{
    dim_decl_t *VAR_7 = VAR_6->dim_decls;

    while(1) {
        if(FUNC_6(VAR_5, VAR_7->name) || FUNC_4(VAR_5, VAR_7->name)
           || FUNC_5(VAR_5, VAR_7->name, VAR_2)) {
            FUNC_1("dim %s name redefined\n", FUNC_2(VAR_7->name));
            return VAR_0;
        }

        VAR_5->func->var_cnt++;

        if(VAR_7->is_array) {
            HRESULT VAR_8 = FUNC_7(VAR_5, VAR_3, VAR_7->name, VAR_5->func->array_cnt++);
            if(FUNC_0(VAR_8))
                return VAR_8;

            if(!FUNC_3(VAR_5, 0))
                return VAR_1;
        }

        if(!VAR_7->next)
            break;
        VAR_7 = VAR_7->next;
    }

    if(VAR_5->dim_decls_tail)
        VAR_5->dim_decls_tail->next = VAR_6->dim_decls;
    else
        VAR_5->dim_decls = VAR_6->dim_decls;
    VAR_5->dim_decls_tail = VAR_7;
    return VAR_4;
}
