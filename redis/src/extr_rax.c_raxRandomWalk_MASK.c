
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int size; scalar_t__ iskey; scalar_t__ data; scalar_t__ iscompr; } ;
typedef TYPE_2__ raxNode ;
struct TYPE_15__ {TYPE_2__* node; int stack; TYPE_1__* rt; int flags; } ;
typedef TYPE_3__ raxIterator ;
typedef int n ;
struct TYPE_13__ {scalar_t__ numele; TYPE_2__* head; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 TYPE_2__** FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_2__*) ;

int FUNC_9(raxIterator *VAR_1, size_t VAR_2) {
    if (VAR_1->rt->numele == 0) {
        VAR_1->flags |= VAR_0;
        return 0;
    }

    if (VAR_2 == 0) {
        size_t VAR_3 = FUNC_0(FUNC_1(VAR_1->rt->numele));
        VAR_3 *= 2;
        VAR_2 = 1 + FUNC_3() % VAR_3;
    }

    raxNode *VAR_4 = VAR_1->node;
    while(VAR_2 > 0 || !VAR_4->iskey) {
        int VAR_5 = VAR_4->iscompr ? 1 : VAR_4->size;
        int VAR_6 = FUNC_3() % (VAR_5+(VAR_4 != VAR_1->rt->head));

        if (VAR_6 == VAR_5) {

            VAR_4 = FUNC_7(&VAR_1->stack);
            int VAR_7 = VAR_4->iscompr ? VAR_4->size : 1;
            FUNC_5(VAR_1,VAR_7);
        } else {

            if (VAR_4->iscompr) {
                if (!FUNC_4(VAR_1,VAR_4->data,VAR_4->size)) return 0;
            } else {
                if (!FUNC_4(VAR_1,VAR_4->data+VAR_6,1)) return 0;
            }
            raxNode **VAR_8 = FUNC_6(VAR_4)+VAR_6;
            if (!FUNC_8(&VAR_1->stack,VAR_4)) return 0;
            FUNC_2(&VAR_4,VAR_8,sizeof(VAR_4));
        }
        if (VAR_4->iskey) VAR_2--;
    }
    VAR_1->node = VAR_4;
    return 1;
}
