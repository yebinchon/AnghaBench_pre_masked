
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msghdr {int msg_iovlen; scalar_t__ msg_controllen; int * msg_control; struct nn_iovec* msg_iov; } ;
struct nn_iovec {size_t iov_len; void* iov_base; } ;


 int FUNC_0 (int,struct nn_msghdr*,int) ;

int FUNC_1 (int VAR_0, const void *VAR_1, size_t VAR_2, int VAR_3)
{
    struct nn_iovec VAR_4;
    struct nn_msghdr VAR_5;

    VAR_4.iov_base = (void*) VAR_1;
    VAR_4.iov_len = VAR_2;

    VAR_5.msg_iov = &VAR_4;
    VAR_5.msg_iovlen = 1;
    VAR_5.msg_control = ((void*)0);
    VAR_5.msg_controllen = 0;

    return FUNC_0 (VAR_0, &VAR_5, VAR_3);
}
