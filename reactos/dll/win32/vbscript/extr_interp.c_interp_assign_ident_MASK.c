
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* instr; } ;
typedef TYPE_4__ exec_ctx_t ;
struct TYPE_10__ {unsigned int uint; } ;
struct TYPE_9__ {int bstr; } ;
struct TYPE_11__ {TYPE_2__ arg2; TYPE_1__ arg1; } ;
typedef int HRESULT ;
typedef int DISPPARAMS ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int const,int ,int *) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (TYPE_4__*,unsigned int const) ;
 int FUNC_5 (TYPE_4__*,unsigned int const,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_6(exec_ctx_t *VAR_3)
{
    const BSTR VAR_4 = VAR_3->instr->arg1.bstr;
    const unsigned VAR_5 = VAR_3->instr->arg2.uint;
    DISPPARAMS VAR_6;
    HRESULT VAR_7;

    FUNC_1("%s\n", FUNC_3(VAR_4));

    FUNC_5(VAR_3, VAR_5, VAR_2, &VAR_6);
    VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_0, &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    FUNC_4(VAR_3, VAR_5+1);
    return VAR_1;
}
