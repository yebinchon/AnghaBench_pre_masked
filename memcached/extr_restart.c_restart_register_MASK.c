
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * restart_save_cb ;
struct TYPE_4__ {int scb; int ccb; void* data; int tag; struct TYPE_4__* next; } ;
typedef TYPE_1__ restart_data_cb ;
typedef int * restart_check_cb ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char const*,int ) ;

void FUNC_2(const char *VAR_2, restart_check_cb VAR_3, restart_save_cb VAR_4, void *VAR_5) {
    restart_data_cb *VAR_6 = FUNC_0(1, sizeof(restart_data_cb));



    if (VAR_1 == ((void*)0)) {
        VAR_1 = VAR_6;
    } else {


        restart_data_cb *VAR_7 = VAR_1;
        while (VAR_7->next != ((void*)0)) {
            VAR_7 = VAR_7->next;
        }
        VAR_7->next = VAR_6;
    }

    FUNC_1(VAR_6->tag, VAR_2, VAR_0);
    VAR_6->data = VAR_5;
    VAR_6->ccb = *VAR_3;
    VAR_6->scb = *VAR_4;
}
