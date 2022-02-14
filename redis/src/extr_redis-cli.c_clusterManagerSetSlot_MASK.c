
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; int len; int str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_10__ {scalar_t__ name; } ;
typedef TYPE_2__ clusterManagerNode ;


 TYPE_1__* FUNC_0 (TYPE_2__*,char*,int,char const*,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(clusterManagerNode *VAR_1,
                                 clusterManagerNode *VAR_2,
                                 int VAR_3, const char *VAR_4, char **VAR_5) {
    redisReply *VAR_6 = FUNC_0(VAR_1, "CLUSTER "
                                                "SETSLOT %d %s %s",
                                                VAR_3, VAR_4,
                                                (char *) VAR_2->name);
    if (VAR_5 != ((void*)0)) *VAR_5 = ((void*)0);
    if (!VAR_6) return 0;
    int VAR_7 = 1;
    if (VAR_6->type == VAR_0) {
        VAR_7 = 0;
        if (VAR_5 != ((void*)0)) {
            *VAR_5 = FUNC_4((VAR_6->len + 1) * sizeof(char));
            FUNC_3(*VAR_5, VAR_6->str);
        } else FUNC_1(VAR_1, VAR_6->str);
        goto cleanup;
    }
cleanup:
    FUNC_2(VAR_6);
    return VAR_7;
}
