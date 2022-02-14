
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {short cmd_slot; scalar_t__ redir_type; long waitms; void* cmd_sock; scalar_t__ clusterdown; TYPE_1__* flags; int reply_type; } ;
typedef TYPE_2__ redisCluster ;
struct TYPE_13__ {scalar_t__ mode; } ;
struct TYPE_12__ {scalar_t__ mode; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_10__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,short) ;
 void* FUNC_3 (TYPE_2__*,short) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,short) ;
 int FUNC_6 (TYPE_2__*,char const*,int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 long FUNC_8 () ;
 int VAR_3 ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (int ,int ,char*,short) ;

short FUNC_11(redisCluster *VAR_4, short VAR_5, const char *VAR_6,
                                         int VAR_7)
{
    int VAR_8, VAR_9 = 0;
    long VAR_10;

    if (!FUNC_2(VAR_4, VAR_5)) {
        FUNC_10(VAR_3, 0,
            "The slot %d is not covered by any node in this cluster", VAR_5);
        return -1;
    }




    VAR_4->cmd_slot = VAR_5;
    VAR_4->cmd_sock = FUNC_3(VAR_4, VAR_5);


    VAR_10 = FUNC_8();




    do {

        if (VAR_4->flags->mode == VAR_0 && FUNC_1(VAR_4)->mode != VAR_0) {

            if (FUNC_5(VAR_4, VAR_5) == -1) {
                FUNC_0("Unable to enter MULTI mode on requested slot", 0);
                return -1;
            }
        }



        if (FUNC_6(VAR_4, VAR_6, VAR_7, 0) == -1) {

            FUNC_0("Can't communicate with any node in the cluster", 0);
            return -1;
        }


        VAR_8 = FUNC_4(VAR_4, &VAR_4->reply_type);
        if (VAR_8 <= 0) {
            break;
        }


        if (VAR_8 == 1) {

           if (VAR_4->flags->mode == VAR_0) {
               FUNC_0("Can't process MULTI sequence when cluster is resharding", 0);
               return -1;
           }


           if (VAR_4->redir_type == VAR_1) {
               FUNC_7(VAR_4);
               VAR_4->cmd_sock = FUNC_3(VAR_4, VAR_5);
           }
        }


        VAR_9 = VAR_4->waitms ? FUNC_8() - VAR_10 >= VAR_4->waitms : 0;
    } while (!VAR_4->clusterdown && !VAR_9);


    if (VAR_4->clusterdown) {
        FUNC_0("The Redis Cluster is down (CLUSTERDOWN)", 0);
        return -1;
    } else if (VAR_9 || VAR_8 == -1) {

        FUNC_9(VAR_4->cmd_sock, 1);

        if (VAR_9) {
            FUNC_0(
                "Timed out attempting to find data in the correct node!", 0);
        } else {
            FUNC_0(
                "Error processing response from Redis node!", 0);
        }

        return -1;
    }


    VAR_4->redir_type = VAR_2;


    return 0;
}
