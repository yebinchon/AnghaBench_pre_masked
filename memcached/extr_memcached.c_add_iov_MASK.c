
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct msghdr {size_t msg_iovlen; TYPE_1__* msg_iov; } ;
struct TYPE_7__ {int msgused; scalar_t__ msgbytes; int iovused; struct msghdr* msglist; int transport; } ;
typedef TYPE_2__ conn ;
struct TYPE_6__ {int iov_len; void* iov_base; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(conn *VAR_2, const void *VAR_3, int VAR_4) {
    struct msghdr *VAR_5;
    int VAR_6;

    FUNC_2(VAR_2 != ((void*)0));

    if (FUNC_0(VAR_2->transport)) {
        do {
            VAR_5 = &VAR_2->msglist[VAR_2->msgused - 1];






            if (VAR_5->msg_iovlen == VAR_0 ||
                (VAR_2->msgbytes >= VAR_1)) {
                FUNC_1(VAR_2);
                VAR_5 = &VAR_2->msglist[VAR_2->msgused - 1];
            }

            if (FUNC_3(VAR_2) != 0)
                return -1;


            if (VAR_4 + VAR_2->msgbytes > VAR_1) {
                VAR_6 = VAR_4 + VAR_2->msgbytes - VAR_1;
                VAR_4 -= VAR_6;
            } else {
                VAR_6 = 0;
            }

            VAR_5 = &VAR_2->msglist[VAR_2->msgused - 1];
            VAR_5->msg_iov[VAR_5->msg_iovlen].iov_base = (void *)VAR_3;
            VAR_5->msg_iov[VAR_5->msg_iovlen].iov_len = VAR_4;

            VAR_2->msgbytes += VAR_4;
            VAR_2->iovused++;
            VAR_5->msg_iovlen++;

            VAR_3 = ((char *)VAR_3) + VAR_4;
            VAR_4 = VAR_6;
        } while (VAR_6 > 0);
    } else {

        VAR_5 = &VAR_2->msglist[VAR_2->msgused - 1];
        if (VAR_5->msg_iovlen == VAR_0) {
            FUNC_1(VAR_2);
            VAR_5 = &VAR_2->msglist[VAR_2->msgused - 1];
        }

        if (FUNC_3(VAR_2) != 0)
            return -1;

        VAR_5->msg_iov[VAR_5->msg_iovlen].iov_base = (void *)VAR_3;
        VAR_5->msg_iov[VAR_5->msg_iovlen].iov_len = VAR_4;
        VAR_2->msgbytes += VAR_4;
        VAR_2->iovused++;
        VAR_5->msg_iovlen++;
    }

    return 0;
}
