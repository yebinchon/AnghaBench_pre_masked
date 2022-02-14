
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ptr; } ;
typedef TYPE_3__ robj ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int clusterNode ;
struct TYPE_9__ {int keys; } ;
struct TYPE_12__ {int flags; scalar_t__ btype; TYPE_1__ bpop; } ;
typedef TYPE_4__ client ;
struct TYPE_13__ {TYPE_2__* cluster; } ;
struct TYPE_10__ {scalar_t__ state; int ** importing_slots_from; int ** slots; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,int *,int,int ) ;
 int * FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int * VAR_8 ;
 int FUNC_6 (scalar_t__) ;
 TYPE_5__ VAR_9 ;

int FUNC_7(client *VAR_10) {
    if (VAR_10->flags & VAR_3 &&
        (VAR_10->btype == VAR_0 ||
         VAR_10->btype == VAR_2 ||
         VAR_10->btype == VAR_1))
    {
        dictEntry *VAR_11;
        dictIterator *VAR_12;


        if (VAR_9.cluster->state == VAR_4) {
            FUNC_0(VAR_10,((void*)0),0,VAR_5);
            return 1;
        }


        VAR_12 = FUNC_1(VAR_10->bpop.keys);
        if ((VAR_11 = FUNC_3(VAR_12)) != ((void*)0)) {
            robj *VAR_13 = FUNC_2(VAR_11);
            int VAR_14 = FUNC_5((char*)VAR_13->ptr, FUNC_6(VAR_13->ptr));
            clusterNode *VAR_15 = VAR_9.cluster->slots[VAR_14];




            if (VAR_15 != VAR_8 &&
                VAR_9.cluster->importing_slots_from[VAR_14] == ((void*)0))
            {
                if (VAR_15 == ((void*)0)) {
                    FUNC_0(VAR_10,((void*)0),0,
                        VAR_6);
                } else {
                    FUNC_0(VAR_10,VAR_15,VAR_14,
                        VAR_7);
                }
                FUNC_4(VAR_12);
                return 1;
            }
        }
        FUNC_4(VAR_12);
    }
    return 0;
}
