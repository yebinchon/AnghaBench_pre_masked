
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
struct TYPE_10__ {unsigned int uint; } ;
struct TYPE_9__ {int bstr; } ;
struct TYPE_11__ {TYPE_2__ arg2; TYPE_1__ arg1; } ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DISPPARAMS ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int ,int ,int *) ;
 int FUNC_7 (TYPE_4__*,int,int **) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,unsigned int const,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_10(exec_ctx_t *VAR_7)
{
    BSTR VAR_8 = VAR_7->instr->arg1.bstr;
    const unsigned VAR_9 = VAR_7->instr->arg2.uint;
    IDispatch *VAR_10;
    DISPPARAMS VAR_11;
    DISPID VAR_12;
    HRESULT VAR_13;

    FUNC_3("%s\n", FUNC_4(VAR_8));

    if(VAR_9) {
        FUNC_1("arguments not supported\n");
        return VAR_2;
    }

    VAR_13 = FUNC_7(VAR_7, 1, &VAR_10);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(!VAR_10) {
        FUNC_1("NULL obj\n");
        return VAR_1;
    }

    VAR_13 = FUNC_7(VAR_7, 0, ((void*)0));
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_13 = FUNC_5(VAR_10, VAR_8, VAR_6, VAR_3, &VAR_12);
    if(FUNC_2(VAR_13)) {
        FUNC_9(VAR_7, VAR_9, VAR_5, &VAR_11);
        VAR_13 = FUNC_6(VAR_7->script, VAR_10, VAR_12, VAR_0, &VAR_11);
    }
    if(FUNC_0(VAR_13))
        return VAR_13;

    FUNC_8(VAR_7, 2);
    return VAR_4;
}
