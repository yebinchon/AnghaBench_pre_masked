
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timeval {int tv_sec; int member_0; } ;
struct event_base {int dummy; } ;
struct TYPE_10__ {struct timeval* timeout; int member_0; } ;
typedef TYPE_1__ redisOptions ;
struct TYPE_11__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_2__ redisAsyncContext ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct event_base*) ;
 struct event_base* FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,char*,char*,...) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,struct event_base*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;

int FUNC_11 (int VAR_5, char **VAR_6) {
    FUNC_9(VAR_0, VAR_1);
    struct event_base *VAR_7 = FUNC_2();
    redisOptions VAR_8 = {0};
    FUNC_0(&VAR_8, "127.0.0.1", 6379);
    struct timeval VAR_9 = {0};
    VAR_9.tv_sec = 1;
    VAR_8.timeout = &VAR_9;


    redisAsyncContext *VAR_10 = FUNC_5(&VAR_8);
    if (VAR_10->err) {

        FUNC_3("Error: %s\n", VAR_10->errstr);
        return 1;
    }

    FUNC_8(VAR_10,VAR_7);
    FUNC_6(VAR_10,VAR_2);
    FUNC_7(VAR_10,VAR_3);
    FUNC_4(VAR_10, ((void*)0), ((void*)0), "SET key %b", VAR_6[VAR_5-1], FUNC_10(VAR_6[VAR_5-1]));
    FUNC_4(VAR_10, VAR_4, (char*)"end-1", "GET key");
    FUNC_1(VAR_7);
    return 0;
}
