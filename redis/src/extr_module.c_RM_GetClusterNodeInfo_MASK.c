
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int port; TYPE_1__* slaveof; int name; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_4__ {int name; } ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (char const*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;

int FUNC_4(RedisModuleCtx *VAR_17, const char *VAR_18, char *VAR_19, char *VAR_20, int *VAR_21, int *VAR_22) {
    FUNC_0(VAR_17);

    clusterNode *VAR_23 = FUNC_1(VAR_18);
    if (VAR_23->flags & (VAR_4|VAR_1))
        return VAR_8;

    if (VAR_19) FUNC_2(VAR_19,VAR_23->name,VAR_10);

    if (VAR_20) {



        if (VAR_23->flags & VAR_2 && VAR_23->slaveof)
            FUNC_2(VAR_20,VAR_23->slaveof->name,VAR_10);
        else
            FUNC_3(VAR_20,0,VAR_10);
    }
    if (VAR_21) *VAR_21 = VAR_23->port;



    if (VAR_22) {
        *VAR_22 = 0;
        if (VAR_23->flags & VAR_3) *VAR_22 |= VAR_12;
        if (VAR_23->flags & VAR_2) *VAR_22 |= VAR_11;
        if (VAR_23->flags & VAR_7) *VAR_22 |= VAR_15;
        if (VAR_23->flags & VAR_6) *VAR_22 |= VAR_14;
        if (VAR_23->flags & VAR_0) *VAR_22 |= VAR_9;
        if (VAR_23->flags & VAR_5) *VAR_22 |= VAR_13;
    }
    return VAR_16;
}
