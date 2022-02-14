
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_pid_t ;
typedef int ngx_int_t ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
typedef int * HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*,char*) ;
 int FUNC_4 (int *,char*,char*,int ) ;

ngx_int_t
FUNC_5(ngx_cycle_t *VAR_5, char *VAR_6, ngx_pid_t VAR_7)
{
    HANDLE VAR_8;
    ngx_int_t VAR_9;
    char VAR_10[VAR_3];

    FUNC_4((u_char *) VAR_10, "Global\\ngx_%s_%P%Z", VAR_6, VAR_7);

    VAR_8 = FUNC_0(VAR_0, 0, VAR_10);
    if (VAR_8 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_5->log, VAR_4,
                      "OpenEvent(\"%s\") failed", VAR_10);
        return 1;
    }

    if (FUNC_1(VAR_8) == 0) {
        FUNC_3(VAR_1, VAR_5->log, VAR_4,
                      "SetEvent(\"%s\") failed", VAR_10);
        VAR_9 = 1;

    } else {
        VAR_9 = 0;
    }

    FUNC_2(VAR_8);

    return VAR_9;
}
