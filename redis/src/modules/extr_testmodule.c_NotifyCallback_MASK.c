
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*,int *,char*) ;
 int FUNC_1 (int *,char*,char*,int,char const*,int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(RedisModuleCtx *VAR_1, int VAR_2, const char *VAR_3,
                   RedisModuleString *VAR_4) {


  FUNC_1(VAR_1, "notice", "Got event type %d, event %s, key %s", VAR_2,
                  VAR_3, FUNC_2(VAR_4, ((void*)0)));

  FUNC_0(VAR_1, "HINCRBY", "csc", "notifications", VAR_4, "1");
  return VAR_0;
}
