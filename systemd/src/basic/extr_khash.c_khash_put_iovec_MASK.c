
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct msghdr {size_t msg_iovlen; size_t member_1; struct iovec* member_0; struct iovec* msg_iov; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int digest_valid; int fd; } ;
typedef TYPE_1__ khash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct msghdr*,int ) ;

int FUNC_2(khash *VAR_2, const struct iovec *VAR_3, size_t VAR_4) {
        struct msghdr VAR_5 = {
                VAR_5.msg_iov = (struct iovec*) VAR_3,
                VAR_5.msg_iovlen = VAR_4,
        };
        ssize_t VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3 || VAR_4 == 0);

        if (VAR_4 <= 0)
                return 0;

        VAR_6 = FUNC_1(VAR_2->fd, &VAR_5, VAR_0);
        if (VAR_6 < 0)
                return -VAR_1;

        VAR_2->digest_valid = 0;

        return 0;
}
