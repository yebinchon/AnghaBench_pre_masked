
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ maxmemory; scalar_t__ maxmemory_policy; scalar_t__ aof_state; scalar_t__ saveparamslen; scalar_t__ repl_state; scalar_t__ repl_slave_ro; int * masterhost; scalar_t__ loading; scalar_t__ cluster_enabled; } ;
struct TYPE_6__ {TYPE_1__* client; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (int *,int *,int *,float*) ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__ VAR_29 ;

int FUNC_2(RedisModuleCtx *VAR_30) {

    int VAR_31 = 0;

    if (VAR_30->client) {
        if (VAR_30->client->flags & VAR_1)
         VAR_31 |= VAR_11;
        if (VAR_30->client->flags & VAR_3)
         VAR_31 |= VAR_14;

        if (VAR_30->client->flags & VAR_2)
         VAR_31 |= VAR_19;
    }

    if (VAR_29.cluster_enabled)
        VAR_31 |= VAR_8;

    if (VAR_29.loading)
        VAR_31 |= VAR_10;


    if (VAR_29.maxmemory > 0) {
        VAR_31 |= VAR_13;

        if (VAR_29.maxmemory_policy != VAR_5)
            VAR_31 |= VAR_9;
    }


    if (VAR_29.aof_state != VAR_0)
        VAR_31 |= VAR_7;
    if (VAR_29.saveparamslen > 0)
        VAR_31 |= VAR_17;


    if (VAR_29.masterhost == ((void*)0)) {
        VAR_31 |= VAR_12;
    } else {
        VAR_31 |= VAR_24;
        if (VAR_29.repl_slave_ro)
            VAR_31 |= VAR_18;


        if (VAR_29.repl_state == VAR_25 ||
            VAR_29.repl_state == VAR_27)
        {
            VAR_31 |= VAR_20;
        } else if (VAR_29.repl_state == VAR_28) {
            VAR_31 |= VAR_23;
        } else if (VAR_29.repl_state == VAR_26) {
            VAR_31 |= VAR_21;
        }

        if (VAR_29.repl_state != VAR_26)
            VAR_31 |= VAR_22;
    }


    float VAR_32;
    int VAR_33 = FUNC_0(((void*)0),((void*)0),((void*)0),&VAR_32);
    if (VAR_33 == VAR_4) VAR_31 |= VAR_15;
    if (VAR_32 > 0.75) VAR_31 |= VAR_16;


    if (FUNC_1()) VAR_31 |= VAR_6;

    return VAR_31;
}
