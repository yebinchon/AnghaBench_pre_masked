
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int noreply; int sfd; size_t wsize; size_t wbytes; int write_and_go; scalar_t__ wbuf; scalar_t__ wcurr; scalar_t__ iovused; scalar_t__ msgused; scalar_t__ msgcurr; } ;
typedef TYPE_1__ conn ;
struct TYPE_7__ {int verbose; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int,char const*) ;
 int FUNC_4 (scalar_t__,char const*,int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(conn *VAR_4, const char *VAR_5) {
    size_t VAR_6;

    FUNC_1(VAR_4 != ((void*)0));

    if (VAR_4->noreply) {
        if (VAR_2.verbose > 1)
            FUNC_3(VAR_3, ">%d NOREPLY %s\n", VAR_4->sfd, VAR_5);
        VAR_4->noreply = 0;
        FUNC_2(VAR_4, VAR_0);
        return;
    }

    if (VAR_2.verbose > 1)
        FUNC_3(VAR_3, ">%d %s\n", VAR_4->sfd, VAR_5);


    VAR_4->msgcurr = 0;
    VAR_4->msgused = 0;
    VAR_4->iovused = 0;
    FUNC_0(VAR_4);

    VAR_6 = FUNC_5(VAR_5);
    if ((VAR_6 + 2) > VAR_4->wsize) {

        VAR_5 = "SERVER_ERROR output line too long";
        VAR_6 = FUNC_5(VAR_5);
    }

    FUNC_4(VAR_4->wbuf, VAR_5, VAR_6);
    FUNC_4(VAR_4->wbuf + VAR_6, "\r\n", 2);
    VAR_4->wbytes = VAR_6 + 2;
    VAR_4->wcurr = VAR_4->wbuf;

    FUNC_2(VAR_4, VAR_1);
    VAR_4->write_and_go = VAR_0;
    return;
}
