
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int clients_pending_read; scalar_t__ io_threads_do_reads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_4 ;

int FUNC_1(client *VAR_5) {
    if (VAR_3 &&
        VAR_4.io_threads_do_reads &&
        !(VAR_5->flags & (VAR_0|VAR_2|VAR_1)))
    {
        VAR_5->flags |= VAR_1;
        FUNC_0(VAR_4.clients_pending_read,VAR_5);
        return 1;
    } else {
        return 0;
    }
}
