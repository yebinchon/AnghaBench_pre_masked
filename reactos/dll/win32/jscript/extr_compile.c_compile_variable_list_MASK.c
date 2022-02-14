
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expr; int identifier; struct TYPE_3__* next; } ;
typedef TYPE_1__ variable_declaration_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_5, variable_declaration_t *VAR_6)
{
    variable_declaration_t *VAR_7;
    HRESULT VAR_8;

    FUNC_1(VAR_6 != ((void*)0));

    for(VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->next) {
        if(!VAR_7->expr)
            continue;

        VAR_8 = FUNC_3(VAR_5, VAR_7->identifier, 0);
        if(FUNC_0(VAR_8))
            return VAR_8;

        VAR_8 = FUNC_2(VAR_5, VAR_7->expr, VAR_4);
        if(FUNC_0(VAR_8))
            return VAR_8;

        if(!FUNC_4(VAR_5, VAR_1))
            return VAR_0;

        VAR_8 = FUNC_5(VAR_5, VAR_2, 1);
        if(FUNC_0(VAR_8))
            return VAR_8;
    }

    return VAR_3;
}
