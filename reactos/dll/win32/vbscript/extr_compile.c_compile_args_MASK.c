
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ expression_t ;
typedef int compile_ctx_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_2(compile_ctx_t *VAR_1, expression_t *VAR_2, unsigned *VAR_3)
{
    unsigned VAR_4 = 0;
    HRESULT VAR_5;

    while(VAR_2) {
        VAR_5 = FUNC_1(VAR_1, VAR_2);
        if(FUNC_0(VAR_5))
            return VAR_5;

        VAR_4++;
        VAR_2 = VAR_2->next;
    }

    *VAR_3 = VAR_4;
    return VAR_0;
}
