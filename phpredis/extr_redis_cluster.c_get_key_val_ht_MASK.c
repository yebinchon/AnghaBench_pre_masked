
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef int zend_string ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ redisCluster ;
struct TYPE_6__ {int val_len; int val; int val_free; int key_len; int key; int slot; int key_free; int kbuf; } ;
typedef TYPE_2__ clusterKeyValHT ;
typedef int HashTable ;
typedef int HashPosition ;


 int FUNC_0 (char*,int ) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *,int *,int *) ;
 int FUNC_6 (int ,int,char*,long) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int **,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_9(redisCluster *VAR_0, HashTable *VAR_1, HashPosition *VAR_2,
                          clusterKeyValHT *VAR_3)
{
    zval *VAR_4;
    zend_ulong VAR_5;



    zend_string *VAR_6;
    switch (FUNC_8(VAR_1, &VAR_6, &VAR_5, VAR_2)) {
        case 128:
            VAR_3->key_len = FUNC_1(VAR_6);
            VAR_3->key = FUNC_2(VAR_6);
            break;
        case 129:
            VAR_3->key_len = FUNC_6(VAR_3->kbuf,sizeof(VAR_3->kbuf),"%ld",(long)VAR_5);
            VAR_3->key = VAR_3->kbuf;
            break;
        default:
            FUNC_0("Internal Zend HashTable error", 0);
            return -1;
    }


    VAR_3->key_free = FUNC_4(VAR_0->flags, &(VAR_3->key), &(VAR_3->key_len));
    VAR_3->slot = FUNC_3(VAR_3->key, VAR_3->key_len);


    if ((VAR_4 = FUNC_7(VAR_1, VAR_2)) == ((void*)0)) {
        FUNC_0("Internal Zend HashTable error", 0);
        return -1;
    }


    VAR_3->val_free = FUNC_5(VAR_0->flags,VAR_4,&(VAR_3->val),&(VAR_3->val_len));


    return 0;
}
