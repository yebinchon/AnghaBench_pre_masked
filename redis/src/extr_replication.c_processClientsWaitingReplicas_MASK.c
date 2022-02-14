
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_8__ {long long reploffset; int numreplicas; } ;
struct TYPE_10__ {TYPE_1__ bpop; } ;
typedef TYPE_3__ client ;
struct TYPE_11__ {int clients_waiting_acks; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (long long) ;
 TYPE_5__ VAR_0 ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(void) {
    long long VAR_1 = 0;
    int VAR_2 = 0;

    listIter VAR_3;
    listNode *VAR_4;

    FUNC_2(VAR_0.clients_waiting_acks,&VAR_3);
    while((VAR_4 = FUNC_1(&VAR_3))) {
        client *VAR_5 = VAR_4->value;





        if (VAR_1 && VAR_1 > VAR_5->bpop.reploffset &&
                           VAR_2 > VAR_5->bpop.numreplicas)
        {
            FUNC_4(VAR_5);
            FUNC_0(VAR_5,VAR_2);
        } else {
            int VAR_6 = FUNC_3(VAR_5->bpop.reploffset);

            if (VAR_6 >= VAR_5->bpop.numreplicas) {
                VAR_1 = VAR_5->bpop.reploffset;
                VAR_2 = VAR_6;
                FUNC_4(VAR_5);
                FUNC_0(VAR_5,VAR_6);
            }
        }
    }
}
