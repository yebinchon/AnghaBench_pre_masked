
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timeout_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct timeout_queue {int dummy; } ;
struct lwan_thread {int wheel; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (struct timeout_queue*,struct lwan_thread*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct timeout_queue *VAR_1, struct lwan_thread *VAR_2, int VAR_3)
{
    timeout_t VAR_4;
    struct timespec VAR_5;

    if (FUNC_0(FUNC_1(VAR_0, &VAR_5) < 0))
        FUNC_2("Could not get monotonic time");

    FUNC_5(VAR_2->wheel,
                    (timeout_t)(VAR_5.tv_sec * 1000 + VAR_5.tv_nsec / 1000000));

    VAR_4 = FUNC_4(VAR_2->wheel);
    if (FUNC_0((int64_t)VAR_4 < 0))
        goto infinite_timeout;

    if (VAR_4 == 0) {
        if (!FUNC_3(VAR_1, VAR_2, VAR_3))
            goto infinite_timeout;

        VAR_4 = FUNC_4(VAR_2->wheel);
        if (VAR_4 == 0)
            goto infinite_timeout;
    }

    return (int)VAR_4;

infinite_timeout:
    return -1;
}
