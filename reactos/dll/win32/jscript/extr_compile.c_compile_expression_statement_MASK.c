
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expr; } ;
typedef TYPE_1__ expression_statement_t ;
struct TYPE_8__ {int from_eval; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_3, expression_statement_t *VAR_4)
{
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_3, VAR_4->expr, VAR_3->from_eval);
    if(FUNC_0(VAR_5))
        return VAR_5;

    return !VAR_3->from_eval || FUNC_2(VAR_3, VAR_1) ? VAR_2 : VAR_0;
}
