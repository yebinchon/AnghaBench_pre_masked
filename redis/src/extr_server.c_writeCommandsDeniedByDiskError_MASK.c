
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ saveparamslen; scalar_t__ lastbgsave_status; scalar_t__ aof_state; scalar_t__ aof_last_write_status; scalar_t__ stop_writes_on_bgsave_err; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

int FUNC_0(void) {
    if (VAR_5.stop_writes_on_bgsave_err &&
        VAR_5.saveparamslen > 0 &&
        VAR_5.lastbgsave_status == VAR_1)
    {
        return VAR_4;
    } else if (VAR_5.aof_state != VAR_0 &&
               VAR_5.aof_last_write_status == VAR_1)
    {
        return VAR_2;
    } else {
        return VAR_3;
    }
}
