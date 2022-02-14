
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int script; } ;
typedef TYPE_1__ exec_ctx_t ;
typedef int WORD ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_6(exec_ctx_t *VAR_3, VARIANT *VAR_4, VARIANT *VAR_5, WORD VAR_6)
{
    HRESULT VAR_7;

    VAR_7 = FUNC_4(VAR_4, VAR_5);
    if(FUNC_0(VAR_7))
        return VAR_7;

    if(FUNC_3(VAR_4) == VAR_2 && !(VAR_6 & VAR_0)) {
        VARIANT VAR_8;

        VAR_7 = FUNC_5(VAR_3->script, FUNC_2(VAR_4), &VAR_8);
        FUNC_1(FUNC_2(VAR_4));
        if(FUNC_0(VAR_7))
            return VAR_7;

        *VAR_4 = VAR_8;
    }

    return VAR_1;
}
