
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {struct HelloTypeNode* head; } ;
struct HelloTypeNode {struct HelloTypeNode* next; int value; } ;
typedef int RedisModuleString ;
typedef int RedisModuleIO ;


 int FUNC_0 (int *,char*,char*,int *,int ) ;

void FUNC_1(RedisModuleIO *VAR_0, RedisModuleString *VAR_1, void *VAR_2) {
    struct HelloTypeObject *VAR_3 = VAR_2;
    struct HelloTypeNode *VAR_4 = VAR_3->head;
    while(VAR_4) {
        FUNC_0(VAR_0,"HELLOTYPE.INSERT","sl",VAR_1,VAR_4->value);
        VAR_4 = VAR_4->next;
    }
}
