
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int len; int str; } ;
typedef TYPE_1__ redisReply ;
typedef int clusterManagerNode ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static redisReply *FUNC_4(clusterManagerNode *VAR_1,
                                                  char **VAR_2)
{
    redisReply *VAR_3 = FUNC_0(VAR_1, "INFO");
    if (VAR_2 != ((void*)0)) *VAR_2 = ((void*)0);
    if (VAR_3 == ((void*)0)) return ((void*)0);
    if (VAR_3->type == VAR_0) {
        if (VAR_2 != ((void*)0)) {
            *VAR_2 = FUNC_3((VAR_3->len + 1) * sizeof(char));
            FUNC_2(*VAR_2, VAR_3->str);
        }
        FUNC_1(VAR_3);
        return ((void*)0);
    }
    return VAR_3;
}
