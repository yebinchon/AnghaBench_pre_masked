
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
struct TYPE_5__ {int stream; } ;
typedef TYPE_1__ RedisSock ;
typedef int REDIS_REPLY_TYPE ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(RedisSock *VAR_0, char *VAR_1, int VAR_2,
                               REDIS_REPLY_TYPE VAR_3)
{
    char VAR_4[1024];


    if (!FUNC_0(VAR_0,VAR_1,VAR_2) ||
        !FUNC_1(VAR_0, VAR_3) ||
        !FUNC_2(VAR_0->stream, VAR_4, sizeof(VAR_4))) return -1;


    return 0;
}
