
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisSock ;
typedef scalar_t__ REDIS_REPLY_TYPE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,long*) ;
 scalar_t__ FUNC_2 (int *,char*,size_t,size_t*) ;
 int FUNC_3 (int *,char*,size_t) ;

int
FUNC_4(RedisSock *VAR_2, char *VAR_3, size_t VAR_4,
                            size_t *VAR_5, int VAR_6)
{
    REDIS_REPLY_TYPE VAR_7;
    long VAR_8;

    if (FUNC_1(VAR_2, &VAR_7, &VAR_8) < 0 ||
        (VAR_7 != VAR_1 && VAR_7 != VAR_0))
    {
        return -1;
    }

    if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5) < 0) {
        return -1;
    }

    if (VAR_6 && VAR_7 == VAR_0) {
        if (FUNC_0(VAR_2)) {
            FUNC_3(VAR_2, VAR_3, *VAR_5);
        }
    }

    return VAR_7 == VAR_1 ? 0 : -1;
}
