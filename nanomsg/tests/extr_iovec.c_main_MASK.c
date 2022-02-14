
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msghdr {int msg_iovlen; struct nn_iovec* msg_iov; } ;
struct nn_iovec {char* iov_base; int iov_len; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct nn_msghdr*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct nn_msghdr*,int ) ;
 int FUNC_5 (int,struct nn_msghdr*,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10 ()
{
    int VAR_3;
    int VAR_4;
    int VAR_5;
    struct nn_iovec VAR_6 [2];
    struct nn_msghdr VAR_7;
    char VAR_8 [6];

    VAR_4 = FUNC_9 (VAR_0, VAR_1);
    FUNC_6 (VAR_4, VAR_2);
    VAR_5 = FUNC_9 (VAR_0, VAR_1);
    FUNC_8 (VAR_5, VAR_2);

    VAR_6 [0].iov_base = "AB";
    VAR_6 [0].iov_len = 2;
    VAR_6 [1].iov_base = "CDEF";
    VAR_6 [1].iov_len = 4;
    FUNC_2 (&VAR_7, 0, sizeof (VAR_7));
    VAR_7.msg_iov = VAR_6;
    VAR_7.msg_iovlen = 2;
    VAR_3 = FUNC_5 (VAR_5, &VAR_7, 0);
    FUNC_0 (VAR_3 >= 0);
    FUNC_3 (VAR_3 == 6);

    VAR_6 [0].iov_base = VAR_8;
    VAR_6 [0].iov_len = 4;
    VAR_6 [1].iov_base = VAR_8 + 4;
    VAR_6 [1].iov_len = 2;
    FUNC_2 (&VAR_7, 0, sizeof (VAR_7));
    VAR_7.msg_iov = VAR_6;
    VAR_7.msg_iovlen = 2;
    VAR_3 = FUNC_4 (VAR_4, &VAR_7, 0);
    FUNC_0 (VAR_3 >= 0);
    FUNC_3 (VAR_3 == 6);
    FUNC_3 (FUNC_1 (VAR_8, "ABCDEF", 6) == 0);

    FUNC_7 (VAR_5);
    FUNC_7 (VAR_4);

    return 0;
}
