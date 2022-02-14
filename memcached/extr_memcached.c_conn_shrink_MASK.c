
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msghdr {int dummy; } ;
struct iovec {int dummy; } ;
typedef int item ;
struct TYPE_3__ {scalar_t__ rsize; scalar_t__ rbytes; char* rcurr; char* rbuf; int isize; int msgsize; int iovsize; struct iovec* iov; struct msghdr* msglist; int ** ilist; int transport; } ;
typedef TYPE_1__ conn ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (void*,int) ;

__attribute__((used)) static void FUNC_4(conn *VAR_8) {
    FUNC_1(VAR_8 != ((void*)0));

    if (FUNC_0(VAR_8->transport))
        return;

    if (VAR_8->rsize > VAR_7 && VAR_8->rbytes < VAR_0) {
        char *VAR_9;

        if (VAR_8->rcurr != VAR_8->rbuf)
            FUNC_2(VAR_8->rbuf, VAR_8->rcurr, (size_t)VAR_8->rbytes);

        VAR_9 = (char *)FUNC_3((void *)VAR_8->rbuf, VAR_0);

        if (VAR_9) {
            VAR_8->rbuf = VAR_9;
            VAR_8->rsize = VAR_0;
        }

        VAR_8->rcurr = VAR_8->rbuf;
    }

    if (VAR_8->isize > VAR_3) {
        item **VAR_10 = (item**) FUNC_3((void *)VAR_8->ilist, VAR_4 * sizeof(VAR_8->ilist[0]));
        if (VAR_10) {
            VAR_8->ilist = VAR_10;
            VAR_8->isize = VAR_4;
        }

    }

    if (VAR_8->msgsize > VAR_5) {
        struct msghdr *VAR_11 = (struct msghdr *) FUNC_3((void *)VAR_8->msglist, VAR_6 * sizeof(VAR_8->msglist[0]));
        if (VAR_11) {
            VAR_8->msglist = VAR_11;
            VAR_8->msgsize = VAR_6;
        }

    }

    if (VAR_8->iovsize > VAR_1) {
        struct iovec *VAR_12 = (struct iovec *) FUNC_3((void *)VAR_8->iov, VAR_2 * sizeof(VAR_8->iov[0]));
        if (VAR_12) {
            VAR_8->iov = VAR_12;
            VAR_8->iovsize = VAR_2;
        }

    }
}
