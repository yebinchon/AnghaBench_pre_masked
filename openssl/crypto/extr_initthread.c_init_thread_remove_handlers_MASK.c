
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int skhands; } ;
typedef int THREAD_EVENT_HANDLER ;
typedef TYPE_1__ GLOBAL_TEVENT_REGISTER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 int ** FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int ** FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(THREAD_EVENT_HANDLER **VAR_0)
{
    GLOBAL_TEVENT_REGISTER *VAR_1;
    int VAR_2;

    VAR_1 = FUNC_2();
    if (VAR_1 == ((void*)0))
        return;
    FUNC_1(VAR_1->lock);
    for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_1->skhands); VAR_2++) {
        THREAD_EVENT_HANDLER **VAR_3
            = FUNC_5(VAR_1->skhands, VAR_2);

        if (VAR_3 == VAR_0) {
            VAR_3 = FUNC_3(VAR_1->skhands, VAR_2);
            FUNC_0(VAR_1->lock);
            return;
        }
    }
    FUNC_0(VAR_1->lock);
    return;
}
