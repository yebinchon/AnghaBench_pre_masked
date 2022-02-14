
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int useconds_t ;
typedef scalar_t__ rel_time_t ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ last_cmd_time; TYPE_1__* thread; int transport; } ;
typedef TYPE_2__ conn ;
struct TYPE_7__ {int verbose; scalar_t__ idle_timeout; } ;
struct TYPE_5__ {int notify_send_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_2 (char*,int*,int) ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void *FUNC_6(void *VAR_10) {
    int VAR_11;
    conn *VAR_12;
    char VAR_13[VAR_1];
    rel_time_t VAR_14;
    int VAR_15;
    useconds_t VAR_16 = 1000000 / (VAR_7 / VAR_0);

    while(VAR_6) {
        if (VAR_8.verbose > 2)
            FUNC_1(VAR_9, "idle timeout thread at top of connection list\n");

        VAR_14 = VAR_5;

        for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
            if ((VAR_11 % VAR_0) == 0) {
                if (VAR_8.verbose > 2)
                    FUNC_1(VAR_9, "idle timeout thread sleeping for %ulus\n",
                        (unsigned int)VAR_16);
                FUNC_4(VAR_16);
            }

            if (!VAR_4[VAR_11])
                continue;

            VAR_12 = VAR_4[VAR_11];

            if (!FUNC_0(VAR_12->transport))
                continue;

            if (VAR_12->state != VAR_2 && VAR_12->state != VAR_3)
                continue;

            if ((VAR_5 - VAR_12->last_cmd_time) > VAR_8.idle_timeout) {
                VAR_13[0] = 't';
                FUNC_2(&VAR_13[1], &VAR_11, sizeof(int));
                if (FUNC_5(VAR_12->thread->notify_send_fd, VAR_13, VAR_1)
                    != VAR_1)
                    FUNC_3("Failed to write timeout to notify pipe");
            } else {
                if (VAR_12->last_cmd_time < VAR_14)
                    VAR_14 = VAR_12->last_cmd_time;
            }
        }


        VAR_15 = VAR_8.idle_timeout - (VAR_5 - VAR_14) + 1;
        if (VAR_15 <= 0)
            VAR_15 = 1;

        if (VAR_8.verbose > 2)
            FUNC_1(VAR_9,
                    "idle timeout thread finished pass, sleeping for %ds\n",
                    VAR_15);
        FUNC_4((useconds_t) VAR_15 * 1000000);
    }

    return ((void*)0);
}
