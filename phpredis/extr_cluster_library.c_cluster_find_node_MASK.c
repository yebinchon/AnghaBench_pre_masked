
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int redisClusterNode ;
struct TYPE_3__ {int nodes; } ;
typedef TYPE_1__ redisCluster ;
typedef int key ;


 int FUNC_0 (char*,int,char*,char const*,unsigned short) ;
 int * FUNC_1 (int ,char*,int) ;

__attribute__((used)) static redisClusterNode *FUNC_2(redisCluster *VAR_0, const char *VAR_1,
                                           unsigned short VAR_2)
{
    int VAR_3;
    char VAR_4[1024];

    VAR_3 = FUNC_0(VAR_4,sizeof(VAR_4),"%s:%d", VAR_1, VAR_2);

    return FUNC_1(VAR_0->nodes, VAR_4, VAR_3);
}
