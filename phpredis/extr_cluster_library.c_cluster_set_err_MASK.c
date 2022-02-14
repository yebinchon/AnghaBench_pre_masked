
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clusterdown; int * err; } ;
typedef TYPE_1__ redisCluster ;


 int FUNC_0 (char*,char*,int) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(redisCluster *VAR_0, char *VAR_1, int VAR_2)
{

    if (VAR_0->err != ((void*)0)) {
        FUNC_2(VAR_0->err);
        VAR_0->err = ((void*)0);
    }
    if (VAR_1 != ((void*)0) && VAR_2 > 0) {
        VAR_0->err = FUNC_1(VAR_1, VAR_2, 0);
        if (VAR_2 >= sizeof("CLUSTERDOWN") - 1 &&
            !FUNC_0(VAR_1, "CLUSTERDOWN", sizeof("CLUSTERDOWN") - 1)
        ) {
            VAR_0->clusterdown = 1;
        }
    }
}
