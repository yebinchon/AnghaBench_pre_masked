
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ POLLINFO ;


 short VAR_0 ;
 int FUNC_0 (char*,int ) ;

int FUNC_1(POLLINFO *VAR_1, short int *VAR_2) {
    *VAR_2 &= ~VAR_0;

    FUNC_0("POLLFD: internal error: poll_default_snd_callback(): nothing to send on socket %d", VAR_1->fd);
    return 0;
}
