
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_15__ {int flags; int replicas_count; int * replicate; int port; int ip; int * friends; int * context; } ;
typedef TYPE_2__ clusterManagerNode ;
struct TYPE_16__ {int * nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char**) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,char**) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 TYPE_6__ VAR_4 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int * FUNC_10 () ;
 TYPE_1__* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int FUNC_15(clusterManagerNode *VAR_5, int VAR_6) {
    if (VAR_5->context == ((void*)0) && !FUNC_4(VAR_5)) {
        FUNC_8(VAR_5);
        return 0;
    }
    VAR_6 |= VAR_3;
    char *VAR_7 = ((void*)0);
    if (!FUNC_5(VAR_5, &VAR_7)) {
        FUNC_7(VAR_5, VAR_7);
        if (VAR_7) FUNC_14(VAR_7);
        FUNC_8(VAR_5);
        return 0;
    }
    VAR_7 = ((void*)0);
    if (!FUNC_6(VAR_5, VAR_6, &VAR_7)) {
        if (VAR_7) {
            FUNC_0(VAR_5, VAR_7);
            FUNC_14(VAR_7);
        }
        FUNC_8(VAR_5);
        return 0;
    }
    listIter VAR_8;
    listNode *VAR_9;
    if (VAR_4.nodes != ((void*)0)) {
        FUNC_13(VAR_4.nodes, &VAR_8);
        while ((VAR_9 = FUNC_11(&VAR_8)) != ((void*)0))
            FUNC_8((clusterManagerNode *) VAR_9->value);
        FUNC_12(VAR_4.nodes);
    }
    VAR_4.nodes = FUNC_10();
    FUNC_9(VAR_4.nodes, VAR_5);
    if (VAR_5->friends != ((void*)0)) {
        FUNC_13(VAR_5->friends, &VAR_8);
        while ((VAR_9 = FUNC_11(&VAR_8)) != ((void*)0)) {
            clusterManagerNode *VAR_10 = VAR_9->value;
            if (!VAR_10->ip || !VAR_10->port) goto invalid_friend;
            if (!VAR_10->context && !FUNC_4(VAR_10))
                goto invalid_friend;
            VAR_7 = ((void*)0);
            if (FUNC_6(VAR_10, 0, &VAR_7)) {
                if (VAR_10->flags & (VAR_2 |
                                     VAR_0 |
                                     VAR_1))
                    goto invalid_friend;
                FUNC_9(VAR_4.nodes, VAR_10);
            } else {
                FUNC_1("[ERR] Unable to load info for "
                                     "node %s:%d\n",
                                     VAR_10->ip, VAR_10->port);
                goto invalid_friend;
            }
            continue;
invalid_friend:
            FUNC_8(VAR_10);
        }
        FUNC_12(VAR_5->friends);
        VAR_5->friends = ((void*)0);
    }

    FUNC_13(VAR_4.nodes, &VAR_8);
    while ((VAR_9 = FUNC_11(&VAR_8)) != ((void*)0)) {
        clusterManagerNode *VAR_11 = VAR_9->value;
        if (VAR_11->replicate != ((void*)0)) {
            clusterManagerNode *VAR_12 = FUNC_3(VAR_11->replicate);
            if (VAR_12 == ((void*)0)) {
                FUNC_2("*** WARNING: %s:%d claims to be "
                                      "slave of unknown node ID %s.\n",
                                      VAR_11->ip, VAR_11->port, VAR_11->replicate);
            } else VAR_12->replicas_count++;
        }
    }
    return 1;
}
