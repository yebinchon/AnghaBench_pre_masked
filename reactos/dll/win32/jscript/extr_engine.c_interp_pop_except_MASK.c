
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_9__ {unsigned int finally_off; struct TYPE_9__* next; } ;
typedef TYPE_2__ except_frame_t ;
struct TYPE_10__ {unsigned int ip; TYPE_2__* except_frame; } ;
typedef TYPE_3__ call_frame_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned int const) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int const) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_2)
{
    const unsigned VAR_3 = FUNC_3(VAR_2, 0);
    call_frame_t *VAR_4 = VAR_2->call_ctx;
    except_frame_t *VAR_5;
    unsigned VAR_6;

    FUNC_1("%u\n", VAR_3);

    VAR_5 = VAR_4->except_frame;
    FUNC_2(VAR_5 != ((void*)0));

    VAR_6 = VAR_5->finally_off;
    VAR_4->except_frame = VAR_5->next;
    FUNC_4(VAR_5);

    if(VAR_6) {
        HRESULT VAR_7;

        VAR_7 = FUNC_7(VAR_2, FUNC_6(VAR_3));
        if(FUNC_0(VAR_7))
            return VAR_7;
        VAR_7 = FUNC_7(VAR_2, FUNC_5(VAR_1));
        if(FUNC_0(VAR_7))
            return VAR_7;
        VAR_4->ip = VAR_6;
    }else {
        VAR_4->ip = VAR_3;
    }

    return VAR_0;
}
