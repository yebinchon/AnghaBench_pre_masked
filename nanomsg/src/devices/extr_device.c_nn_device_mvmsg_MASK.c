
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msghdr {int msg_iovlen; void** msg_control; void* msg_controllen; struct nn_iovec* msg_iov; } ;
struct nn_iovec {void** iov_base; void* iov_len; } ;
struct nn_device_recipe {int (* nn_device_rewritemsg ) (struct nn_device_recipe*,int,int,int,struct nn_msghdr*,int) ;} ;
typedef int hdr ;


 void* VAR_0 ;
 int FUNC_0 (struct nn_msghdr*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct nn_msghdr*,int) ;
 int FUNC_3 (int,struct nn_msghdr*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct nn_device_recipe*,int,int,int,struct nn_msghdr*,int) ;

int FUNC_6 (struct nn_device_recipe *VAR_1,
    int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    void *VAR_6;
    void *VAR_7;
    struct nn_iovec VAR_8;
    struct nn_msghdr VAR_9;

    VAR_8.iov_base = &VAR_6;
    VAR_8.iov_len = VAR_0;
    FUNC_0 (&VAR_9, 0, sizeof (VAR_9));
    VAR_9.msg_iov = &VAR_8;
    VAR_9.msg_iovlen = 1;
    VAR_9.msg_control = &VAR_7;
    VAR_9.msg_controllen = VAR_0;
    VAR_5 = FUNC_2 (VAR_2, &VAR_9, VAR_4);
    if (FUNC_4 (VAR_5 < 0)) {

        return -1;
    }

    VAR_5 = VAR_1->nn_device_rewritemsg (VAR_1, VAR_2, VAR_3, VAR_4, &VAR_9, VAR_5);
    if (FUNC_4 (VAR_5 == -1))
        return -1;
    else if (VAR_5 == 0)
        return 0;
    FUNC_1(VAR_5 == 1);

    VAR_5 = FUNC_3 (VAR_3, &VAR_9, VAR_4);
    if (FUNC_4 (VAR_5 < 0)) {

        return -1;
    }
    return 0;
}
