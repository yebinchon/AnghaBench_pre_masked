
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int ;
typedef int socklen_t ;
typedef int ngx_socket_t ;
typedef int ngx_err_t ;
struct TYPE_6__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_7__ {size_t fd_count; int * fd_array; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,int*) ;
 TYPE_3__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(ngx_cycle_t *VAR_6)
{
    int VAR_7;
    u_int VAR_8;
    socklen_t VAR_9;
    ngx_err_t VAR_10;
    ngx_socket_t VAR_11;

    for (VAR_8 = 0; VAR_8 < VAR_3.fd_count; VAR_8++) {

        VAR_11 = VAR_3.fd_array[VAR_8];
        VAR_9 = sizeof(int);

        if (FUNC_1(VAR_11, VAR_1, VAR_2, (char *) &VAR_7, &VAR_9) == -1) {
            VAR_10 = VAR_5;

            FUNC_2(VAR_0, VAR_6->log, VAR_10,
                          "invalid descriptor #%d in read fd_set", VAR_11);

            FUNC_0(VAR_11, &VAR_3);
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_4.fd_count; VAR_8++) {

        VAR_11 = VAR_4.fd_array[VAR_8];
        VAR_9 = sizeof(int);

        if (FUNC_1(VAR_11, VAR_1, VAR_2, (char *) &VAR_7, &VAR_9) == -1) {
            VAR_10 = VAR_5;

            FUNC_2(VAR_0, VAR_6->log, VAR_10,
                          "invalid descriptor #%d in write fd_set", VAR_11);

            FUNC_0(VAR_11, &VAR_4);
        }
    }
}
