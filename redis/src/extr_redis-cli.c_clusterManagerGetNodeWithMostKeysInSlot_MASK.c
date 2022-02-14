
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int integer; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_13__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_14__ {int flags; scalar_t__ replicate; } ;
typedef TYPE_3__ clusterManagerNode ;


 TYPE_1__* FUNC_0 (TYPE_3__*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,char**) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,char**) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static clusterManagerNode * FUNC_6(list *VAR_1,
                                                                    int VAR_2,
                                                                    char **VAR_3)
{
    clusterManagerNode *VAR_4 = ((void*)0);
    int VAR_5 = 0;
    listIter VAR_6;
    listNode *VAR_7;
    FUNC_5(VAR_1, &VAR_6);
    if (VAR_3) *VAR_3 = ((void*)0);
    while ((VAR_7 = FUNC_4(&VAR_6)) != ((void*)0)) {
        clusterManagerNode *VAR_8 = VAR_7->value;
        if (VAR_8->flags & VAR_0 || VAR_8->replicate)
            continue;
        redisReply *VAR_9 =
            FUNC_0(VAR_8, "CLUSTER COUNTKEYSINSLOT %d", VAR_2);
        int VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_3);
        if (VAR_10) {
            if (VAR_9->integer > VAR_5 || VAR_4 == ((void*)0)) {
                VAR_5 = VAR_9->integer;
                VAR_4 = VAR_8;
            }
        }
        if (VAR_9 != ((void*)0)) FUNC_3(VAR_9);

        if (!VAR_10) {
            if (VAR_3 != ((void*)0) && *VAR_3 != ((void*)0))
                FUNC_1(VAR_8, VAR_3);
            VAR_4 = ((void*)0);
            break;
        }
    }
    return VAR_4;
}
