
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ notif_hwnd; int entry; } ;
typedef TYPE_1__ tls_data_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_7(void)
{
    tls_data_t *VAR_3;

    if(VAR_2 == VAR_0)
        return;

    VAR_3 = FUNC_3(VAR_2);
    if(!VAR_3)
        return;

    FUNC_1(&VAR_1);
    FUNC_6(&VAR_3->entry);
    FUNC_2(&VAR_1);

    if(VAR_3->notif_hwnd) {
        FUNC_4("notif_hwnd not destroyed\n");
        FUNC_0(VAR_3->notif_hwnd);
    }

    FUNC_5(VAR_3);
}
