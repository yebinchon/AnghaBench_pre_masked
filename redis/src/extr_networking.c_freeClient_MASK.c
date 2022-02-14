
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int listNode ;
typedef int list ;
struct TYPE_18__ {int keys; } ;
struct TYPE_19__ {int flags; scalar_t__ replstate; int repldbfd; int * peerid; struct TYPE_19__* argv; scalar_t__ name; int * replpreamble; int reply; int pubsub_patterns; int pubsub_channels; int watched_keys; TYPE_1__ bpop; int * querybuf; int * pending_querybuf; scalar_t__ conn; } ;
typedef TYPE_2__ client ;
struct TYPE_20__ {int * clients_to_close; int unixtime; int repl_no_slaves_since; int * slaves; int * monitors; scalar_t__ master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int ,int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 TYPE_7__ VAR_14 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;

void FUNC_24(client *VAR_15) {
    listNode *VAR_16;



    if (VAR_15->flags & VAR_5) {
        FUNC_4(VAR_15);
        return;
    }


    if (VAR_15->conn) {
        FUNC_10(VAR_8,
                              VAR_10,
                              VAR_15);
    }






    if (VAR_14.master && VAR_15->flags & VAR_3) {
        FUNC_19(VAR_7,"Connection with master lost.");
        if (!(VAR_15->flags & (VAR_1|
                          VAR_2|
                          VAR_0)))
        {
            FUNC_14(VAR_15);
            return;
        }
    }


    if ((VAR_15->flags & VAR_6) && !(VAR_15->flags & VAR_4)) {
        FUNC_19(VAR_7,"Connection with replica %s lost.",
            FUNC_15(VAR_15));
    }


    FUNC_17(VAR_15->querybuf);
    FUNC_17(VAR_15->pending_querybuf);
    VAR_15->querybuf = ((void*)0);


    if (VAR_15->flags & VAR_0) FUNC_20(VAR_15);
    FUNC_2(VAR_15->bpop.keys);


    FUNC_22(VAR_15);
    FUNC_8(VAR_15->watched_keys);


    FUNC_11(VAR_15,0);
    FUNC_12(VAR_15,0);
    FUNC_2(VAR_15->pubsub_channels);
    FUNC_8(VAR_15->pubsub_patterns);


    FUNC_8(VAR_15->reply);
    FUNC_3(VAR_15);




    FUNC_21(VAR_15);



    if (VAR_15->flags & VAR_6) {
        if (VAR_15->replstate == VAR_13) {
            if (VAR_15->repldbfd != -1) FUNC_0(VAR_15->repldbfd);
            if (VAR_15->replpreamble) FUNC_17(VAR_15->replpreamble);
        }
        list *VAR_17 = (VAR_15->flags & VAR_4) ? VAR_14.monitors : VAR_14.slaves;
        VAR_16 = FUNC_9(VAR_17,VAR_15);
        FUNC_18(VAR_16 != ((void*)0));
        FUNC_6(VAR_17,VAR_16);



        if (VAR_15->flags & VAR_6 && FUNC_7(VAR_14.slaves) == 0)
            VAR_14.repl_no_slaves_since = VAR_14.unixtime;
        FUNC_13();

        if (VAR_15->replstate == VAR_12)
            FUNC_10(VAR_9,
                                  VAR_11,
                                  ((void*)0));
    }



    if (VAR_15->flags & VAR_3) FUNC_16();



    if (VAR_15->flags & VAR_2) {
        VAR_16 = FUNC_9(VAR_14.clients_to_close,VAR_15);
        FUNC_18(VAR_16 != ((void*)0));
        FUNC_6(VAR_14.clients_to_close,VAR_16);
    }



    if (VAR_15->name) FUNC_1(VAR_15->name);
    FUNC_23(VAR_15->argv);
    FUNC_5(VAR_15);
    FUNC_17(VAR_15->peerid);
    FUNC_23(VAR_15);
}
