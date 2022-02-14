
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {struct HelloTypeNode* head; } ;
struct HelloTypeNode {struct HelloTypeNode* next; int value; } ;
typedef int RedisModuleDigest ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(RedisModuleDigest *VAR_0, void *VAR_1) {
    struct HelloTypeObject *VAR_2 = VAR_1;
    struct HelloTypeNode *VAR_3 = VAR_2->head;
    while(VAR_3) {
        FUNC_0(VAR_0,VAR_3->value);
        VAR_3 = VAR_3->next;
    }
    FUNC_1(VAR_0);
}
