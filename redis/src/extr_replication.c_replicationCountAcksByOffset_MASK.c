
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_6__ {scalar_t__ replstate; long long repl_ack_off; } ;
typedef TYPE_2__ client ;
struct TYPE_7__ {int slaves; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_3__ VAR_1 ;

int FUNC_2(long long VAR_2) {
    listIter VAR_3;
    listNode *VAR_4;
    int VAR_5 = 0;

    FUNC_1(VAR_1.slaves,&VAR_3);
    while((VAR_4 = FUNC_0(&VAR_3))) {
        client *VAR_6 = VAR_4->value;

        if (VAR_6->replstate != VAR_0) continue;
        if (VAR_6->repl_ack_off >= VAR_2) VAR_5++;
    }
    return VAR_5;
}
