
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ev_flags; scalar_t__ io_wraplist; int event; int state; TYPE_1__* thread; int sfd; } ;
typedef TYPE_2__ conn ;
struct TYPE_6__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int,int ,void*) ;
 int FUNC_5 (char*) ;

void FUNC_6(conn *VAR_5) {
    VAR_5->ev_flags = VAR_1 | VAR_0;
    FUNC_4(&VAR_5->event, VAR_5->sfd, VAR_5->ev_flags, VAR_4, (void *)VAR_5);
    FUNC_3(VAR_5->thread->base, &VAR_5->event);
    VAR_5->state = VAR_3;


    if (FUNC_2(&VAR_5->event, 0) == -1) {
        FUNC_5("event_add");
    }
}
