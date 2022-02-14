
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int socklen_t ;
typedef int ngx_socket_t ;
typedef int ngx_err_t ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ,int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(ngx_cycle_t *VAR_7)
{
    int VAR_8;
    socklen_t VAR_9;
    ngx_err_t VAR_10;
    ngx_socket_t VAR_11;

    for (VAR_11 = 0; VAR_11 <= VAR_5; VAR_11++) {

        if (FUNC_1(VAR_11, &VAR_3) == 0) {
            continue;
        }

        VAR_9 = sizeof(int);

        if (FUNC_2(VAR_11, VAR_1, VAR_2, &VAR_8, &VAR_9) == -1) {
            VAR_10 = VAR_6;

            FUNC_3(VAR_0, VAR_7->log, VAR_10,
                          "invalid descriptor #%d in read fd_set", VAR_11);

            FUNC_0(VAR_11, &VAR_3);
        }
    }

    for (VAR_11 = 0; VAR_11 <= VAR_5; VAR_11++) {

        if (FUNC_1(VAR_11, &VAR_4) == 0) {
            continue;
        }

        VAR_9 = sizeof(int);

        if (FUNC_2(VAR_11, VAR_1, VAR_2, &VAR_8, &VAR_9) == -1) {
            VAR_10 = VAR_6;

            FUNC_3(VAR_0, VAR_7->log, VAR_10,
                          "invalid descriptor #%d in write fd_set", VAR_11);

            FUNC_0(VAR_11, &VAR_4);
        }
    }

    VAR_5 = -1;
}
