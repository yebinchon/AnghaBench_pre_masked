
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_10__ {scalar_t__ type; char* str; } ;
typedef TYPE_2__ redisReply ;
typedef TYPE_3__* client ;
typedef int aeEventLoop ;
struct TYPE_13__ {int requests; scalar_t__* latency; int requests_finished; scalar_t__ showerrors; } ;
struct TYPE_12__ {char* errstr; } ;
struct TYPE_11__ {scalar_t__ latency; scalar_t__ start; scalar_t__ pending; scalar_t__ prefix_pending; scalar_t__ prefixlen; size_t randlen; int * randptr; int obuf; TYPE_1__* cluster_node; scalar_t__ staglen; TYPE_4__* context; } ;
struct TYPE_9__ {char* ip; int port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_7__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char*,char*,...) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,void**) ;
 int FUNC_10 (int ,scalar_t__,int) ;
 int FUNC_11 (int) ;
 int VAR_3 ;
 int FUNC_12 (char*,char*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 () ;

__attribute__((used)) static void FUNC_15(aeEventLoop *VAR_4, int VAR_5, void *VAR_6, int VAR_7) {
    client VAR_8 = VAR_6;
    void *VAR_9 = ((void*)0);
    FUNC_0(*VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_7);




    if (VAR_8->latency < 0) VAR_8->latency = FUNC_14()-(VAR_8->start);

    if (FUNC_8(VAR_8->context) != VAR_0) {
        FUNC_5(VAR_3,"Error: %s\n",VAR_8->context->errstr);
        FUNC_3(1);
    } else {
        while(VAR_8->pending) {
            if (FUNC_9(VAR_8->context,&VAR_9) != VAR_0) {
                FUNC_5(VAR_3,"Error: %s\n",VAR_8->context->errstr);
                FUNC_3(1);
            }
            if (VAR_9 != ((void*)0)) {
                if (VAR_9 == (void*)VAR_1) {
                    FUNC_5(VAR_3,"Unexpected error reply, exiting...\n");
                    FUNC_3(1);
                }
                redisReply *VAR_10 = VAR_9;
                int VAR_11 = (VAR_10->type == VAR_1);

                if (VAR_11 && VAR_2.showerrors) {

                    static time_t VAR_12 = 0;
                    time_t VAR_13 = FUNC_13(((void*)0));
                    if (VAR_12 != VAR_13) {
                        VAR_12 = VAR_13;
                        if (VAR_8->cluster_node) {
                            FUNC_7("Error from server %s:%d: %s\n",
                                   VAR_8->cluster_node->ip,
                                   VAR_8->cluster_node->port,
                                   VAR_10->str);
                        } else FUNC_7("Error from server: %s\n", VAR_10->str);
                    }
                }




                if (VAR_11 && VAR_8->cluster_node && VAR_8->staglen) {
                    int VAR_14 = 0, VAR_15 = 0;
                    if (!FUNC_12(VAR_10->str,"MOVED",5) || !FUNC_12(VAR_10->str,"ASK",3))
                        VAR_14 = 1;
                    else if (!FUNC_12(VAR_10->str,"CLUSTERDOWN",11)) {



                        VAR_14 = 1;
                        VAR_15 = 1;
                        FUNC_7("Error from server %s:%d: %s\n",
                               VAR_8->cluster_node->ip,
                               VAR_8->cluster_node->port,
                               VAR_10->str);
                    }
                    if (VAR_15) FUNC_11(1);
                    if (VAR_14 && !FUNC_4(VAR_8))
                        FUNC_3(1);
                }

                FUNC_6(VAR_9);

                if (VAR_8->prefix_pending > 0) {
                    VAR_8->prefix_pending--;
                    VAR_8->pending--;

                    if (VAR_8->prefixlen > 0) {
                        size_t VAR_16;
                        FUNC_10(VAR_8->obuf, VAR_8->prefixlen, -1);


                        for (VAR_16 = 0; VAR_16 < VAR_8->randlen; VAR_16++)
                            VAR_8->randptr[VAR_16] -= VAR_8->prefixlen;
                        VAR_8->prefixlen = 0;
                    }
                    continue;
                }
                int VAR_17 = 0;
                FUNC_1(VAR_2.requests_finished, VAR_17, 1);
                if (VAR_17 < VAR_2.requests)
                    VAR_2.latency[VAR_17] = VAR_8->latency;
                VAR_8->pending--;
                if (VAR_8->pending == 0) {
                    FUNC_2(VAR_8);
                    break;
                }
            } else {
                break;
            }
        }
    }
}
