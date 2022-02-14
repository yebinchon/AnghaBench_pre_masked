
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ statement_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_2(compiler_ctx_t *VAR_1, statement_t *VAR_2)
{
    HRESULT VAR_3;

    while(VAR_2) {
        VAR_3 = FUNC_1(VAR_1, VAR_2);
        if(FUNC_0(VAR_3))
            return VAR_3;

        VAR_2 = VAR_2->next;
    }

    return VAR_0;
}
