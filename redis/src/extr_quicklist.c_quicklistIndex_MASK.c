
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned long long count; int zl; struct TYPE_9__* prev; struct TYPE_9__* next; } ;
typedef TYPE_1__ quicklistNode ;
struct TYPE_10__ {unsigned long long offset; int longval; int sz; int value; int zi; TYPE_1__* node; TYPE_3__ const* quicklist; } ;
typedef TYPE_2__ quicklistEntry ;
struct TYPE_11__ {unsigned long long count; TYPE_1__* head; TYPE_1__* tail; } ;
typedef TYPE_3__ quicklist ;


 int FUNC_0 (char*,void*,unsigned long long,unsigned long long,...) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int ,unsigned long long) ;

int FUNC_6(const quicklist *VAR_0, const long long VAR_1,
                   quicklistEntry *VAR_2) {
    quicklistNode *VAR_3;
    unsigned long long VAR_4 = 0;
    unsigned long long VAR_5;
    int VAR_6 = VAR_1 < 0 ? 0 : 1;

    FUNC_1(VAR_2);
    VAR_2->quicklist = VAR_0;

    if (!VAR_6) {
        VAR_5 = (-VAR_1) - 1;
        VAR_3 = VAR_0->tail;
    } else {
        VAR_5 = VAR_1;
        VAR_3 = VAR_0->head;
    }

    if (VAR_5 >= VAR_0->count)
        return 0;

    while (FUNC_2(VAR_3)) {
        if ((VAR_4 + VAR_3->count) > VAR_5) {
            break;
        } else {
            FUNC_0("Skipping over (%p) %u at accum %lld", (void *)VAR_3, VAR_3->count,
              VAR_4);
            VAR_4 += VAR_3->count;
            VAR_3 = VAR_6 ? VAR_3->next : VAR_3->prev;
        }
    }

    if (!VAR_3)
        return 0;

    FUNC_0("Found node: %p at accum %llu, idx %llu, sub+ %llu, sub- %llu", (void *)VAR_3,
      VAR_4, VAR_5, VAR_5 - VAR_4, (-VAR_5) - 1 + VAR_4);

    VAR_2->node = VAR_3;
    if (VAR_6) {

        VAR_2->offset = VAR_5 - VAR_4;
    } else {


        VAR_2->offset = (-VAR_5) - 1 + VAR_4;
    }

    FUNC_3(VAR_2->node);
    VAR_2->zi = FUNC_5(VAR_2->node->zl, VAR_2->offset);
    FUNC_4(VAR_2->zi, &VAR_2->value, &VAR_2->sz, &VAR_2->longval);


    return 1;
}
