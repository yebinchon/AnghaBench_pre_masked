
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; int tm_mday; } ;


 int FUNC_0 (struct tm*) ;
 int FUNC_1 (int,struct tm*) ;
 int FUNC_2 () ;

time_t
FUNC_3(time_t VAR_0)
{
    time_t VAR_1, VAR_2;
    struct tm VAR_3;

    VAR_1 = FUNC_2();

    FUNC_1(VAR_1, &VAR_3);

    VAR_3.tm_hour = (int) (VAR_0 / 3600);
    VAR_0 %= 3600;
    VAR_3.tm_min = (int) (VAR_0 / 60);
    VAR_3.tm_sec = (int) (VAR_0 % 60);

    VAR_2 = FUNC_0(&VAR_3);

    if (VAR_2 == -1) {
        return -1;
    }

    if (VAR_2 - VAR_1 > 0) {
        return VAR_2;
    }

    VAR_3.tm_mday++;



    VAR_2 = FUNC_0(&VAR_3);

    if (VAR_2 != -1) {
        return VAR_2;
    }

    return -1;
}
