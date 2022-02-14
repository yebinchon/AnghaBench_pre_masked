
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t sfd; int * ssl_wbuf; struct TYPE_5__* iov; struct TYPE_5__* suffixlist; struct TYPE_5__* ilist; struct TYPE_5__* wbuf; struct TYPE_5__* rbuf; struct TYPE_5__* msglist; struct TYPE_5__* hdrbuf; } ;
typedef TYPE_1__ conn ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int ** VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 size_t VAR_1 ;

void FUNC_3(conn *VAR_2) {
    if (VAR_2) {
        FUNC_1(VAR_2 != ((void*)0));
        FUNC_1(VAR_2->sfd >= 0 && VAR_2->sfd < VAR_1);

        FUNC_0(VAR_2);
        VAR_0[VAR_2->sfd] = ((void*)0);
        if (VAR_2->hdrbuf)
            FUNC_2(VAR_2->hdrbuf);
        if (VAR_2->msglist)
            FUNC_2(VAR_2->msglist);
        if (VAR_2->rbuf)
            FUNC_2(VAR_2->rbuf);
        if (VAR_2->wbuf)
            FUNC_2(VAR_2->wbuf);
        if (VAR_2->ilist)
            FUNC_2(VAR_2->ilist);
        if (VAR_2->suffixlist)
            FUNC_2(VAR_2->suffixlist);
        if (VAR_2->iov)
            FUNC_2(VAR_2->iov);





        FUNC_2(VAR_2);
    }
}
