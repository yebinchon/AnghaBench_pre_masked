
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct redisCommand {scalar_t__ proc; int flags; } ;
struct TYPE_18__ {scalar_t__ ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_19__ {int count; TYPE_4__* commands; } ;
typedef TYPE_3__ multiState ;
struct TYPE_20__ {int argc; TYPE_2__** argv; struct redisCommand* cmd; } ;
typedef TYPE_4__ multiCmd ;
struct TYPE_21__ {struct TYPE_21__* slaveof; } ;
typedef TYPE_5__ clusterNode ;
struct TYPE_22__ {int flags; TYPE_3__ mstate; } ;
typedef TYPE_6__ client ;
struct TYPE_23__ {int cluster_module_flags; TYPE_1__* cluster; int * db; } ;
struct TYPE_17__ {scalar_t__ state; TYPE_5__** migrating_slots_to; int ** importing_slots_from; TYPE_5__** slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (struct redisCommand*,TYPE_2__**,int,int*) ;
 int FUNC_3 (char*,int ) ;
 int * FUNC_4 (int *,TYPE_2__*) ;
 scalar_t__ VAR_17 ;
 TYPE_5__* VAR_18 ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_7__ VAR_19 ;

clusterNode *FUNC_7(client *VAR_20, struct redisCommand *VAR_21, robj **VAR_22, int VAR_23, int *VAR_24, int *VAR_25) {
    clusterNode *VAR_26 = ((void*)0);
    robj *VAR_27 = ((void*)0);
    int VAR_28 = 0;
    multiState *VAR_29, VAR_30;
    multiCmd VAR_31;
    int VAR_32, VAR_33 = 0, VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;


    if (VAR_19.cluster_module_flags & VAR_3)
        return VAR_18;


    if (VAR_25) *VAR_25 = VAR_10;







    if (VAR_21->proc == VAR_16) {


        if (!(VAR_20->flags & VAR_1)) return VAR_18;
        VAR_29 = &VAR_20->mstate;
    } else {



        VAR_29 = &VAR_30;
        VAR_30.commands = &VAR_31;
        VAR_30.count = 1;
        VAR_31.argv = VAR_22;
        VAR_31.argc = VAR_23;
        VAR_31.cmd = VAR_21;
    }



    for (VAR_32 = 0; VAR_32 < VAR_29->count; VAR_32++) {
        struct redisCommand *VAR_37;
        robj **VAR_38;
        int VAR_39, *VAR_40, VAR_41, VAR_42;

        VAR_37 = VAR_29->commands[VAR_32].cmd;
        VAR_39 = VAR_29->commands[VAR_32].argc;
        VAR_38 = VAR_29->commands[VAR_32].argv;

        VAR_40 = FUNC_2(VAR_37,VAR_38,VAR_39,&VAR_41);
        for (VAR_42 = 0; VAR_42 < VAR_41; VAR_42++) {
            robj *VAR_43 = VAR_38[VAR_40[VAR_42]];
            int VAR_44 = FUNC_3((char*)VAR_43->ptr,
                                       FUNC_6(VAR_43->ptr));

            if (VAR_27 == ((void*)0)) {


                VAR_27 = VAR_43;
                VAR_33 = VAR_44;
                VAR_26 = VAR_19.cluster->slots[VAR_33];





                if (VAR_26 == ((void*)0)) {
                    FUNC_1(VAR_40);
                    if (VAR_25)
                        *VAR_25 = VAR_8;
                    return ((void*)0);
                }






                if (VAR_26 == VAR_18 &&
                    VAR_19.cluster->migrating_slots_to[VAR_33] != ((void*)0))
                {
                    VAR_34 = 1;
                } else if (VAR_19.cluster->importing_slots_from[VAR_33] != ((void*)0)) {
                    VAR_35 = 1;
                }
            } else {


                if (!FUNC_0(VAR_27,VAR_43)) {
                    if (VAR_33 != VAR_44) {

                        FUNC_1(VAR_40);
                        if (VAR_25)
                            *VAR_25 = VAR_6;
                        return ((void*)0);
                    } else {


                        VAR_28 = 1;
                    }
                }
            }


            if ((VAR_34 || VAR_35) &&
                FUNC_4(&VAR_19.db[0],VAR_43) == ((void*)0))
            {
                VAR_36++;
            }
        }
        FUNC_1(VAR_40);
    }



    if (VAR_26 == ((void*)0)) return VAR_18;


    if (VAR_19.cluster->state != VAR_4) {
        if (VAR_25) *VAR_25 = VAR_7;
        return ((void*)0);
    }


    if (VAR_24) *VAR_24 = VAR_33;




    if ((VAR_34 || VAR_35) && VAR_21->proc == VAR_17)
        return VAR_18;



    if (VAR_34 && VAR_36) {
        if (VAR_25) *VAR_25 = VAR_5;
        return VAR_19.cluster->migrating_slots_to[VAR_33];
    }





    if (VAR_35 &&
        (VAR_20->flags & VAR_0 || VAR_21->flags & VAR_12))
    {
        if (VAR_28 && VAR_36) {
            if (VAR_25) *VAR_25 = VAR_11;
            return ((void*)0);
        } else {
            return VAR_18;
        }
    }




    if (VAR_20->flags & VAR_2 &&
        (VAR_21->flags & VAR_13 || VAR_21->proc == VAR_14 ||
         VAR_21->proc == VAR_15) &&
        FUNC_5(VAR_18) &&
        VAR_18->slaveof == VAR_26)
    {
        return VAR_18;
    }



    if (VAR_26 != VAR_18 && VAR_25) *VAR_25 = VAR_9;
    return VAR_26;
}
