
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_8__ {int flags; int this_obj; int ret; } ;
typedef TYPE_2__ call_frame_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_2)
{
    const unsigned VAR_3 = FUNC_2(VAR_2, 0);
    call_frame_t *VAR_4 = VAR_2->call_ctx;

    FUNC_1("\n");

    if(VAR_3)
        FUNC_6(FUNC_7(VAR_4));

    if((VAR_4->flags & VAR_0) && !FUNC_3(VAR_4->ret)) {
        FUNC_6(VAR_4->ret);
        FUNC_0(VAR_4->this_obj);
        VAR_4->ret = FUNC_5(VAR_4->this_obj);
    }

    FUNC_4(VAR_2, -1);
    return VAR_1;
}
