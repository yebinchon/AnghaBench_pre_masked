
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {short cmd_slot; scalar_t__ reply_type; TYPE_7__* cmd_sock; TYPE_1__* flags; } ;
typedef TYPE_2__ redisCluster ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_9__ {scalar_t__ mode; } ;
typedef scalar_t__ REDIS_REPLY_TYPE ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_7__* FUNC_1 (TYPE_2__*,short) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,short) ;
 int FUNC_4 (TYPE_2__*,char*,int,int) ;

int FUNC_5(redisCluster *VAR_2, short VAR_3, char *VAR_4,
                             int VAR_5, REDIS_REPLY_TYPE VAR_6)
{

    VAR_2->cmd_slot = VAR_3;
    VAR_2->cmd_sock = FUNC_1(VAR_2, VAR_3);



    if (VAR_2->flags->mode == VAR_0 && VAR_2->cmd_sock->mode != VAR_0) {
        if (FUNC_3(VAR_2, VAR_3) == -1) {
            FUNC_0("Unable to enter MULTI mode on requested slot", 0);
            return -1;
        }
    }


    if (FUNC_4(VAR_2, VAR_4, VAR_5, 1) == -1) {
        return -1;
    }


    if (FUNC_2(VAR_2, &VAR_2->reply_type) != 0 ||
       (VAR_6 != VAR_1 && VAR_6 != VAR_2->reply_type)) return -1;


    return 0;
}
