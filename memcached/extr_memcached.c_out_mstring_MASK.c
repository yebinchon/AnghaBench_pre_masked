
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wbytes; int noreply; scalar_t__ wbuf; scalar_t__ wcurr; int write_and_go; } ;
typedef TYPE_1__ conn ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_3(conn *VAR_2, bool VAR_3) {
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_2->wbytes != 0);

    if (VAR_2->noreply && VAR_3) {
        VAR_2->noreply = 0;
        FUNC_1(VAR_2, VAR_0);
        return;
    }

    FUNC_2(VAR_2->wbuf + VAR_2->wbytes, "\r\n", 2);
    VAR_2->wbytes += 2;
    VAR_2->wcurr = VAR_2->wbuf;

    FUNC_1(VAR_2, VAR_1);
    VAR_2->write_and_go = VAR_0;
    return;
}
