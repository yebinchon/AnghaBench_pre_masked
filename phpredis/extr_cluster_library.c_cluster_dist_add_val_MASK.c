
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ redisCluster ;
struct TYPE_6__ {char* val; size_t val_len; int val_free; } ;
typedef TYPE_2__ clusterKeyVal ;


 int FUNC_0 (int ,int *,char**,size_t*) ;

void FUNC_1(redisCluster *VAR_0, clusterKeyVal *VAR_1, zval *VAR_2
                        )
{
    char *VAR_3;
    size_t VAR_4;
    int VAR_5;


    VAR_5 = FUNC_0(VAR_0->flags, VAR_2, &VAR_3, &VAR_4);


    VAR_1->val = VAR_3;
    VAR_1->val_len = VAR_4;
    VAR_1->val_free = VAR_5;
}
