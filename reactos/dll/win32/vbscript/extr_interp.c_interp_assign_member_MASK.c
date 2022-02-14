
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
struct TYPE_9__ {unsigned int uint; } ;
struct TYPE_10__ {int bstr; } ;
struct TYPE_11__ {TYPE_1__ arg2; TYPE_2__ arg1; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DISPPARAMS ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int ,int ,int *) ;
 int FUNC_7 (TYPE_4__*,unsigned int const,int **) ;
 int FUNC_8 (TYPE_4__*,unsigned int const) ;
 int FUNC_9 (TYPE_4__*,unsigned int const,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_10(exec_ctx_t *VAR_6)
{
    BSTR VAR_7 = VAR_6->instr->arg1.bstr;
    const unsigned VAR_8 = VAR_6->instr->arg2.uint;
    IDispatch *VAR_9;
    DISPPARAMS VAR_10;
    DISPID VAR_11;
    HRESULT VAR_12;

    FUNC_3("%s\n", FUNC_4(VAR_7));

    VAR_12 = FUNC_7(VAR_6, VAR_8+1, &VAR_9);
    if(FUNC_0(VAR_12))
        return VAR_12;

    if(!VAR_9) {
        FUNC_1("NULL obj\n");
        return VAR_1;
    }

    VAR_12 = FUNC_5(VAR_9, VAR_7, VAR_5, VAR_2, &VAR_11);
    if(FUNC_2(VAR_12)) {
        FUNC_9(VAR_6, VAR_8, VAR_4, &VAR_10);
        VAR_12 = FUNC_6(VAR_6->script, VAR_9, VAR_11, VAR_0, &VAR_10);
    }
    if(FUNC_0(VAR_12))
        return VAR_12;

    FUNC_8(VAR_6, VAR_8+2);
    return VAR_3;
}
