
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {int deorphaned; } ;
typedef TYPE_4__ lfs1_t ;
struct TYPE_21__ {int dir; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_1__ u; } ;
struct TYPE_25__ {TYPE_2__ d; } ;
typedef TYPE_5__ lfs1_entry_t ;
struct TYPE_23__ {int size; int * tail; } ;
struct TYPE_26__ {TYPE_3__ d; int pair; } ;
typedef TYPE_6__ lfs1_dir_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int *,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*,TYPE_5__*,char const**) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int ,TYPE_6__*) ;

int FUNC_7(lfs1_t *VAR_2, const char *VAR_3) {

    if (!VAR_2->deorphaned) {
        int VAR_4 = FUNC_1(VAR_2);
        if (VAR_4) {
            return VAR_4;
        }
    }

    lfs1_dir_t VAR_5;
    lfs1_entry_t VAR_6;
    int VAR_7 = FUNC_4(VAR_2, &VAR_5, &VAR_6, &VAR_3);
    if (VAR_7) {
        return VAR_7;
    }

    lfs1_dir_t VAR_8;
    if (VAR_6.d.type == VAR_1) {



        VAR_7 = FUNC_3(VAR_2, &VAR_8, VAR_6.d.u.dir);
        if (VAR_7) {
            return VAR_7;
        } else if (VAR_8.d.size != sizeof(VAR_8.d)+4) {
            return VAR_0;
        }
    }


    VAR_7 = FUNC_5(VAR_2, &VAR_5, &VAR_6);
    if (VAR_7) {
        return VAR_7;
    }


    if (VAR_6.d.type == VAR_1) {
        int VAR_9 = FUNC_6(VAR_2, VAR_8.pair, &VAR_5);
        if (VAR_9 < 0) {
            return VAR_9;
        }

        FUNC_0(VAR_9);
        VAR_5.d.tail[0] = VAR_8.d.tail[0];
        VAR_5.d.tail[1] = VAR_8.d.tail[1];

        VAR_7 = FUNC_2(VAR_2, &VAR_5, ((void*)0), 0);
        if (VAR_7) {
            return VAR_7;
        }
    }

    return 0;
}
