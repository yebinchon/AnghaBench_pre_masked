
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int inbuf ;
struct TYPE_4__ {int stream; } ;
typedef TYPE_1__ RedisSock ;
typedef scalar_t__ REDIS_REPLY_TYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

int
FUNC_5(RedisSock *VAR_4, REDIS_REPLY_TYPE *VAR_5,
                      long *VAR_6)
{

    if(-1 == FUNC_4(VAR_4, 0)) {

        *VAR_5 = VAR_0;
        return -1;
    }


    if((*VAR_5 = FUNC_2(VAR_4->stream)) == VAR_0) {
        FUNC_0( "socket error on read socket", 0);
        return -1;
    }



    if(*VAR_5 == VAR_2 || *VAR_5 == VAR_1 ||
       *VAR_5 == VAR_3)
    {

        char VAR_7[255];


        if (FUNC_3(VAR_4->stream, VAR_7, sizeof(VAR_7)) == ((void*)0)) {
            return -1;
        }


        *VAR_6 = FUNC_1(VAR_7);
    }


    return 0;
}
