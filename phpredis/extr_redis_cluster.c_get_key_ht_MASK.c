
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ redisCluster ;
struct TYPE_6__ {int key_len; int key; int slot; int key_free; } ;
typedef TYPE_2__ clusterKeyValHT ;
typedef int HashTable ;
typedef int HashPosition ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int * FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(redisCluster *VAR_0, HashTable *VAR_1, HashPosition *VAR_2,
                      clusterKeyValHT *VAR_3)
{
    zval *VAR_4;

    if ((VAR_4 = FUNC_6(VAR_1, VAR_2)) == ((void*)0)) {

        FUNC_0("Internal Zend HashTable error", 0);
        return -1;
    }


    FUNC_4(VAR_4);

    VAR_3->key = FUNC_2(VAR_4);
    VAR_3->key_len = FUNC_1(VAR_4);
    VAR_3->key_free = FUNC_5(VAR_0->flags, &(VAR_3->key), &(VAR_3->key_len));


    VAR_3->slot = FUNC_3(VAR_3->key, VAR_3->key_len);


    return 0;
}
