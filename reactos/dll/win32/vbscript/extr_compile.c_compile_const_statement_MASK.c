
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* decls; } ;
typedef TYPE_2__ const_statement_t ;
struct TYPE_15__ {struct TYPE_15__* next; int name; int value_expr; } ;
typedef TYPE_3__ const_decl_t ;
struct TYPE_16__ {TYPE_3__* const_decls; TYPE_1__* func; } ;
typedef TYPE_4__ compile_ctx_t ;
struct TYPE_13__ {scalar_t__ type; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_9(compile_ctx_t *VAR_6, const_statement_t *VAR_7)
{
    const_decl_t *VAR_8, *VAR_9 = VAR_7->decls;

    do {
        VAR_8 = VAR_9;

        if(FUNC_6(VAR_6, VAR_8->name, VAR_2) || FUNC_5(VAR_6, VAR_8->name)
                || FUNC_7(VAR_6, VAR_8->name)) {
            FUNC_1("%s redefined\n", FUNC_3(VAR_8->name));
            return VAR_0;
        }

        if(VAR_6->func->type == VAR_3) {
            HRESULT VAR_10;

            VAR_10 = FUNC_2(VAR_6, VAR_8->value_expr);
            if(FUNC_0(VAR_10))
                return VAR_10;

            VAR_10 = FUNC_8(VAR_6, VAR_4, VAR_8->name);
            if(FUNC_0(VAR_10))
                return VAR_10;

            if(!FUNC_4(VAR_6, 0))
                return VAR_1;
        }

        VAR_9 = VAR_8->next;
        VAR_8->next = VAR_6->const_decls;
        VAR_6->const_decls = VAR_8;
    } while(VAR_9);

    return VAR_5;
}
