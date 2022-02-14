
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {struct HelloTypeObject* next; struct HelloTypeObject* head; } ;
struct HelloTypeNode {struct HelloTypeNode* next; struct HelloTypeNode* head; } ;


 int FUNC_0 (struct HelloTypeObject*) ;

void FUNC_1(struct HelloTypeObject *VAR_0) {
    struct HelloTypeNode *VAR_1, *VAR_2;
    VAR_1 = VAR_0->head;
    while(VAR_1) {
        VAR_2 = VAR_1->next;
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
    FUNC_0(VAR_0);
}
