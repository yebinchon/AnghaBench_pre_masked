
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ stack_use; scalar_t__ using_except; scalar_t__ using_scope; struct TYPE_7__* next; } ;
typedef TYPE_1__ statement_ctx_t ;
struct TYPE_8__ {int code_off; TYPE_1__* stat_ctx; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_5, statement_ctx_t *VAR_6)
{
    unsigned VAR_7 = 0;
    statement_ctx_t *VAR_8;
    HRESULT VAR_9;

    for(VAR_8 = VAR_5->stat_ctx; VAR_8 != VAR_6; VAR_8 = VAR_8->next) {
        if(VAR_8->using_scope && !FUNC_1(VAR_5, VAR_3))
            return VAR_0;
        if(VAR_8->using_except) {
            if(VAR_7) {
                VAR_9 = FUNC_2(VAR_5, VAR_1, VAR_7);
                if(FUNC_0(VAR_9))
                    return VAR_9;
                VAR_7 = 0;
            }
            VAR_9 = FUNC_2(VAR_5, VAR_2, VAR_5->code_off+1);
            if(FUNC_0(VAR_9))
                return VAR_9;
        }
        VAR_7 += VAR_8->stack_use;
    }

    if(VAR_7) {
        VAR_9 = FUNC_2(VAR_5, VAR_1, VAR_7);
        if(FUNC_0(VAR_9))
            return VAR_9;
    }

    return VAR_4;
}
