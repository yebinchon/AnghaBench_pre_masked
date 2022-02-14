
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef int time_t ;
typedef int ngx_int_t ;
typedef int ngx_fd_t ;
struct TYPE_3__ {void* dwHighDateTime; void* dwLowDateTime; } ;
typedef TYPE_1__ FILETIME ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int *,TYPE_1__*) ;

ngx_int_t
FUNC_1(u_char *VAR_2, ngx_fd_t VAR_3, time_t VAR_4)
{
    uint64_t VAR_5;
    FILETIME VAR_6;



    VAR_5 = VAR_4 * 10000000 + 116444736000000000;

    VAR_6.dwLowDateTime = (DWORD) VAR_5;
    VAR_6.dwHighDateTime = (DWORD) (VAR_5 >> 32);

    if (FUNC_0(VAR_3, ((void*)0), ((void*)0), &VAR_6) != 0) {
        return VAR_1;
    }

    return VAR_0;
}
