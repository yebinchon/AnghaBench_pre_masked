
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef size_t ssize_t ;
typedef int ngx_fd_t ;


 scalar_t__ FUNC_0 (int ,void*,size_t,int *,int *) ;

ssize_t
FUNC_1(ngx_fd_t VAR_0, void *VAR_1, size_t VAR_2)
{
    u_long VAR_3;

    if (FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3, ((void*)0)) != 0) {
        return (size_t) VAR_3;
    }

    return -1;
}
