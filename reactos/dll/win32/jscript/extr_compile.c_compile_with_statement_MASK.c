
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int statement; int expr; } ;
typedef TYPE_1__ with_statement_t ;
struct TYPE_6__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ statement_ctx_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_4(compiler_ctx_t *VAR_6, with_statement_t *VAR_7)
{
    statement_ctx_t VAR_8 = {0, VAR_5, VAR_1};
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_6, VAR_7->expr, VAR_5);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(!FUNC_3(VAR_6, VAR_3))
        return VAR_0;

    VAR_9 = FUNC_2(VAR_6, &VAR_8, VAR_7->statement);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(!FUNC_3(VAR_6, VAR_2))
        return VAR_0;

    return VAR_4;
}
