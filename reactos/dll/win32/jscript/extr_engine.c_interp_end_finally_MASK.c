
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* val; } ;
struct TYPE_7__ {TYPE_1__ ei; TYPE_3__* call_ctx; } ;
typedef TYPE_2__ script_ctx_t ;
typedef void* jsval_t ;
struct TYPE_8__ {int ip; } ;
typedef TYPE_3__ call_frame_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_2)
{
    call_frame_t *VAR_3 = VAR_2->call_ctx;
    jsval_t VAR_4;

    FUNC_0("\n");

    VAR_4 = FUNC_6(VAR_2);
    FUNC_1(FUNC_4(VAR_4));

    if(!FUNC_2(VAR_4)) {
        FUNC_0("passing exception\n");

        VAR_2->ei.val = FUNC_6(VAR_2);
        return VAR_0;
    }

    VAR_4 = FUNC_6(VAR_2);
    FUNC_1(FUNC_5(VAR_4));
    VAR_3->ip = FUNC_3(VAR_4);
    return VAR_1;
}
