
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* instr; } ;
typedef TYPE_3__ exec_ctx_t ;
struct TYPE_6__ {unsigned int uint; } ;
struct TYPE_7__ {TYPE_1__ arg1; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int const) ;
 int FUNC_1 (TYPE_3__*,unsigned int const) ;

__attribute__((used)) static HRESULT FUNC_2(exec_ctx_t *VAR_1)
{
    const unsigned VAR_2 = VAR_1->instr->arg1.uint;

    FUNC_0("%u\n", VAR_2);

    FUNC_1(VAR_1, VAR_2);
    return VAR_0;
}
