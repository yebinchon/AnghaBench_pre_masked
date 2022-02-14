
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int seeds; scalar_t__ auth; int persistent; int read_timeout; int timeout; } ;
typedef TYPE_1__ redisCluster ;
typedef int key ;
struct TYPE_7__ {int port; int host; int auth; } ;
typedef TYPE_2__ RedisSock ;
typedef int HashTable ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int ** FUNC_5 (int *,int*) ;
 int FUNC_6 (int **) ;
 TYPE_2__* FUNC_7 (char*,int,unsigned short,int ,int ,int ,int *,int ) ;
 int FUNC_8 (char*,int,char*,char*,int) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int,TYPE_2__*) ;
 int FUNC_12 (scalar_t__) ;

int
FUNC_13(redisCluster *VAR_3, HashTable *VAR_4) {
    RedisSock *VAR_5;
    char *VAR_6, *VAR_7, VAR_8[1024];
    int VAR_9, VAR_10, VAR_11;
    zval **VAR_12, *VAR_13;


    VAR_12 = FUNC_5(VAR_4, &VAR_10);


    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        if ((VAR_13 = VAR_12[VAR_11]) == ((void*)0)) continue;

        FUNC_1(VAR_13);


        if (FUNC_3(VAR_13) != VAR_1) continue;


        VAR_6 = FUNC_2(VAR_13);



        if ((VAR_7 = FUNC_9(VAR_6, ':')) == ((void*)0))
            continue;


        VAR_5 = FUNC_7(VAR_6, VAR_7-VAR_6,
            (unsigned short)FUNC_4(VAR_7+1), VAR_3->timeout,
            VAR_3->read_timeout, VAR_3->persistent, ((void*)0), 0);


        if (VAR_3->auth) {
            VAR_5->auth = FUNC_12(VAR_3->auth);
        }


        VAR_9 = FUNC_8(VAR_8, sizeof(VAR_8), "%s:%u", FUNC_0(VAR_5->host),
            VAR_5->port);


        FUNC_11(VAR_3->seeds, VAR_8, VAR_9, VAR_5);
    }

    FUNC_6(VAR_12);


    return FUNC_10(VAR_3->seeds) > 0 ? VAR_2 : VAR_0;
}
