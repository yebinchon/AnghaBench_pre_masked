
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {int len; struct HelloTypeNode* head; } ;
struct HelloTypeNode {scalar_t__ value; struct HelloTypeNode* next; } ;
typedef scalar_t__ int64_t ;


 struct HelloTypeNode* FUNC_0 (int) ;

void FUNC_1(struct HelloTypeObject *VAR_0, int64_t VAR_1) {
    struct HelloTypeNode *VAR_2 = VAR_0->head, *VAR_3, *VAR_4 = ((void*)0);

    while(VAR_2 && VAR_2->value < VAR_1) {
        VAR_4 = VAR_2;
        VAR_2 = VAR_2->next;
    }
    VAR_3 = FUNC_0(sizeof(*VAR_3));
    VAR_3->value = VAR_1;
    VAR_3->next = VAR_2;
    if (VAR_4) {
        VAR_4->next = VAR_3;
    } else {
        VAR_0->head = VAR_3;
    }
    VAR_0->len++;
}
