
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ redisCluster ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 short FUNC_6 (TYPE_1__*,char const*,unsigned short) ;
 short FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,char*,...) ;
 int FUNC_10 (int ,char**,size_t*) ;
 int * FUNC_11 (int ,int) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;

__attribute__((used)) static short
FUNC_14(redisCluster *VAR_5, zval *VAR_6)
{
    size_t VAR_7;
    int VAR_8;
    zval *VAR_9, *VAR_10;
    short VAR_11;
    char *VAR_12;
    zend_string *VAR_13;



    if (FUNC_5(VAR_6) ==VAR_4 || FUNC_5(VAR_6) ==VAR_3 ||
       FUNC_5(VAR_6) ==VAR_2)
    {

        VAR_13 = FUNC_13(VAR_6);
        VAR_12 = FUNC_1(VAR_13);
        VAR_7 = FUNC_0(VAR_13);


        VAR_8 = FUNC_10(VAR_5->flags, &VAR_12, &VAR_7);
        VAR_11 = FUNC_7(VAR_12, VAR_7);
        FUNC_12(VAR_13);
        if (VAR_8) FUNC_8(VAR_12);
    } else if (FUNC_5(VAR_6) == VAR_1 &&
        (VAR_9 = FUNC_11(FUNC_2(VAR_6), 0)) != ((void*)0) &&
        (VAR_10 = FUNC_11(FUNC_2(VAR_6), 1)) != ((void*)0) &&
        FUNC_5(VAR_9) == VAR_4 && FUNC_5(VAR_10) == VAR_3
    ) {

        VAR_11 = FUNC_6(VAR_5,(const char *)FUNC_4(VAR_9),
            (unsigned short)FUNC_3(VAR_10));


        if (VAR_11 < 0) {
            FUNC_9(0, VAR_0, "Unknown node %s:%ld",
                FUNC_4(VAR_9), FUNC_3(VAR_10));
        }
    } else {
        FUNC_9(0, VAR_0,
            "Direted commands musty be passed a key or [host,port] array");
        return -1;
    }

    return VAR_11;
}
