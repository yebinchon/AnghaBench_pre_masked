
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,char*,int) ;

int FUNC_6(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_1(VAR_1);
    RedisModuleCallReply *VAR_4;


    FUNC_3("dbsize","");
    if (!FUNC_4(VAR_1,VAR_4,0)) goto fail;

    FUNC_3("ping","");
    if (!FUNC_5(VAR_1,VAR_4,"PONG",4)) goto fail;

    FUNC_3("test.call","");
    if (!FUNC_5(VAR_1,VAR_4,"OK",2)) goto fail;

    FUNC_3("test.ctxflags","");
    if (!FUNC_5(VAR_1,VAR_4,"OK",2)) goto fail;

    FUNC_3("test.string.append","");
    if (!FUNC_5(VAR_1,VAR_4,"foobar",6)) goto fail;

    FUNC_3("test.unlink","");
    if (!FUNC_5(VAR_1,VAR_4,"OK",2)) goto fail;

    FUNC_3("test.string.append.am","");
    if (!FUNC_5(VAR_1,VAR_4,"foobar",6)) goto fail;

    FUNC_3("test.string.printf", "cc", "foo", "bar");
    if (!FUNC_5(VAR_1,VAR_4,"Got 3 args. argv[1]: foo, argv[2]: bar",38)) goto fail;

    FUNC_3("test.notify", "");
    if (!FUNC_5(VAR_1,VAR_4,"OK",2)) goto fail;

    FUNC_2(VAR_1,"ALL TESTS PASSED");
    return VAR_0;

fail:
    FUNC_2(VAR_1,
        "SOME TEST NOT PASSED! Check server logs");
    return VAR_0;
}
