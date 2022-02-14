
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef int os_task_t ;
typedef int os_event_t ;
struct TYPE_2__ {int qlen; scalar_t__ i_put; scalar_t__ i_get; int * queue; int task; } ;


 int FUNC_0 (int ,int,int *,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int ,int ,int,int *,int) ;
 int FUNC_2 (int) ;

bool FUNC_3(os_task_t VAR_1, uint8 VAR_2, os_event_t *VAR_3, uint8 VAR_4) {
    static unsigned VAR_5;
    FUNC_1("#%d ets_task(%p, %d, %p, %d)\n", VAR_5++, VAR_1, VAR_2, VAR_3, VAR_4);



    int VAR_6 = FUNC_2(VAR_2);
    VAR_0[VAR_6].task = VAR_1;
    VAR_0[VAR_6].queue = VAR_3;
    VAR_0[VAR_6].qlen = VAR_4;
    VAR_0[VAR_6].i_get = 0;
    VAR_0[VAR_6].i_put = 0;
    return 1;

}
