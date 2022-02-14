
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int v; } ;
typedef TYPE_3__ variant_val_t ;
struct TYPE_16__ {TYPE_2__* instr; } ;
typedef TYPE_4__ exec_ctx_t ;
struct TYPE_13__ {unsigned int uint; } ;
struct TYPE_14__ {TYPE_1__ arg1; } ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,unsigned int const) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_4__*,unsigned int const) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_8(exec_ctx_t *VAR_2)
{
    const unsigned VAR_3 = VAR_2->instr->arg1.uint;
    variant_val_t VAR_4;
    HRESULT VAR_5;

    FUNC_1("%d\n", VAR_3);

    VAR_5 = FUNC_4(VAR_2, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_7(VAR_2, FUNC_6(VAR_2, 0), VAR_4.v);
    FUNC_3(&VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    if(VAR_5 == VAR_1) {
        FUNC_5(VAR_2, 1);
        FUNC_2(VAR_2, VAR_3);
    }else {
        VAR_2->instr++;
    }

    return VAR_0;
}
