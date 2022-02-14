
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rrdpush_sender_connected; scalar_t__ rrdpush_sender_spawn; scalar_t__ rrdpush_send_enabled; } ;
typedef int RRDVAR ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(RRDHOST *VAR_0, RRDVAR *VAR_1) {
    if(VAR_0->rrdpush_send_enabled && VAR_0->rrdpush_sender_spawn && VAR_0->rrdpush_sender_connected) {
        FUNC_0(VAR_0);
        FUNC_2(VAR_0, VAR_1);
        FUNC_1(VAR_0);
    }
}
