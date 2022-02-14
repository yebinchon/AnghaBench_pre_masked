
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int * peerid; scalar_t__ bufpos; scalar_t__ reply_bytes; scalar_t__ sentlen; int reply; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {TYPE_1__* master; TYPE_1__* cached_master; } ;
struct TYPE_8__ {int reploff; int read_reploff; int pending_querybuf; int querybuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_4__ VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(client *VAR_3) {
    FUNC_6(VAR_2.master != ((void*)0) && VAR_2.cached_master == ((void*)0));
    FUNC_7(VAR_1,"Caching the disconnected master state.");


    FUNC_8(VAR_3);





    FUNC_4(VAR_2.master->querybuf);
    FUNC_4(VAR_2.master->pending_querybuf);
    VAR_2.master->read_reploff = VAR_2.master->reploff;
    if (VAR_3->flags & VAR_0) FUNC_0(VAR_3);
    FUNC_1(VAR_3->reply);
    VAR_3->sentlen = 0;
    VAR_3->reply_bytes = 0;
    VAR_3->bufpos = 0;
    FUNC_3(VAR_3);



    VAR_2.cached_master = VAR_2.master;


    if (VAR_3->peerid) {
        FUNC_5(VAR_3->peerid);
        VAR_3->peerid = ((void*)0);
    }




    FUNC_2();
}
