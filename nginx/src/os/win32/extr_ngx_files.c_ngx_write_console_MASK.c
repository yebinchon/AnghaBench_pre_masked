
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef size_t ssize_t ;
typedef int ngx_fd_t ;


 int FUNC_0 (void*,void*,size_t) ;
 scalar_t__ FUNC_1 (int ,void*,size_t,int *,int *) ;

ssize_t
FUNC_2(ngx_fd_t VAR_0, void *VAR_1, size_t VAR_2)
{
    u_long VAR_3;

    (void) FUNC_0(VAR_1, VAR_1, VAR_2);

    if (FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3, ((void*)0)) != 0) {
        return (size_t) VAR_3;
    }

    return -1;
}
