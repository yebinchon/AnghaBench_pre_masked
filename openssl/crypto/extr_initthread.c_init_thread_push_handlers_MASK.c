
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
 scalar_t__ FUNC_3 (int ,int **) ;

__attribute__((used)) static int FUNC_4(THREAD_EVENT_HANDLER **VAR_0)
{
    int VAR_1;
    GLOBAL_TEVENT_REGISTER *VAR_2;

    VAR_2 = FUNC_2();
    if (VAR_2 == ((void*)0))
        return 0;

    FUNC_1(VAR_2->lock);
    VAR_1 = (FUNC_3(VAR_2->skhands, VAR_0) != 0);
    FUNC_0(VAR_2->lock);

    return VAR_1;
}
