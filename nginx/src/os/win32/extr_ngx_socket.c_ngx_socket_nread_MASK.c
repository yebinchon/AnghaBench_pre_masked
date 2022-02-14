
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long*) ;

int
FUNC_1(ngx_socket_t VAR_1, int *VAR_2)
{
    unsigned long VAR_3;

    if (FUNC_0(VAR_1, VAR_0, &VAR_3) == -1) {
        return -1;
    }

    *VAR_2 = VAR_3;

    return 0;
}
