
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_6__ {int ret; } ;
typedef TYPE_2__ call_frame_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_1)
{
    call_frame_t *VAR_2 = VAR_1->call_ctx;

    FUNC_0("\n");

    FUNC_1(VAR_2->ret);
    VAR_2->ret = FUNC_2(VAR_1);
    return VAR_0;
}
