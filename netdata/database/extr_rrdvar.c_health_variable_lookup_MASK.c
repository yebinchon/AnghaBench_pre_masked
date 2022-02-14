
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int calculated_number ;
struct TYPE_9__ {TYPE_2__* rrdset; } ;
struct TYPE_8__ {int rrdvar_root_index; } ;
struct TYPE_7__ {TYPE_1__* rrdfamily; int rrdvar_root_index; TYPE_3__* rrdhost; } ;
struct TYPE_6__ {int rrdvar_root_index; } ;
typedef int RRDVAR ;
typedef TYPE_2__ RRDSET ;
typedef TYPE_3__ RRDHOST ;
typedef TYPE_4__ RRDCALC ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int ) ;

int FUNC_2(const char *VAR_0, uint32_t VAR_1, RRDCALC *VAR_2, calculated_number *VAR_3) {
    RRDSET *VAR_4 = VAR_2->rrdset;
    if(!VAR_4) return 0;

    RRDHOST *VAR_5 = VAR_4->rrdhost;
    RRDVAR *VAR_6;

    VAR_6 = FUNC_1(&VAR_4->rrdvar_root_index, VAR_0, VAR_1);
    if(VAR_6) {
        *VAR_3 = FUNC_0(VAR_6);
        return 1;
    }

    VAR_6 = FUNC_1(&VAR_4->rrdfamily->rrdvar_root_index, VAR_0, VAR_1);
    if(VAR_6) {
        *VAR_3 = FUNC_0(VAR_6);
        return 1;
    }

    VAR_6 = FUNC_1(&VAR_5->rrdvar_root_index, VAR_0, VAR_1);
    if(VAR_6) {
        *VAR_3 = FUNC_0(VAR_6);
        return 1;
    }

    return 0;
}
