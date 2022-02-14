
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* flags; TYPE_3__* multi_head; } ;
typedef TYPE_2__ redisCluster ;
struct TYPE_11__ {struct TYPE_11__* next; int slot; } ;
typedef TYPE_3__ clusterFoldItem ;
struct TYPE_12__ {scalar_t__ mode; scalar_t__ watching; } ;
struct TYPE_9__ {void* mode; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_7__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

int FUNC_3(redisCluster *VAR_2) {
    clusterFoldItem *VAR_3 = VAR_2->multi_head;


    while (VAR_3) {
        if (FUNC_0(VAR_2,VAR_3->slot)->mode == VAR_1) {
            if (FUNC_2(VAR_2, VAR_3->slot) < 0) {
                FUNC_1(VAR_2, 0);
                return -1;
            }
            FUNC_0(VAR_2,VAR_3->slot)->mode = VAR_0;
            FUNC_0(VAR_2,VAR_3->slot)->watching = 0;
        }
        VAR_3 = VAR_3->next;
    }


    VAR_2->flags->mode = VAR_0;


    return 0;
}
