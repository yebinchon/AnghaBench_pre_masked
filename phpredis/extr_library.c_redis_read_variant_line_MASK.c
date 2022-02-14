
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int inbuf ;
typedef int RedisSock ;
typedef scalar_t__ REDIS_REPLY_TYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int,size_t*) ;
 int FUNC_5 (int *,char*,size_t) ;

__attribute__((used)) static int
FUNC_6(RedisSock *VAR_1, REDIS_REPLY_TYPE VAR_2,
                        int VAR_3, zval *VAR_4)
{

    char VAR_5[4096];
    size_t VAR_6;


    if(FUNC_4(VAR_1, VAR_5, sizeof(VAR_5), &VAR_6) < 0) {
        return -1;
    }


    if(VAR_2 == VAR_0) {
        FUNC_5(VAR_1, VAR_5, VAR_6);
        FUNC_3(VAR_1);
        FUNC_0(VAR_4);
    } else if (VAR_3) {
        FUNC_1(VAR_4, VAR_5, VAR_6);
    } else {
        FUNC_2(VAR_4);
    }

    return 0;
}
