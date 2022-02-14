
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nn_usock {int s; } ;
struct msghdr {scalar_t__ msg_iovlen; TYPE_1__* msg_iov; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ iov_len; int iov_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_4 (struct nn_usock *VAR_5, struct msghdr *VAR_6)
{
    ssize_t VAR_7;





    VAR_7 = FUNC_3 (VAR_5->s, VAR_6, 0);



    if (FUNC_2 (VAR_7 < 0)) {
        if (FUNC_1 (VAR_4 == VAR_0 || VAR_4 == VAR_2))
            VAR_7 = 0;
        else {


            return -VAR_1;
        }
    }


    while (VAR_7) {
        if (VAR_7 >= (ssize_t)VAR_6->msg_iov->iov_len) {
            --VAR_6->msg_iovlen;
            if (!VAR_6->msg_iovlen) {
                FUNC_0 (VAR_7 == (ssize_t)VAR_6->msg_iov->iov_len);
                return 0;
            }
            VAR_7 -= VAR_6->msg_iov->iov_len;
            ++VAR_6->msg_iov;
        }
        else {
            *((uint8_t**) &(VAR_6->msg_iov->iov_base)) += VAR_7;
            VAR_6->msg_iov->iov_len -= VAR_7;
            return -VAR_0;
        }
    }

    if (VAR_6->msg_iovlen > 0)
        return -VAR_0;

    return 0;
}
