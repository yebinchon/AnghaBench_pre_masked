
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {scalar_t__ len; int * head; } ;


 struct HelloTypeObject* FUNC_0 (int) ;

struct HelloTypeObject *FUNC_1(void) {
    struct HelloTypeObject *VAR_0;
    VAR_0 = FUNC_0(sizeof(*VAR_0));
    VAR_0->head = ((void*)0);
    VAR_0->len = 0;
    return VAR_0;
}
