
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RedisModule {int name; int using; int usedby; int filters; int types; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct RedisModule*) ;

void FUNC_3(struct RedisModule *VAR_0) {
    FUNC_0(VAR_0->types);
    FUNC_0(VAR_0->filters);
    FUNC_0(VAR_0->usedby);
    FUNC_0(VAR_0->using);
    FUNC_1(VAR_0->name);
    FUNC_2(VAR_0);
}
