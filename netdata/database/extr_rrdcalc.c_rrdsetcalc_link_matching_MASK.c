
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int rrdset; struct TYPE_11__* next; } ;
struct TYPE_10__ {TYPE_3__* alarms; } ;
struct TYPE_9__ {TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;
typedef TYPE_3__ RRDCALC ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;

inline void FUNC_3(RRDSET *VAR_0) {
    RRDHOST *VAR_1 = VAR_0->rrdhost;


    RRDCALC *VAR_2;
    for(VAR_2 = VAR_1->alarms; VAR_2 ; VAR_2 = VAR_2->next) {
        if(FUNC_2(VAR_2->rrdset))
            continue;

        if(FUNC_2(FUNC_0(VAR_2, VAR_0)))
            FUNC_1(VAR_0, VAR_2);
    }
}
