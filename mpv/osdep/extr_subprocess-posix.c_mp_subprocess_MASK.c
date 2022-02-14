
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* subprocess_read_cb ) (void*,char*,scalar_t__) ;
struct pollfd {int fd; scalar_t__ revents; int events; } ;
struct mp_cancel {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int posix_spawn_file_actions_t ;
typedef int pid_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pollfd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct mp_cancel*) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int*,char*,int *,int *,char**,int ) ;
 scalar_t__ FUNC_12 (int,char*,int) ;
 scalar_t__ FUNC_13 (struct pollfd*,int ,int) ;
 int FUNC_14 (void*,char*,scalar_t__) ;
 scalar_t__ FUNC_15 (int,int*,int ) ;

int FUNC_16(char **VAR_8, struct mp_cancel *VAR_9, void *VAR_10,
                  subprocess_read_cb VAR_11, subprocess_read_cb VAR_12,
                  char **VAR_13)
{
    posix_spawn_file_actions_t VAR_14;
    bool VAR_15 = 0;
    int VAR_16 = -1;
    int VAR_17[2] = {-1, -1};
    int VAR_18[2] = {-1, -1};
    int VAR_19 = -1;
    pid_t VAR_20 = -1;
    bool VAR_21 = 0;
    bool VAR_22 = 0;

    if (VAR_11 && FUNC_6(VAR_17) < 0)
        goto done;
    if (VAR_12 && FUNC_6(VAR_18) < 0)
        goto done;

    VAR_19 = FUNC_7("/dev/null", VAR_3 | VAR_2);
    if (VAR_19 < 0)
        goto done;

    if (FUNC_10(&VAR_14))
        goto done;
    VAR_15 = 1;

    if (FUNC_8(&VAR_14, VAR_19, 0))
        goto done;
    if (VAR_17[1] >= 0 && FUNC_8(&VAR_14, VAR_17[1], 1))
        goto done;
    if (VAR_18[1] >= 0 && FUNC_8(&VAR_14, VAR_18[1], 2))
        goto done;

    if (FUNC_11(&VAR_20, VAR_8[0], &VAR_14, ((void*)0), VAR_8, VAR_6)) {
        VAR_20 = -1;
        goto done;
    }
    VAR_21 = 1;

    FUNC_1(VAR_17[1]);
    FUNC_1(VAR_18[1]);
    FUNC_1(VAR_19);

    int *VAR_23[2] = {&VAR_17[0], &VAR_18[0]};
    subprocess_read_cb VAR_24[2] = {VAR_11, VAR_12};

    while (VAR_17[0] >= 0 || VAR_18[0] >= 0) {
        struct pollfd VAR_25[] = {
            {.events = VAR_4, .fd = *VAR_23[0]},
            {.events = VAR_4, .fd = *VAR_23[1]},
            {.events = VAR_4, .fd = VAR_9 ? FUNC_5(VAR_9) : -1},
        };
        if (FUNC_13(VAR_25, FUNC_0(VAR_25), -1) < 0 && VAR_7 != VAR_0)
            break;
        for (int VAR_26 = 0; VAR_26 < 2; VAR_26++) {
            if (VAR_25[VAR_26].revents) {
                char VAR_27[4096];
                ssize_t VAR_28 = FUNC_12(*VAR_23[VAR_26], VAR_27, sizeof(VAR_27));
                if (VAR_28 < 0 && VAR_7 == VAR_0)
                    continue;
                if (VAR_28 > 0 && VAR_24[VAR_26])
                    VAR_24[VAR_26](VAR_10, VAR_27, VAR_28);
                if (VAR_28 <= 0)
                    FUNC_1(*VAR_23[VAR_26]);
            }
        }
        if (VAR_25[2].revents) {
            FUNC_4(VAR_20, VAR_5);
            VAR_22 = 1;
            break;
        }
    }





    while (FUNC_15(VAR_20, &VAR_16, 0) < 0 && VAR_7 == VAR_0) {}

done:
    if (VAR_15)
        FUNC_9(&VAR_14);
    FUNC_1(VAR_17[0]);
    FUNC_1(VAR_17[1]);
    FUNC_1(VAR_18[0]);
    FUNC_1(VAR_18[1]);
    FUNC_1(VAR_19);

    if (!VAR_21 || (FUNC_3(VAR_16) && FUNC_2(VAR_16) == 127)) {
        *VAR_13 = "init";
        VAR_16 = -1;
    } else if (FUNC_3(VAR_16)) {
        *VAR_13 = ((void*)0);
        VAR_16 = FUNC_2(VAR_16);
    } else {
        *VAR_13 = "killed";
        VAR_16 = VAR_22 ? VAR_1 : -1;
    }

    return VAR_16;
}
