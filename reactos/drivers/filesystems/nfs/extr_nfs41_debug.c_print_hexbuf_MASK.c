
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Milliseconds; int Second; int Minute; int Hour; } ;
typedef TYPE_1__ TIME_FIELDS ;
typedef int LARGE_INTEGER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;

void FUNC_5(int VAR_2, unsigned char *VAR_3, unsigned char *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    LARGE_INTEGER VAR_8, VAR_9;
    TIME_FIELDS VAR_10;

    if (!VAR_2) return;

    FUNC_3(&VAR_8);
    FUNC_1(&VAR_8,&VAR_9);
    FUNC_4(&VAR_9, &VAR_10);

    FUNC_0(VAR_1, VAR_0,
        "[%ld].[%02u:%02u:%02u.%u] %s\n", FUNC_2(),
        VAR_10.Hour, VAR_10.Minute, VAR_10.Second,
        VAR_10.Milliseconds, VAR_3);
    for(VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_5; VAR_6++, VAR_7++) {
        FUNC_0(VAR_1, VAR_0,
            "%02x ", VAR_4[VAR_6]);
        if (((VAR_7+1) % 30 == 0 && VAR_7 > 0))
            FUNC_0(VAR_1, VAR_0, "\n");
    }
    FUNC_0(VAR_1, VAR_0, "\n");
}
