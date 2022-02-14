
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_3__ {int ** master; int flags; } ;
typedef TYPE_1__ redisCluster ;
typedef int clusterKeyVal ;
typedef int clusterDistList ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*,size_t,int) ;
 int * FUNC_1 () ;
 short FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char**,size_t*) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int *) ;

int FUNC_7(redisCluster *VAR_2, HashTable *VAR_3, char *VAR_4,
                          size_t VAR_5, clusterKeyVal **VAR_6)
{
    int VAR_7;
    short VAR_8;
    clusterDistList *VAR_9;
    clusterKeyVal *VAR_10;


    VAR_7 = FUNC_4(VAR_2->flags, &VAR_4, &VAR_5);
    VAR_8 = FUNC_2(VAR_4, VAR_5);


    if (VAR_2->master[VAR_8] == ((void*)0)) {
        if (VAR_7) FUNC_3(VAR_4);
        return VAR_0;
    }


    if ((VAR_9 = FUNC_5(VAR_3, (zend_ulong)VAR_8)) == ((void*)0)) {
        VAR_9 = FUNC_1();
        FUNC_6(VAR_3, (zend_ulong)VAR_8, VAR_9);
    }


    VAR_10 = FUNC_0(VAR_9, VAR_4, VAR_5, VAR_7);


    if (VAR_6) *VAR_6 = VAR_10;

    return VAR_1;
}
