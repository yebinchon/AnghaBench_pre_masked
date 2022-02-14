
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;
typedef int REDIS_REPLY_TYPE ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *,char*,int,long) ;
 int FUNC_1 (int *,char*,int,char*,long) ;
 int FUNC_2 (int *,char*,int,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,int*,long*) ;
 char* FUNC_7 (int *,long) ;
 int FUNC_8 (char**,int ,char*,long) ;
 int FUNC_9 (int *) ;

int
FUNC_10(RedisSock *VAR_2, zval *VAR_3, int VAR_4)
{
    zval VAR_5;
    int VAR_6, VAR_7;
    char *VAR_8 = ((void*)0), *VAR_9;
    REDIS_REPLY_TYPE VAR_10;
    long VAR_11;

    for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
        if (FUNC_6(VAR_2, &VAR_10, &VAR_11) < 0) {
            goto failure;
        }
        switch (VAR_10) {
        case 130:
            if ((VAR_9 = FUNC_7(VAR_2, VAR_11)) == ((void*)0)) {
                goto failure;
            } else if (VAR_8) {
                FUNC_1(VAR_3, VAR_8, VAR_7, VAR_9, VAR_11);
                FUNC_5(VAR_9);
                FUNC_5(VAR_8);
                VAR_8 = ((void*)0);
            } else {
                VAR_8 = VAR_9;
                VAR_7 = VAR_11;
            }
            break;
        case 129:
            if (VAR_8) {
                FUNC_0(VAR_3, VAR_8, VAR_7, VAR_11);
                FUNC_5(VAR_8);
                VAR_8 = ((void*)0);
            } else {
                VAR_7 = FUNC_8(&VAR_8, 0, "%ld", VAR_11);
            }
            break;
        case 128:
            FUNC_4(&VAR_5);
            if (FUNC_10(VAR_2, &VAR_5, VAR_11) != VAR_1) {
                FUNC_9(&VAR_5);
                goto failure;
            }
            if (VAR_8) {
                FUNC_2(VAR_3, VAR_8, VAR_7, &VAR_5);
                FUNC_5(VAR_8);
                VAR_8 = ((void*)0);
            } else {
                FUNC_3(VAR_3, &VAR_5);
            }
            break;
        default:
            goto failure;
        }
    }

    return VAR_1;

failure:
    if (VAR_8) FUNC_5(VAR_8);
    return VAR_0;
}
