
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (int *,char*,int ,char*,int,int,int) ;
 scalar_t__ FUNC_1 (int *,char*,int,int ) ;
 char* FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int,char const*) ;

int FUNC_4(RedisModuleCtx *VAR_19, RedisModuleString **VAR_20, int VAR_21) {
    if (FUNC_1(VAR_19,"helloworld",1,VAR_16)
        == VAR_17) return VAR_17;


    for (int VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
        const char *VAR_23 = FUNC_2(VAR_20[VAR_22],((void*)0));
        FUNC_3("Module loaded with ARGV[%d] = %s\n", VAR_22, VAR_23);
    }

    if (FUNC_0(VAR_19,"hello.simple",
        VAR_13,"readonly",0,0,0) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.push.native",
        VAR_9,"write deny-oom",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.push.call",
        VAR_8,"write deny-oom",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.push.call2",
        VAR_7,"write deny-oom",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.list.sum.len",
        VAR_5,"readonly",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.list.splice",
        VAR_4,"write deny-oom",1,2,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.list.splice.auto",
        VAR_3,
        "write deny-oom",1,2,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.rand.array",
        VAR_10,"readonly",0,0,0) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.repl1",
        VAR_11,"write",0,0,0) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.repl2",
        VAR_12,"write",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.toggle.case",
        VAR_14,"write",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.more.expire",
        VAR_6,"write",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.zsumrange",
        VAR_15,"readonly",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.lexrange",
        VAR_2,"readonly",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.hcopy",
        VAR_0,"write deny-oom",1,1,1) == VAR_17)
        return VAR_17;

    if (FUNC_0(VAR_19,"hello.leftpad",
        VAR_1,"",1,1,1) == VAR_17)
        return VAR_17;

    return VAR_18;
}
