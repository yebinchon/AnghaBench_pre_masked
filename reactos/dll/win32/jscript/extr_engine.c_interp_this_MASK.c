
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_6__ {int this_obj; } ;
typedef TYPE_2__ call_frame_t ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_0)
{
    call_frame_t *VAR_1 = VAR_0->call_ctx;

    FUNC_1("\n");

    FUNC_0(VAR_1->this_obj);
    return FUNC_3(VAR_0, FUNC_2(VAR_1->this_obj));
}
