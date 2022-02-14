
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct timeval {int member_0; int member_1; } ;
struct TYPE_14__ {char* str; scalar_t__ type; unsigned int elements; TYPE_1__** element; int integer; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_15__ {struct timeval* timeout; int member_0; } ;
typedef TYPE_3__ redisOptions ;
struct TYPE_16__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_4__ redisContext ;
struct TYPE_13__ {char* str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,char const*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,...) ;
 TYPE_2__* FUNC_5 (TYPE_4__*,char*,...) ;
 TYPE_4__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,char const*,char const*,char const*,char*) ;
 int FUNC_9 (char*,int,char*,unsigned int) ;

int FUNC_10(int VAR_2, char **VAR_3) {
    unsigned int VAR_4;
    redisContext *VAR_5;
    redisReply *VAR_6;
    if (VAR_2 < 4) {
        FUNC_4("Usage: %s <host> <port> <cert> <key> [ca]\n", VAR_3[0]);
        FUNC_2(1);
    }
    const char *VAR_7 = (VAR_2 > 1) ? VAR_3[1] : "127.0.0.1";
    int VAR_8 = FUNC_1(VAR_3[2]);
    const char *VAR_9 = VAR_3[3];
    const char *VAR_10 = VAR_3[4];
    const char *VAR_11 = VAR_2 > 4 ? VAR_3[5] : ((void*)0);

    struct timeval VAR_12 = { 1, 500000 };
    redisOptions VAR_13 = {0};
    FUNC_0(&VAR_13, VAR_7, VAR_8);
    VAR_13.timeout = &VAR_12;
    VAR_5 = FUNC_6(&VAR_13);

    if (VAR_5 == ((void*)0) || VAR_5->err) {
        if (VAR_5) {
            FUNC_4("Connection error: %s\n", VAR_5->errstr);
            FUNC_7(VAR_5);
        } else {
            FUNC_4("Connection error: can't allocate redis context\n");
        }
        FUNC_2(1);
    }

    if (FUNC_8(VAR_5, VAR_11, VAR_9, VAR_10, "sni") != VAR_0) {
        FUNC_4("Couldn't initialize SSL!\n");
        FUNC_4("Error: %s\n", VAR_5->errstr);
        FUNC_7(VAR_5);
        FUNC_2(1);
    }


    VAR_6 = FUNC_5(VAR_5,"PING");
    FUNC_4("PING: %s\n", VAR_6->str);
    FUNC_3(VAR_6);


    VAR_6 = FUNC_5(VAR_5,"SET %s %s", "foo", "hello world");
    FUNC_4("SET: %s\n", VAR_6->str);
    FUNC_3(VAR_6);


    VAR_6 = FUNC_5(VAR_5,"SET %b %b", "bar", (size_t) 3, "hello", (size_t) 5);
    FUNC_4("SET (binary API): %s\n", VAR_6->str);
    FUNC_3(VAR_6);


    VAR_6 = FUNC_5(VAR_5,"GET foo");
    FUNC_4("GET foo: %s\n", VAR_6->str);
    FUNC_3(VAR_6);

    VAR_6 = FUNC_5(VAR_5,"INCR counter");
    FUNC_4("INCR counter: %lld\n", VAR_6->integer);
    FUNC_3(VAR_6);

    VAR_6 = FUNC_5(VAR_5,"INCR counter");
    FUNC_4("INCR counter: %lld\n", VAR_6->integer);
    FUNC_3(VAR_6);


    VAR_6 = FUNC_5(VAR_5,"DEL mylist");
    FUNC_3(VAR_6);
    for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        char VAR_14[64];

        FUNC_9(VAR_14,64,"%u",VAR_4);
        VAR_6 = FUNC_5(VAR_5,"LPUSH mylist element-%s", VAR_14);
        FUNC_3(VAR_6);
    }


    VAR_6 = FUNC_5(VAR_5,"LRANGE mylist 0 -1");
    if (VAR_6->type == VAR_1) {
        for (VAR_4 = 0; VAR_4 < VAR_6->elements; VAR_4++) {
            FUNC_4("%u) %s\n", VAR_4, VAR_6->element[VAR_4]->str);
        }
    }
    FUNC_3(VAR_6);


    FUNC_7(VAR_5);

    return 0;
}
