
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int used; int size; TYPE_1__* current; TYPE_1__* head; TYPE_1__* tail; } ;
struct TYPE_5__ {int * vals; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ BN_POOL_ITEM ;
typedef TYPE_2__ BN_POOL ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BIGNUM *FUNC_4(BN_POOL *VAR_4, int VAR_5)
{
    BIGNUM *VAR_6;
    unsigned int VAR_7;


    if (VAR_4->used == VAR_4->size) {
        BN_POOL_ITEM *VAR_8;

        if ((VAR_8 = FUNC_2(sizeof(*VAR_8))) == ((void*)0)) {
            FUNC_1(VAR_2, VAR_3);
            return ((void*)0);
        }
        for (VAR_7 = 0, VAR_6 = VAR_8->vals; VAR_7++ < VAR_0; VAR_6++) {
            FUNC_3(VAR_6);
            if ((VAR_5 & VAR_1) != 0)
                FUNC_0(VAR_6, VAR_1);
        }
        VAR_8->prev = VAR_4->tail;
        VAR_8->next = ((void*)0);

        if (VAR_4->head == ((void*)0))
            VAR_4->head = VAR_4->current = VAR_4->tail = VAR_8;
        else {
            VAR_4->tail->next = VAR_8;
            VAR_4->tail = VAR_8;
            VAR_4->current = VAR_8;
        }
        VAR_4->size += VAR_0;
        VAR_4->used++;

        return VAR_8->vals;
    }

    if (!VAR_4->used)
        VAR_4->current = VAR_4->head;
    else if ((VAR_4->used % VAR_0) == 0)
        VAR_4->current = VAR_4->current->next;
    return VAR_4->current->vals + ((VAR_4->used++) % VAR_0);
}
