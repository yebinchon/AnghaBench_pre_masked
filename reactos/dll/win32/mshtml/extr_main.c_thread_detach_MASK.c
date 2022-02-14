
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ thread_hwnd; } ;
typedef TYPE_1__ thread_data_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void)
{
    thread_data_t *VAR_1;

    VAR_1 = FUNC_1(VAR_0);
    if(!VAR_1)
        return;

    if(VAR_1->thread_hwnd)
        FUNC_0(VAR_1->thread_hwnd);

    FUNC_2(VAR_1);
}
