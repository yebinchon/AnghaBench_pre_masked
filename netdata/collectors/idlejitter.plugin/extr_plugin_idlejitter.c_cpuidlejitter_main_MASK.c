
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct timeval {int dummy; } ;
struct TYPE_2__ {scalar_t__ rrd_update_every; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct timeval*,struct timeval*) ;
 scalar_t__ FUNC_3 (unsigned long long) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (struct timeval*) ;
 int * FUNC_7 (int *,char*,int *,int,int,int ) ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 int * FUNC_9 (char*,char*,int *,char*,int *,char*,char*,char*,int *,int ,scalar_t__,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

void *FUNC_14(void *VAR_9) {
    FUNC_5(VAR_6, VAR_9);

    usec_t VAR_10 = FUNC_0("plugin:idlejitter", "loop time in ms", VAR_0) * VAR_4;
    if(VAR_10 <= 0) {
        FUNC_1("plugin:idlejitter", "loop time in ms", VAR_0);
        VAR_10 = VAR_0 * VAR_4;
    }

    RRDSET *VAR_11 = FUNC_9(
            "system"
            , "idlejitter"
            , ((void*)0)
            , "idlejitter"
            , ((void*)0)
            , "CPU Idle Jitter"
            , "microseconds lost/s"
            , "idlejitter.plugin"
            , ((void*)0)
            , VAR_1
            , VAR_7->rrd_update_every
            , VAR_2
    );
    RRDDIM *VAR_12 = FUNC_7(VAR_11, "min", ((void*)0), 1, 1, VAR_3);
    RRDDIM *VAR_13 = FUNC_7(VAR_11, "max", ((void*)0), 1, 1, VAR_3);
    RRDDIM *VAR_14 = FUNC_7(VAR_11, "average", ((void*)0), 1, 1, VAR_3);

    usec_t VAR_15 = VAR_7->rrd_update_every * VAR_5;
    struct timeval VAR_16, VAR_17;
    unsigned long long VAR_18;

    for(VAR_18 = 0; 1 ;VAR_18++) {
        int VAR_19 = 0;
        usec_t VAR_20 = 0,
                VAR_21 = 0,
                VAR_22 = 0,
                VAR_23 = 0;

        if(VAR_8) break;

        while(VAR_23 < VAR_15) {
            FUNC_6(&VAR_16);
            FUNC_12(VAR_10);
            FUNC_6(&VAR_17);

            usec_t VAR_24 = FUNC_2(&VAR_17, &VAR_16);
            VAR_23 += VAR_24;

            usec_t VAR_25 = VAR_24 - VAR_10;
            VAR_20 += VAR_25;

            if(FUNC_13(!VAR_19))
                VAR_21 = VAR_25;
            else if(VAR_25 < VAR_21)
                VAR_21 = VAR_25;

            if(VAR_25 > VAR_22)
                VAR_22 = VAR_25;

            VAR_19++;
        }

        if(VAR_8) break;

        if(VAR_19) {
            if (FUNC_3(VAR_18)) FUNC_11(VAR_11);
            FUNC_8(VAR_11, VAR_12, VAR_21);
            FUNC_8(VAR_11, VAR_13, VAR_22);
            FUNC_8(VAR_11, VAR_14, VAR_20 / VAR_19);
            FUNC_10(VAR_11);
        }
    }

    FUNC_4(1);
    return ((void*)0);
}
