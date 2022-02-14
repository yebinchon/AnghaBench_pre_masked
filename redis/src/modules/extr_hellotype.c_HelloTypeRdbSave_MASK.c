
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {int len; struct HelloTypeNode* head; } ;
struct HelloTypeNode {struct HelloTypeNode* next; int value; } ;
typedef int RedisModuleIO ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(RedisModuleIO *VAR_0, void *VAR_1) {
    struct HelloTypeObject *VAR_2 = VAR_1;
    struct HelloTypeNode *VAR_3 = VAR_2->head;
    FUNC_1(VAR_0,VAR_2->len);
    while(VAR_3) {
        FUNC_0(VAR_0,VAR_3->value);
        VAR_3 = VAR_3->next;
    }
}
