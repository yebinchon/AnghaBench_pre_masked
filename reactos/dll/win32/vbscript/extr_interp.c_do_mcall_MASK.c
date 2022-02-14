
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int script; TYPE_3__* instr; } ;
typedef TYPE_4__ exec_ctx_t ;
typedef int VARIANT ;
struct TYPE_9__ {unsigned int uint; } ;
struct TYPE_10__ {int bstr; } ;
struct TYPE_11__ {TYPE_1__ arg2; TYPE_2__ arg1; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DISPPARAMS ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int ,int *,int *) ;
 int FUNC_5 (int *,int const,int ,int ,int *) ;
 int FUNC_6 (TYPE_4__*,int **) ;
 int FUNC_7 (TYPE_4__*,unsigned int const) ;
 int FUNC_8 (TYPE_4__*,unsigned int const,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_9(exec_ctx_t *VAR_4, VARIANT *VAR_5)
{
    const BSTR VAR_6 = VAR_4->instr->arg1.bstr;
    const unsigned VAR_7 = VAR_4->instr->arg2.uint;
    IDispatch *VAR_8;
    DISPPARAMS VAR_9;
    DISPID VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_6(VAR_4, &VAR_8);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(!VAR_8) {
        FUNC_1("NULL obj\n");
        return VAR_0;
    }

    FUNC_8(VAR_4, VAR_7, VAR_1, &VAR_9);

    VAR_11 = FUNC_5(VAR_8, VAR_6, VAR_3, VAR_1, &VAR_10);
    if(FUNC_3(VAR_11))
        VAR_11 = FUNC_4(VAR_4->script, VAR_8, VAR_10, &VAR_9, VAR_5);
    FUNC_2(VAR_8);
    if(FUNC_0(VAR_11))
        return VAR_11;

    FUNC_7(VAR_4, VAR_7);
    return VAR_2;
}
