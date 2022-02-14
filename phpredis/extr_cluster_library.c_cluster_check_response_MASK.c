
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {long long reply_len; int line_reply; TYPE_2__* cmd_sock; int redirections; } ;
typedef TYPE_1__ redisCluster ;
typedef int inbuf ;
struct TYPE_10__ {int stream; } ;
typedef int REDIS_REPLY_TYPE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ,int,size_t*) ;
 scalar_t__ FUNC_10 (char*) ;
 long long FUNC_11 (int ,int *,int) ;

__attribute__((used)) static int FUNC_12(redisCluster *VAR_3, REDIS_REPLY_TYPE *VAR_4
                                 )
{
    size_t VAR_5;


    FUNC_0(VAR_3);
    FUNC_1(VAR_3);

    if (-1 == FUNC_8(VAR_3->cmd_sock, 1) ||
       VAR_0 == (*VAR_4 = FUNC_6(VAR_3->cmd_sock->stream)))
    {
        return -1;
    }


    if (*VAR_4 == VAR_1) {
        char VAR_6[4096];
        int VAR_7;


        if (!FUNC_7(VAR_3->cmd_sock->stream, VAR_6, sizeof(VAR_6))) {
            return -1;
        }


        if ((VAR_7 = FUNC_3(VAR_6)) || FUNC_2(VAR_6)) {

            VAR_3->redirections++;

            if (FUNC_5(VAR_3,VAR_6,VAR_7) < 0) {
                return -1;
            }


            return 1;
        } else {

            FUNC_4(VAR_3, VAR_6, FUNC_10(VAR_6)-2);
            return 0;
        }
    }


    if (FUNC_9(VAR_3->cmd_sock,VAR_3->line_reply,sizeof(VAR_3->line_reply),
                       &VAR_5) < 0)
    {
        return -1;
    }


    if (*VAR_4 != VAR_2) {
        VAR_3->reply_len = FUNC_11(VAR_3->line_reply, ((void*)0), 10);
    } else {
        VAR_3->reply_len = (long long)VAR_5;
    }


    FUNC_0(VAR_3);
    return 0;
}
