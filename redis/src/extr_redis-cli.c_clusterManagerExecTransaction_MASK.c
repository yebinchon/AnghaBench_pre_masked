
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; size_t elements; struct TYPE_7__** element; } ;
typedef TYPE_1__ redisReply ;
typedef int (* clusterManagerOnReplyError ) (TYPE_1__*,int *,size_t) ;
typedef int clusterManagerNode ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,char**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(clusterManagerNode *VAR_1,
                                         clusterManagerOnReplyError VAR_2)
{
    redisReply *VAR_3 = FUNC_0(VAR_1, "EXEC");
    int VAR_4 = FUNC_2(VAR_1, VAR_3, ((void*)0));
    if (VAR_4) {
        if (VAR_3->type != VAR_0) {
            VAR_4 = 0;
            goto cleanup;
        }
        size_t VAR_5;
        for (VAR_5 = 0; VAR_5 < VAR_3->elements; VAR_5++) {
            redisReply *VAR_6 = VAR_3->element[VAR_5];
            char *VAR_7 = ((void*)0);
            VAR_4 = FUNC_2(VAR_1, VAR_6, &VAR_7);
            if (!VAR_4 && VAR_2) VAR_4 = VAR_2(VAR_6, VAR_1, VAR_5);
            if (VAR_7) {
                if (!VAR_4)
                    FUNC_1(VAR_1, VAR_7);
                FUNC_4(VAR_7);
            }
            if (!VAR_4) break;
        }
    }
cleanup:
    if (VAR_3) FUNC_3(VAR_3);
    return VAR_4;
}
