
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (int *,char*,char*,...) ;
 char* FUNC_3 (int *,size_t*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;

int FUNC_6(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4) {
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);






    FUNC_2(VAR_2, "FLUSHDB", "");

    FUNC_2(VAR_2, "SET", "cc", "foo", "bar");
    FUNC_2(VAR_2, "SET", "cc", "foo", "baz");
    FUNC_2(VAR_2, "SADD", "cc", "bar", "x");
    FUNC_2(VAR_2, "SADD", "cc", "bar", "y");

    FUNC_2(VAR_2, "HSET", "ccc", "baz", "x", "y");

    FUNC_2(VAR_2, "LPUSH", "cc", "l", "y");
    FUNC_2(VAR_2, "LPUSH", "cc", "l", "y");


    FUNC_2(VAR_2, "GET", "c", "nosuchkey");
    FUNC_2(VAR_2, "SMEMBERS", "c", "nosuchkey");

    size_t VAR_5;
    const char *VAR_6;
    RedisModuleCallReply *VAR_7 = FUNC_2(VAR_2, "HGET", "cc", "notifications", "foo");
    if (VAR_7 == ((void*)0) || FUNC_4(VAR_7) != VAR_1) {
        { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Wrong or no reply for foo\""); goto err; };
    } else {
        VAR_6 = FUNC_3(VAR_7, &VAR_5);
        if (VAR_5 != 1 || *VAR_6 != '2') {
            { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Got reply '%s'. expected '2'\"", FUNC_3(VAR_7, ((void*)0))); goto err; };
        }
    }

    VAR_7 = FUNC_2(VAR_2, "HGET", "cc", "notifications", "bar");
    if (VAR_7 == ((void*)0) || FUNC_4(VAR_7) != VAR_1) {
        { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Wrong or no reply for bar\""); goto err; };
    } else {
        VAR_6 = FUNC_3(VAR_7, &VAR_5);
        if (VAR_5 != 1 || *VAR_6 != '2') {
            { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Got reply '%s'. expected '2'\"", VAR_6); goto err; };
        }
    }

    VAR_7 = FUNC_2(VAR_2, "HGET", "cc", "notifications", "baz");
    if (VAR_7 == ((void*)0) || FUNC_4(VAR_7) != VAR_1) {
        { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Wrong or no reply for baz\""); goto err; };
    } else {
        VAR_6 = FUNC_3(VAR_7, &VAR_5);
        if (VAR_5 != 1 || *VAR_6 != '1') {
            { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Got reply '%.*s'. expected '1'\"", VAR_5, VAR_6); goto err; };
        }
    }

    VAR_7 = FUNC_2(VAR_2, "HGET", "cc", "notifications", "l");
    if (VAR_7 == ((void*)0) || FUNC_4(VAR_7) != VAR_0) {
        { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Wrong reply for l\""); goto err; };
    }

    VAR_7 = FUNC_2(VAR_2, "HGET", "cc", "notifications", "nosuchkey");
    if (VAR_7 == ((void*)0) || FUNC_4(VAR_7) != VAR_1) {
        { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Wrong or no reply for nosuchkey\""); goto err; };
    } else {
        VAR_6 = FUNC_3(VAR_7, &VAR_5);
        if (VAR_5 != 1 || *VAR_6 != '2') {
            { FUNC_0(VAR_2, "warning", "Failed NOTIFY Test. Reason: " "\"Got reply '%.*s'. expected '2'\"", VAR_5, VAR_6); goto err; };
        }
    }

    FUNC_2(VAR_2, "FLUSHDB", "");

    return FUNC_5(VAR_2, "OK");
err:
    FUNC_2(VAR_2, "FLUSHDB", "");

    return FUNC_5(VAR_2, "ERR");
}
