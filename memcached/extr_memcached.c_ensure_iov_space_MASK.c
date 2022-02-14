
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_6__ {int iovused; int iovsize; int msgused; TYPE_1__* msglist; struct iovec* iov; } ;
typedef TYPE_2__ conn ;
struct TYPE_7__ {int malloc_fails; } ;
struct TYPE_5__ {scalar_t__ msg_iovlen; struct iovec* msg_iov; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct iovec*,int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_4(conn *VAR_1) {
    FUNC_2(VAR_1 != ((void*)0));

    if (VAR_1->iovused >= VAR_1->iovsize) {
        int VAR_2, VAR_3;
        struct iovec *VAR_4 = (struct iovec *)FUNC_3(VAR_1->iov,
                                (VAR_1->iovsize * 2) * sizeof(struct iovec));
        if (! VAR_4) {
            FUNC_0();
            VAR_0.malloc_fails++;
            FUNC_1();
            return -1;
        }
        VAR_1->iov = VAR_4;
        VAR_1->iovsize *= 2;


        for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_1->msgused; VAR_2++) {
            VAR_1->msglist[VAR_2].msg_iov = &VAR_1->iov[VAR_3];
            VAR_3 += VAR_1->msglist[VAR_2].msg_iovlen;
        }
    }

    return 0;
}
