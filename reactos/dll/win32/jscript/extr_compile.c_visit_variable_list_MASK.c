
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expr; int identifier; struct TYPE_3__* next; } ;
typedef TYPE_1__ variable_declaration_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_2, variable_declaration_t *VAR_3)
{
    variable_declaration_t *VAR_4;
    HRESULT VAR_5;

    for(VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next) {
        if(!FUNC_1(VAR_2, VAR_4->identifier))
            return VAR_0;

        if(VAR_4->expr) {
            VAR_5 = FUNC_2(VAR_2, VAR_4->expr);
            if(FUNC_0(VAR_5))
                return VAR_5;
        }
    }

    return VAR_1;
}
