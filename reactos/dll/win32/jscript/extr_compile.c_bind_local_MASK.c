
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ using_scope; struct TYPE_6__* next; } ;
typedef TYPE_1__ statement_ctx_t ;
struct TYPE_7__ {int ref; } ;
typedef TYPE_2__ local_ref_t ;
struct TYPE_8__ {int func; TYPE_1__* stat_ctx; } ;
typedef TYPE_3__ compiler_ctx_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1(compiler_ctx_t *VAR_2, const WCHAR *VAR_3, int *VAR_4)
{
    statement_ctx_t *VAR_5;
    local_ref_t *VAR_6;

    for(VAR_5 = VAR_2->stat_ctx; VAR_5; VAR_5 = VAR_5->next) {
        if(VAR_5->using_scope)
            return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_2->func, VAR_3);
    if(!VAR_6)
        return VAR_0;

    *VAR_4 = VAR_6->ref;
    return VAR_1;
}
