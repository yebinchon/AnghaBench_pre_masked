
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int integer; } ;
typedef TYPE_1__ redisReply ;
typedef int clusterManagerNode ;


 TYPE_1__* FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static signed int FUNC_3(clusterManagerNode *VAR_1,
                                                int VAR_2)
{
    redisReply *VAR_3 = FUNC_0(VAR_1,
        "CLUSTER COUNTKEYSINSLOT %d", VAR_2);
    int VAR_4 = -1;
    int VAR_5 = FUNC_1(VAR_1, VAR_3, ((void*)0));
    if (VAR_5 && VAR_3->type == VAR_0) VAR_4 = VAR_3->integer;
    if (VAR_3) FUNC_2(VAR_3);
    return VAR_4;
}
