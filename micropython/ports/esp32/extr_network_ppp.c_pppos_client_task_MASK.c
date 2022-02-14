
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8_t ;
struct TYPE_2__ {int * client_task_handle; int pcb; int stream; } ;
typedef TYPE_1__ ppp_if_obj_t ;
typedef int buf ;


 int FUNC_0 (int ,int *,int,int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1) {
    ppp_if_obj_t *VAR_2 = (ppp_if_obj_t*)VAR_1;
    uint8_t VAR_3[256];

    while (FUNC_2(VAR_0, 0) == 0) {
        int VAR_4;
        int VAR_5 = FUNC_0(VAR_2->stream, VAR_3, sizeof(VAR_3), &VAR_4, 0);
        if (VAR_5 > 0) {
            FUNC_1(VAR_2->pcb, (u8_t*)VAR_3, VAR_5);
        }
    }

    VAR_2->client_task_handle = ((void*)0);
    FUNC_3(((void*)0));
}
