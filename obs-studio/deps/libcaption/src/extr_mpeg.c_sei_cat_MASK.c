
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sei_t ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ sei_message_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void FUNC_4(sei_t* VAR_1, sei_t* VAR_2, int VAR_3)
{
    if (!VAR_1 || !VAR_2) {
        return;
    }

    sei_message_t* VAR_4 = ((void*)0);
    for (VAR_4 = FUNC_2(VAR_2); VAR_4; VAR_4 = FUNC_3(VAR_4)) {
        if (VAR_3 || VAR_0 != VAR_4->type) {
            FUNC_0(VAR_1, FUNC_1(VAR_4));
        }
    }
}
