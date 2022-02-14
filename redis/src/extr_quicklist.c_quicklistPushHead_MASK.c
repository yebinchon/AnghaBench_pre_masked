
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int count; void* zl; } ;
typedef TYPE_1__ quicklistNode ;
struct TYPE_11__ {TYPE_1__* head; int count; int fill; } ;
typedef TYPE_2__ quicklist ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 () ;
 void* FUNC_6 (void*,void*,size_t,int ) ;

int FUNC_7(quicklist *VAR_1, void *VAR_2, size_t VAR_3) {
    quicklistNode *VAR_4 = VAR_1->head;
    if (FUNC_2(
            FUNC_1(VAR_1->head, VAR_1->fill, VAR_3))) {
        VAR_1->head->zl =
            FUNC_6(VAR_1->head->zl, VAR_2, VAR_3, VAR_0);
        FUNC_4(VAR_1->head);
    } else {
        quicklistNode *VAR_5 = FUNC_3();
        VAR_5->zl = FUNC_6(FUNC_5(), VAR_2, VAR_3, VAR_0);

        FUNC_4(VAR_5);
        FUNC_0(VAR_1, VAR_1->head, VAR_5);
    }
    VAR_1->count++;
    VAR_1->head->count++;
    return (VAR_4 != VAR_1->head);
}
