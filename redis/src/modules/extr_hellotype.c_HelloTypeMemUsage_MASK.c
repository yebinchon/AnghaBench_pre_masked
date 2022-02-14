
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {int len; struct HelloTypeNode* head; } ;
struct HelloTypeNode {int dummy; } ;



size_t FUNC_0(const void *VAR_0) {
    const struct HelloTypeObject *VAR_1 = VAR_0;
    struct HelloTypeNode *VAR_2 = VAR_1->head;
    return sizeof(*VAR_1) + sizeof(*VAR_2)*VAR_1->len;
}
