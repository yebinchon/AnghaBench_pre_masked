
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ encoding; size_t sz; scalar_t__ count; void* zl; struct TYPE_10__* next; } ;
typedef TYPE_1__ quicklistNode ;
struct TYPE_11__ {int sz; } ;
typedef TYPE_2__ quicklistLZF ;
struct TYPE_12__ {int tail; int count; TYPE_1__* head; int compress; int fill; } ;
typedef TYPE_3__ quicklist ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_1 (void*,void*,size_t) ;
 TYPE_1__* FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 void* FUNC_4 (size_t) ;

quicklist *FUNC_5(quicklist *VAR_2) {
    quicklist *VAR_3;

    VAR_3 = FUNC_3(VAR_2->fill, VAR_2->compress);

    for (quicklistNode *VAR_4 = VAR_2->head; VAR_4;
         VAR_4 = VAR_4->next) {
        quicklistNode *VAR_5 = FUNC_2();

        if (VAR_4->encoding == VAR_0) {
            quicklistLZF *VAR_6 = (quicklistLZF *)VAR_4->zl;
            size_t VAR_7 = sizeof(*VAR_6) + VAR_6->sz;
            VAR_5->zl = FUNC_4(VAR_7);
            FUNC_1(VAR_5->zl, VAR_4->zl, VAR_7);
        } else if (VAR_4->encoding == VAR_1) {
            VAR_5->zl = FUNC_4(VAR_4->sz);
            FUNC_1(VAR_5->zl, VAR_4->zl, VAR_4->sz);
        }

        VAR_5->count = VAR_4->count;
        VAR_3->count += VAR_5->count;
        VAR_5->sz = VAR_4->sz;
        VAR_5->encoding = VAR_4->encoding;

        FUNC_0(VAR_3, VAR_3->tail, VAR_5);
    }


    return VAR_3;
}
