
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_5__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_6__ {scalar_t__ repl_ack_time; scalar_t__ replstate; } ;
typedef TYPE_2__ client ;
struct TYPE_7__ {scalar_t__ repl_min_slaves_max_lag; scalar_t__ unixtime; int repl_good_slaves_count; int slaves; int repl_min_slaves_to_write; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_3__ VAR_1 ;

void FUNC_2(void) {
    listIter VAR_2;
    listNode *VAR_3;
    int VAR_4 = 0;

    if (!VAR_1.repl_min_slaves_to_write ||
        !VAR_1.repl_min_slaves_max_lag) return;

    FUNC_1(VAR_1.slaves,&VAR_2);
    while((VAR_3 = FUNC_0(&VAR_2))) {
        client *VAR_5 = VAR_3->value;
        time_t VAR_6 = VAR_1.unixtime - VAR_5->repl_ack_time;

        if (VAR_5->replstate == VAR_0 &&
            VAR_6 <= VAR_1.repl_min_slaves_max_lag) VAR_4++;
    }
    VAR_1.repl_good_slaves_count = VAR_4;
}
