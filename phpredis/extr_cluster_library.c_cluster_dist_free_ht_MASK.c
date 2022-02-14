
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int len; struct TYPE_3__* entry; struct TYPE_3__* val; scalar_t__ val_free; struct TYPE_3__* key; scalar_t__ key_free; } ;
typedef TYPE_1__ clusterDistList ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(zval *VAR_0) {
    clusterDistList *VAR_1 = *(clusterDistList**)VAR_0;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
        if (VAR_1->entry[VAR_2].key_free)
            FUNC_0(VAR_1->entry[VAR_2].key);
        if (VAR_1->entry[VAR_2].val_free)
            FUNC_0(VAR_1->entry[VAR_2].val);
    }

    FUNC_0(VAR_1->entry);
    FUNC_0(VAR_1);
}
