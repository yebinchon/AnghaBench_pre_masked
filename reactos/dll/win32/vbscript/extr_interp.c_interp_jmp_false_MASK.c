
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* instr; } ;
typedef TYPE_3__ exec_ctx_t ;
struct TYPE_7__ {unsigned int uint; } ;
struct TYPE_8__ {TYPE_1__ arg1; } ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned int const) ;
 int FUNC_2 (TYPE_3__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__*) ;

__attribute__((used)) static HRESULT FUNC_4(exec_ctx_t *VAR_1)
{
    const unsigned VAR_2 = VAR_1->instr->arg1.uint;
    HRESULT VAR_3;
    BOOL VAR_4;

    FUNC_1("%u\n", VAR_2);

    VAR_3 = FUNC_3(VAR_1, &VAR_4);
    if(FUNC_0(VAR_3))
        return VAR_3;

    if(VAR_4)
        VAR_1->instr++;
    else
        FUNC_2(VAR_1, VAR_1->instr->arg1.uint);
    return VAR_0;
}
