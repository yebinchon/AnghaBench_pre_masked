
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef void* zend_bool ;
struct TYPE_10__ {int count; double connect_timeout; double read_timeout; struct TYPE_10__* hosts; int * continuum; int * algorithm; int z_dist; int z_fun; struct TYPE_10__* prev; struct TYPE_10__* redis; void* pconnect; scalar_t__ auto_rehash; void* index; int * z_multi_exec; } ;
typedef TYPE_1__ RedisArray ;
typedef int HashTable ;


 int FUNC_0 (int *,int *,int,int ) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*,int *,int *,long,void*) ;
 int * FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__) ;
 int FUNC_10 (TYPE_1__*) ;

RedisArray *
FUNC_11(HashTable *VAR_0, zval *VAR_1, zval *VAR_2, HashTable *VAR_3, zend_bool VAR_4, zend_bool VAR_5, long VAR_6, zend_bool VAR_7, double VAR_8, double VAR_9, zend_bool VAR_10, zend_string *VAR_11, zend_string *VAR_12)
{
    int VAR_13, VAR_14;
    RedisArray *VAR_15;

    if (!VAR_0 || (VAR_14 = FUNC_7(VAR_0)) == 0) return ((void*)0);


    VAR_15 = FUNC_3(sizeof(RedisArray));
    VAR_15->hosts = FUNC_1(VAR_14, sizeof(*VAR_15->hosts));
    VAR_15->redis = FUNC_1(VAR_14, sizeof(*VAR_15->redis));
    VAR_15->count = 0;
    VAR_15->z_multi_exec = ((void*)0);
    VAR_15->index = VAR_4;
    VAR_15->auto_rehash = 0;
    VAR_15->pconnect = VAR_5;
    VAR_15->connect_timeout = VAR_8;
    VAR_15->read_timeout = VAR_9;
    VAR_15->continuum = ((void*)0);
    VAR_15->algorithm = ((void*)0);

    if (FUNC_5(VAR_15, VAR_0, VAR_12, VAR_6, VAR_7) == ((void*)0) || !VAR_15->count) {
        for (VAR_13 = 0; VAR_13 < VAR_15->count; ++VAR_13) {
            FUNC_10(&VAR_15->redis[VAR_13]);
            FUNC_9(VAR_15->hosts[VAR_13]);
        }
        FUNC_2(VAR_15->redis);
        FUNC_2(VAR_15->hosts);
        FUNC_2(VAR_15);
        return ((void*)0);
    }
    VAR_15->prev = VAR_3 ? FUNC_11(VAR_3, VAR_1, VAR_2, ((void*)0), VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12) : ((void*)0);


    FUNC_4(VAR_15);


    FUNC_0(&VAR_15->z_fun, VAR_1, 1, 0);
    FUNC_0(&VAR_15->z_dist, VAR_2, 1, 0);
    if (VAR_11) VAR_15->algorithm = FUNC_8(VAR_11);


    if (VAR_10) {
        VAR_15->continuum = FUNC_6(VAR_15->hosts, VAR_15->count);
    }

    return VAR_15;
}
