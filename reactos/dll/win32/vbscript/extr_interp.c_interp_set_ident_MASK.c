
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* instr; } ;
typedef TYPE_4__ exec_ctx_t ;
struct TYPE_10__ {int bstr; } ;
struct TYPE_11__ {unsigned int uint; } ;
struct TYPE_12__ {TYPE_1__ arg1; TYPE_2__ arg2; } ;
typedef int HRESULT ;
typedef int DISPPARAMS ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*,int ,int ,int *) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (TYPE_4__*,int ,int *) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_8(exec_ctx_t *VAR_4)
{
    const BSTR VAR_5 = VAR_4->instr->arg1.bstr;
    const unsigned VAR_6 = VAR_4->instr->arg2.uint;
    DISPPARAMS VAR_7;
    HRESULT VAR_8;

    FUNC_2("%s\n", FUNC_4(VAR_5));

    if(VAR_6) {
        FUNC_1("arguments not supported\n");
        return VAR_1;
    }

    VAR_8 = FUNC_5(VAR_4, 0, ((void*)0));
    if(FUNC_0(VAR_8))
        return VAR_8;

    FUNC_7(VAR_4, 0, VAR_3, &VAR_7);
    VAR_8 = FUNC_3(VAR_4, VAR_4->instr->arg1.bstr, VAR_0, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    FUNC_6(VAR_4, 1);
    return VAR_2;
}
