
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {long tv_sec; long tv_usec; } ;
struct TYPE_12__ {scalar_t__ mode; scalar_t__ size; int num; scalar_t__ pos; TYPE_1__ tv; int name; } ;
struct TYPE_11__ {int name; int pid; } ;
struct TYPE_10__ {scalar_t__ hsize; int * hbegin; int * hend; TYPE_4__ fd; TYPE_3__ pid; } ;
typedef TYPE_2__ result_t ;
typedef TYPE_3__ pidinfo_t ;
typedef scalar_t__ off_t ;
typedef TYPE_4__ fdinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int **,int **,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int ,int*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (scalar_t__,char*) ;
 char FUNC_7 (int ,int,TYPE_4__*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (scalar_t__) ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int FUNC_12 () ;
 int VAR_17 ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int VAR_18 ;
 int FUNC_14 (int) ;

int FUNC_15(int *VAR_19)
{
int VAR_20, VAR_21, VAR_22;
int VAR_23,VAR_24;
pidinfo_t VAR_25[VAR_1];
fdinfo_t VAR_26;
fdinfo_t VAR_27;
int VAR_28[VAR_0];
off_t VAR_29;
char VAR_30[64];
char VAR_31[64];
char VAR_32[64];
float VAR_33;
result_t VAR_34[VAR_2];
signed char VAR_35;
signed char VAR_36 = 1;
static signed char VAR_37 = 1;

VAR_20 = 0;
if (!VAR_6 && !VAR_7)
    VAR_37 = 0;


if (VAR_14) {
    VAR_36 = 0;
    for (VAR_23 = 0 ; VAR_23 < VAR_14 ; ++VAR_23) {
        VAR_20 += FUNC_5(VAR_13[VAR_23],
                                              VAR_25 + VAR_20,
                                              VAR_1 - VAR_20);
        if(VAR_20 >= VAR_1) {
            FUNC_9(VAR_17, "Found too much procs (max = %d)\n",VAR_1);
            return 0;
        }
    }
}

if (VAR_15) {
    VAR_36 = 0;
    for (VAR_23 = 0 ; VAR_23 < VAR_16 ; ++VAR_23) {
        VAR_20 += FUNC_4(VAR_15[VAR_23],
                                    VAR_25 + VAR_20);

        if(VAR_20 >= VAR_1) {
            FUNC_9(VAR_17, "Found too much procs (max = %d)\n",VAR_1);
            return 0;
        }
    }
}

if (VAR_36) {
    for (VAR_23 = 0 ; VAR_23 < VAR_12 ; VAR_23++) {
        VAR_20 += FUNC_5(VAR_11[VAR_23],
                                              VAR_25 + VAR_20,
                                              VAR_1 - VAR_20);
        if(VAR_20 >= VAR_1) {
            FUNC_9(VAR_17, "Found too much procs (max = %d)\n",VAR_1);
            return 0;
        }
    }
}

*VAR_19 = VAR_20;

if (!VAR_20) {
    if (VAR_9)
        return 0;
    if (VAR_6 || VAR_7) {
        FUNC_1();
 FUNC_12();
    }
    if (VAR_16) {
        FUNC_9(VAR_17, "No such pid: ");
        for (VAR_23 = 0 ; VAR_23 < VAR_16; ++VAR_23) {
            FUNC_9(VAR_17, "%d, ", VAR_15[VAR_23]);
        }
    }
    if (VAR_14)
    {
        FUNC_9(VAR_17, "No such command(s) running: ");
        for (VAR_23 = 0 ; VAR_23 < VAR_14; ++VAR_23) {
            FUNC_9(VAR_17, "%s, ", VAR_13[VAR_23]);
        }
    }
    if (!VAR_15 && !VAR_14) {
        FUNC_9(VAR_17,"No command currently running: ");
        for (VAR_23 = 0 ; VAR_23 < VAR_12 ; VAR_23++) {
            FUNC_9(VAR_17,"%s, ", VAR_11[VAR_23]);
        }
    }
    FUNC_9(VAR_17,"or wrong permissions.\n");
    VAR_37 = 0;
    return 0;
}

VAR_22 = 0;

for (VAR_23 = 0 ; VAR_23 < VAR_20 ; VAR_23++) {
    VAR_21 = FUNC_3(VAR_25[VAR_23].pid, VAR_28, VAR_0);

    VAR_29 = 0;


    for (VAR_24 = 0 ; VAR_24 < VAR_21 ; VAR_24++) {
        FUNC_7(VAR_25[VAR_23].pid, VAR_28[VAR_24], &VAR_26);

        if (VAR_8 == VAR_3 && VAR_26.mode != VAR_3 && VAR_26.mode != VAR_4)
            continue;
        if (VAR_8 == VAR_5 && VAR_26.mode != VAR_5 && VAR_26.mode != VAR_4)
            continue;

        if (VAR_26.size > VAR_29) {
            VAR_27 = VAR_26;
            VAR_29 = VAR_26.size;
        }
    }

    if (!VAR_29) {





        continue;
    }


    VAR_34[VAR_22].pid = VAR_25[VAR_23];
    VAR_34[VAR_22].fd = VAR_27;
    VAR_34[VAR_22].hbegin = ((void*)0);
    VAR_34[VAR_22].hend = ((void*)0);
    VAR_34[VAR_22].hsize = 0;

    VAR_22++;
}


if (VAR_10 && !VAR_37)
    FUNC_14(1000000 * VAR_18);
if (VAR_6 || VAR_7) {
    FUNC_1();
}
FUNC_2(VAR_34, VAR_22, 1);
for (VAR_23 = 0 ; VAR_23 < VAR_22 ; VAR_23++) {

    if (VAR_10 && !VAR_37) {
        VAR_35 = FUNC_7(VAR_34[VAR_23].pid.pid, VAR_34[VAR_23].fd.num, &VAR_26);
        if (VAR_35 && FUNC_13(VAR_34[VAR_23].fd.name, VAR_26.name))
            VAR_35 = 0;
    } else
        VAR_35 = 0;

    if (!VAR_35) {

        FUNC_6(VAR_34[VAR_23].fd.pos, VAR_31);
        FUNC_6(VAR_34[VAR_23].fd.size, VAR_30);
        VAR_33 = ((double)100 / (double)VAR_34[VAR_23].fd.size) * (double)VAR_34[VAR_23].fd.pos;
    } else {

        FUNC_6(VAR_26.pos, VAR_31);
        FUNC_6(VAR_26.size, VAR_30);
        VAR_33 = ((double)100 / (double)VAR_26.size) * (double)VAR_26.pos;

    }

    FUNC_10("[%5d] %s %s\n\t%.1f%% (%s / %s)",
        VAR_34[VAR_23].pid.pid,
        VAR_34[VAR_23].pid.name,
        VAR_34[VAR_23].fd.name,
        VAR_33,
        VAR_31,
        VAR_30);

    if (VAR_10 && VAR_35 && !VAR_37) {

        long long VAR_38;
        off_t VAR_39;
        off_t VAR_40;

        VAR_38 = (VAR_26.tv.tv_sec - VAR_34[VAR_23].fd.tv.tv_sec) * 1000000L
                    + (VAR_26.tv.tv_usec - VAR_34[VAR_23].fd.tv.tv_usec);
        VAR_39 = VAR_26.pos - VAR_34[VAR_23].fd.pos;
        VAR_34[VAR_23].hsize += FUNC_0(&VAR_34[VAR_23].hbegin, &VAR_34[VAR_23].hend, VAR_34[VAR_23].hsize, VAR_39 / (VAR_38 / 1000000.0));
        VAR_40 = FUNC_8(VAR_34[VAR_23].hbegin, VAR_34[VAR_23].hsize);

        FUNC_6(VAR_40, VAR_32);
        FUNC_10(" %s/s", VAR_32);
        if (VAR_40 && VAR_26.size - VAR_26.pos >= 0) {
            FUNC_11((VAR_26.size - VAR_26.pos) / VAR_40);
        }
    }


    FUNC_10("\n\n");





}
if (VAR_6 || VAR_7) {
    if (!VAR_22)
        FUNC_10("No PID(s) currently monitored\n");
    FUNC_12();
}
FUNC_2(VAR_34, VAR_22, 0);
VAR_37 = 0;
return 0;
}
