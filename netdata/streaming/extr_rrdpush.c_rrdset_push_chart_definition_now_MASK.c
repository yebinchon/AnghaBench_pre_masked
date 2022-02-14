
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int rrdpush_send_enabled; } ;
struct TYPE_10__ {TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(RRDSET *VAR_0) {
    RRDHOST *VAR_1 = VAR_0->rrdhost;

    if(FUNC_6(!VAR_1->rrdpush_send_enabled || !FUNC_5(VAR_0)))
        return;

    FUNC_3(VAR_0);
    FUNC_0(VAR_1);
    FUNC_2(VAR_0);
    FUNC_1(VAR_1);
    FUNC_4(VAR_0);
}
