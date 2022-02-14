
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cached_master; TYPE_1__* master; int * masterhost; } ;
struct TYPE_5__ {long long reploff; } ;
struct TYPE_4__ {long long reploff; } ;


 TYPE_3__ VAR_0 ;

long long FUNC_0(void) {
    long long VAR_1 = 0;

    if (VAR_0.masterhost != ((void*)0)) {
        if (VAR_0.master) {
            VAR_1 = VAR_0.master->reploff;
        } else if (VAR_0.cached_master) {
            VAR_1 = VAR_0.cached_master->reploff;
        }
    }




    if (VAR_1 < 0) VAR_1 = 0;
    return VAR_1;
}
