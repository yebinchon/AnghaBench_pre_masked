
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_9__ {int arguments_obj; int * function_instance; struct TYPE_9__* prev_frame; } ;
typedef TYPE_2__ call_frame_t ;
struct TYPE_10__ {int dispex; } ;
typedef int HRESULT ;
typedef TYPE_3__ FunctionInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_1, jsdisp_t *VAR_2, jsval_t *VAR_3)
{
    FunctionInstance *VAR_4 = FUNC_2(VAR_2);
    call_frame_t *VAR_5;
    HRESULT VAR_6;

    FUNC_1("\n");

    for(VAR_5 = VAR_1->call_ctx; VAR_5; VAR_5 = VAR_5->prev_frame) {
        if(VAR_5->function_instance == &VAR_4->dispex) {
            if(!VAR_5->arguments_obj) {
                VAR_6 = FUNC_6(VAR_1, VAR_5);
                if(FUNC_0(VAR_6))
                    return VAR_6;
            }
            *VAR_3 = FUNC_5(FUNC_3(VAR_5->arguments_obj));
            return VAR_0;
        }
    }

    *VAR_3 = FUNC_4();
    return VAR_0;
}
