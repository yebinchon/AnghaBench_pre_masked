
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* call_ctx; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsdisp_t ;
struct TYPE_10__ {int scope; TYPE_1__* function; int bytecode; } ;
typedef TYPE_3__ call_frame_t ;
struct TYPE_8__ {scalar_t__ funcs; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,int ,int **) ;
 unsigned int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_0)
{
    unsigned VAR_1 = FUNC_3(VAR_0, 0);
    call_frame_t *VAR_2 = VAR_0->call_ctx;
    jsdisp_t *VAR_3;
    HRESULT VAR_4;

    FUNC_1("%d\n", VAR_1);

    VAR_4 = FUNC_2(VAR_0, VAR_2->bytecode, VAR_2->function->funcs+VAR_1,
            VAR_2->scope, &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    return FUNC_5(VAR_0, FUNC_4(VAR_3));
}
