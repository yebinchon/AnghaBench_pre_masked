
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double timeout; double read_timeout; int persistent; long waitms; int nodes; int auth; } ;
typedef TYPE_1__ redisCluster ;
typedef int redisCachedCluster ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (double,double,int *) ;
 int FUNC_6 (char*,size_t,int ) ;

__attribute__((used)) static void FUNC_7(redisCluster *VAR_1, HashTable *VAR_2, double VAR_3,
                               double VAR_4, int VAR_5, char *VAR_6,
                               size_t VAR_7)
{
    redisCachedCluster *VAR_8;

    FUNC_5(VAR_3, VAR_4, VAR_2);

    if (VAR_6 && VAR_7 > 0) {
        VAR_1->auth = FUNC_6(VAR_6, VAR_7, 0);
    }

    VAR_1->timeout = VAR_3;
    VAR_1->read_timeout = VAR_4;
    VAR_1->persistent = VAR_5;



    VAR_1->waitms = (long)(VAR_3 * 1000);


    if ((VAR_8 = FUNC_0(VAR_2))) {
        FUNC_2(VAR_1, VAR_8);
    } else if (FUNC_3(VAR_1, VAR_2) == VAR_0 &&
               FUNC_4(VAR_1) == VAR_0)
    {
        FUNC_1(VAR_2, VAR_1->nodes);
    }
}
