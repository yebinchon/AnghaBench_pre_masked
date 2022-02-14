
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;
typedef scalar_t__ REDIS_REPLY_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int *) ;
 int FUNC_1 (int *,char*,long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int *,int,int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*,long*) ;
 char* FUNC_8 (int *,int*) ;
 char* FUNC_9 (int *,size_t) ;

int
FUNC_10(RedisSock *VAR_4, int VAR_5, zval *VAR_6) {
    zval VAR_7;
    REDIS_REPLY_TYPE VAR_8;
    char *VAR_9 = ((void*)0);
    int VAR_10, VAR_11, VAR_12;
    long VAR_13;

    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {

        if (FUNC_7(VAR_4, &VAR_8, &VAR_13) < 0 ||
            (VAR_8 != VAR_1 && VAR_8 != VAR_2) ||
            (VAR_8 == VAR_1 && VAR_13 <= 0)) return -1;


        if (VAR_8 == VAR_1) {
            if ((VAR_9 = FUNC_9(VAR_4, (size_t)VAR_13)) == ((void*)0))
                return -1;

            FUNC_1(VAR_6, VAR_9, VAR_13);
            FUNC_4(VAR_9);
        } else {
            if ((VAR_13 != 2 || (VAR_9 = FUNC_8(VAR_4, &VAR_12)) == ((void*)0)) ||
                (FUNC_5(VAR_4, &VAR_11) < 0 || VAR_11 % 2 != 0))
            {
                if (VAR_9) FUNC_4(VAR_9);
                return -1;
            }

            FUNC_2(&VAR_7);

            FUNC_6(VAR_4, &VAR_7, VAR_11, VAR_3);
            FUNC_3(VAR_4, &VAR_7, VAR_0);
            FUNC_0(VAR_6, VAR_9, VAR_12, &VAR_7);
            FUNC_4(VAR_9);
        }
    }

    return 0;
}
