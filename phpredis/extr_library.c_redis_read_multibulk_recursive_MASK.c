
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int RedisSock ;
typedef int REDIS_REPLY_TYPE ;


 int VAR_0 ;





 int FUNC_0 (int *,long) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int*,long*) ;
 int FUNC_4 (int *,long,int *) ;
 int FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int ,int ,char*) ;

int
FUNC_7(RedisSock *VAR_2, int VAR_3, int VAR_4,
                               zval *VAR_5)
{
    long VAR_6;
    REDIS_REPLY_TYPE VAR_7;
    zval VAR_8;


    while(VAR_3 > 0) {

        if(FUNC_3(VAR_2, &VAR_7, &VAR_6
                                ) < 0)
        {
            FUNC_6(VAR_1, 0,
                "protocol error, couldn't parse MULTI-BULK response\n");
            return VAR_0;
        }


        switch(VAR_7) {
            case 131:
            case 129:
                FUNC_5(VAR_2, VAR_7, VAR_4,
                                        &VAR_8);
                FUNC_1(VAR_5, &VAR_8);
                break;
            case 130:

                FUNC_0(VAR_5, VAR_6);
                break;
            case 132:

                FUNC_4(VAR_2, VAR_6, &VAR_8);
                FUNC_1(VAR_5, &VAR_8);
                break;
            case 128:

                FUNC_2(&VAR_8);
                FUNC_1(VAR_5, &VAR_8);
                FUNC_7(VAR_2, VAR_6, VAR_4,
                                               &VAR_8);
                break;
            default:

                break;
        }


        VAR_3--;
    }

    return 0;
}
