
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t processed_bytes; } ;
typedef TYPE_1__ rio ;
struct TYPE_6__ {size_t loading_process_events_interval_bytes; scalar_t__ repl_state; scalar_t__ masterhost; scalar_t__ rdb_checksum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,void const*,size_t) ;
 TYPE_2__ VAR_1 ;
 int FUNC_5 (int ) ;

void FUNC_6(rio *VAR_2, const void *VAR_3, size_t VAR_4) {
    if (VAR_1.rdb_checksum)
        FUNC_4(VAR_2, VAR_3, VAR_4);
    if (VAR_1.loading_process_events_interval_bytes &&
        (VAR_2->processed_bytes + VAR_4)/VAR_1.loading_process_events_interval_bytes > VAR_2->processed_bytes/VAR_1.loading_process_events_interval_bytes)
    {



        FUNC_5(0);
        if (VAR_1.masterhost && VAR_1.repl_state == VAR_0)
            FUNC_3();
        FUNC_0(VAR_2->processed_bytes);
        FUNC_1();
        FUNC_2(0);
    }
}
