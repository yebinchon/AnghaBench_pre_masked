
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int len; int str; } ;
typedef TYPE_1__ redisReply ;
typedef int clusterManagerNode ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(clusterManagerNode *VAR_1,
                                         redisReply *VAR_2, char **VAR_3)
{
    int VAR_4 = 0;
    if (!VAR_2 || (VAR_4 = (VAR_2->type == VAR_0))) {
        if (VAR_4) {
            if (VAR_3 != ((void*)0)) {
                *VAR_3 = FUNC_2((VAR_2->len + 1) * sizeof(char));
                FUNC_1(*VAR_3, VAR_2->str);
            } else FUNC_0(VAR_1, VAR_2->str);
        }
        return 0;
    }
    return 1;
}
