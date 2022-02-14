
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ else_stat; scalar_t__ if_stat; int expr; } ;
typedef TYPE_1__ if_statement_t ;
struct TYPE_10__ {int code_off; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int *,scalar_t__) ;
 unsigned int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,unsigned int,int ) ;

__attribute__((used)) static HRESULT FUNC_5(compiler_ctx_t *VAR_5, if_statement_t *VAR_6)
{
    unsigned VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_1(VAR_5, VAR_6->expr, VAR_4);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_7 = FUNC_3(VAR_5, VAR_2);
    if(!VAR_7)
        return VAR_0;

    VAR_8 = FUNC_2(VAR_5, ((void*)0), VAR_6->if_stat);
    if(FUNC_0(VAR_8))
        return VAR_8;

    if(VAR_6->else_stat) {
        unsigned VAR_9;

        VAR_9 = FUNC_3(VAR_5, VAR_1);
        if(!VAR_9)
            return VAR_0;

        FUNC_4(VAR_5, VAR_7, VAR_5->code_off);

        VAR_8 = FUNC_2(VAR_5, ((void*)0), VAR_6->else_stat);
        if(FUNC_0(VAR_8))
            return VAR_8;

        FUNC_4(VAR_5, VAR_9, VAR_5->code_off);
    }else {
        FUNC_4(VAR_5, VAR_7, VAR_5->code_off);
    }

    return VAR_3;
}
