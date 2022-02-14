
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {int sfd; struct TYPE_7__* next; } ;
typedef TYPE_1__ conn ;
struct TYPE_10__ {int backlog; } ;
struct TYPE_9__ {int listen_disabled_num; struct timeval maxconns_entered; int time_in_listen_disabled_us; } ;
struct TYPE_8__ {int accepting_conns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct timeval*,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*) ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_6 (TYPE_1__*,int) ;

void FUNC_7(const bool VAR_7) {
    conn *VAR_8;

    for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next) {
        if (VAR_7) {
            FUNC_6(VAR_8, VAR_1 | VAR_0);
            if (FUNC_3(VAR_8->sfd, VAR_4.backlog) != 0) {
                FUNC_5("listen");
            }
        }
        else {
            FUNC_6(VAR_8, 0);
            if (FUNC_3(VAR_8->sfd, 0) != 0) {
                FUNC_5("listen");
            }
        }
    }

    if (VAR_7) {
        struct timeval VAR_9;
        uint64_t VAR_10;
        FUNC_2(&VAR_9,((void*)0));
        FUNC_0();
        VAR_10 =
            (VAR_9.tv_sec - VAR_5.maxconns_entered.tv_sec) * 1000000
            + (VAR_9.tv_usec - VAR_5.maxconns_entered.tv_usec);
        VAR_5.time_in_listen_disabled_us += VAR_10;
        VAR_6.accepting_conns = 1;
        FUNC_1();
    } else {
        FUNC_0();
        VAR_6.accepting_conns = 0;
        FUNC_2(&VAR_5.maxconns_entered,((void*)0));
        VAR_5.listen_disabled_num++;
        FUNC_1();
        VAR_2 = 0;
        FUNC_4(-42, 0, 0);
    }
}
