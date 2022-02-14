
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int flags; } ;
typedef TYPE_1__ sentinelRedisInstance ;
struct TYPE_11__ {scalar_t__ tilt_start_time; scalar_t__ tilt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 TYPE_10__ VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

void FUNC_9(sentinelRedisInstance *VAR_7) {


    FUNC_6(VAR_7);
    FUNC_7(VAR_7);





    if (VAR_6.tilt) {
        if (FUNC_0()-VAR_6.tilt_start_time < VAR_3) return;
        VAR_6.tilt = 0;
        FUNC_4(VAR_0,"-tilt",((void*)0),"#tilt mode exited");
    }


    FUNC_3(VAR_7);


    if (VAR_7->flags & (VAR_4|VAR_5)) {

    }


    if (VAR_7->flags & VAR_4) {
        FUNC_2(VAR_7);
        if (FUNC_8(VAR_7))
            FUNC_1(VAR_7,VAR_1);
        FUNC_5(VAR_7);
        FUNC_1(VAR_7,VAR_2);
    }
}
