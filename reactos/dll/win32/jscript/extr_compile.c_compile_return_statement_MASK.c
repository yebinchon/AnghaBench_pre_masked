
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ expr; } ;
typedef TYPE_1__ expression_statement_t ;
struct TYPE_10__ {scalar_t__ from_eval; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_5, expression_statement_t *VAR_6)
{
    HRESULT VAR_7;

    if(VAR_5->from_eval) {
        FUNC_1("misplaced return statement\n");
        return VAR_1;
    }

    if(VAR_6->expr) {
        VAR_7 = FUNC_2(VAR_5, VAR_6->expr, VAR_4);
        if(FUNC_0(VAR_7))
            return VAR_7;
        if(!FUNC_4(VAR_5, VAR_3))
            return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_5, ((void*)0));
    if(FUNC_0(VAR_7))
        return VAR_7;

    return FUNC_5(VAR_5, VAR_2, !VAR_6->expr);
}
