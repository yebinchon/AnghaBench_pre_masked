
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msghdr {scalar_t__ msg_namelen; int * msg_name; int * msg_iov; } ;
struct TYPE_5__ {int msgsize; int msgused; size_t iovused; scalar_t__ request_addr_size; int transport; scalar_t__ msgbytes; int request_addr; int * iov; struct msghdr* msglist; } ;
typedef TYPE_1__ conn ;
struct TYPE_6__ {int malloc_fails; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct msghdr*,int ,int) ;
 struct msghdr* FUNC_6 (struct msghdr*,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_7(conn *VAR_2)
{
    struct msghdr *VAR_3;

    FUNC_4(VAR_2 != ((void*)0));

    if (VAR_2->msgsize == VAR_2->msgused) {
        VAR_3 = FUNC_6(VAR_2->msglist, VAR_2->msgsize * 2 * sizeof(struct msghdr));
        if (! VAR_3) {
            FUNC_1();
            VAR_1.malloc_fails++;
            FUNC_2();
            return -1;
        }
        VAR_2->msglist = VAR_3;
        VAR_2->msgsize *= 2;
    }

    VAR_3 = VAR_2->msglist + VAR_2->msgused;



    FUNC_5(VAR_3, 0, sizeof(struct msghdr));

    VAR_3->msg_iov = &VAR_2->iov[VAR_2->iovused];

    if (FUNC_0(VAR_2->transport) && VAR_2->request_addr_size > 0) {
        VAR_3->msg_name = &VAR_2->request_addr;
        VAR_3->msg_namelen = VAR_2->request_addr_size;
    }

    VAR_2->msgbytes = 0;
    VAR_2->msgused++;

    if (FUNC_0(VAR_2->transport)) {

        return FUNC_3(VAR_2, ((void*)0), VAR_0);
    }

    return 0;
}
