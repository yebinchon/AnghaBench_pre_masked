
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
typedef void* ngx_uint_t ;
struct TYPE_13__ {size_t ngx_tm_wday; int ngx_tm_mon; int ngx_tm_gmtoff; int ngx_tm_sec; int ngx_tm_min; int ngx_tm_hour; int ngx_tm_mday; int ngx_tm_year; int ngx_tm_isdst; } ;
typedef TYPE_1__ ngx_tm_t ;
struct TYPE_14__ {scalar_t__ sec; int gmtoff; void* msec; } ;
typedef TYPE_2__ ngx_time_t ;
typedef void* ngx_int_t ;
struct TYPE_18__ {int * data; } ;
struct TYPE_17__ {int * data; } ;
struct TYPE_16__ {int * data; } ;
struct TYPE_15__ {int * data; } ;
struct TYPE_12__ {int * data; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 void* VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int ** VAR_6 ;
 TYPE_2__* VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (int) ;
 TYPE_10__ VAR_9 ;
 TYPE_9__ VAR_10 ;
 TYPE_8__ VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,void*) ;
 int FUNC_7 (int *,char*,int ,int,int ,int ,int ,...) ;
 int VAR_16 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 size_t VAR_17 ;
 int * VAR_18 ;

void
FUNC_11(void)
{
    u_char *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23;
    ngx_tm_t VAR_24, VAR_25;
    time_t VAR_26;
    ngx_uint_t VAR_27;
    ngx_time_t *VAR_28;
    struct timeval VAR_29;

    if (!FUNC_9(&VAR_16)) {
        return;
    }

    FUNC_1(&VAR_29);

    VAR_26 = VAR_29.tv_sec;
    VAR_27 = VAR_29.tv_usec / 1000;

    VAR_15 = FUNC_6(VAR_26, VAR_27);

    VAR_28 = &VAR_7[VAR_17];

    if (VAR_28->sec == VAR_26) {
        VAR_28->msec = VAR_27;
        FUNC_10(&VAR_16);
        return;
    }

    if (VAR_17 == VAR_0 - 1) {
        VAR_17 = 0;
    } else {
        VAR_17++;
    }

    VAR_28 = &VAR_7[VAR_17];

    VAR_28->sec = VAR_26;
    VAR_28->msec = VAR_27;

    FUNC_3(VAR_26, &VAR_25);


    VAR_19 = &VAR_5[VAR_17][0];

    (void) FUNC_7(VAR_19, "%s, %02d %s %4d %02d:%02d:%02d GMT",
                       VAR_18[VAR_25.ngx_tm_wday], VAR_25.ngx_tm_mday,
                       VAR_8[VAR_25.ngx_tm_mon - 1], VAR_25.ngx_tm_year,
                       VAR_25.ngx_tm_hour, VAR_25.ngx_tm_min, VAR_25.ngx_tm_sec);
    FUNC_4(VAR_26, &VAR_24);
    VAR_2 = FUNC_8(VAR_24.ngx_tm_isdst);
    VAR_28->gmtoff = VAR_2;




    VAR_20 = &VAR_1[VAR_17][0];

    (void) FUNC_7(VAR_20, "%4d/%02d/%02d %02d:%02d:%02d",
                       VAR_24.ngx_tm_year, VAR_24.ngx_tm_mon,
                       VAR_24.ngx_tm_mday, VAR_24.ngx_tm_hour,
                       VAR_24.ngx_tm_min, VAR_24.ngx_tm_sec);


    VAR_21 = &VAR_4[VAR_17][0];

    (void) FUNC_7(VAR_21, "%02d/%s/%d:%02d:%02d:%02d %c%02i%02i",
                       VAR_24.ngx_tm_mday, VAR_8[VAR_24.ngx_tm_mon - 1],
                       VAR_24.ngx_tm_year, VAR_24.ngx_tm_hour,
                       VAR_24.ngx_tm_min, VAR_24.ngx_tm_sec,
                       VAR_28->gmtoff < 0 ? '-' : '+',
                       FUNC_0(VAR_28->gmtoff / 60), FUNC_0(VAR_28->gmtoff % 60));

    VAR_22 = &VAR_3[VAR_17][0];

    (void) FUNC_7(VAR_22, "%4d-%02d-%02dT%02d:%02d:%02d%c%02i:%02i",
                       VAR_24.ngx_tm_year, VAR_24.ngx_tm_mon,
                       VAR_24.ngx_tm_mday, VAR_24.ngx_tm_hour,
                       VAR_24.ngx_tm_min, VAR_24.ngx_tm_sec,
                       VAR_28->gmtoff < 0 ? '-' : '+',
                       FUNC_0(VAR_28->gmtoff / 60), FUNC_0(VAR_28->gmtoff % 60));

    VAR_23 = &VAR_6[VAR_17][0];

    (void) FUNC_7(VAR_23, "%s %2d %02d:%02d:%02d",
                       VAR_8[VAR_24.ngx_tm_mon - 1], VAR_24.ngx_tm_mday,
                       VAR_24.ngx_tm_hour, VAR_24.ngx_tm_min, VAR_24.ngx_tm_sec);

    FUNC_5();

    VAR_14 = VAR_28;
    VAR_12.data = VAR_19;
    VAR_9.data = VAR_20;
    VAR_11.data = VAR_21;
    VAR_10 = VAR_22;
    VAR_13.data = VAR_23;

    FUNC_10(&VAR_16);
}
