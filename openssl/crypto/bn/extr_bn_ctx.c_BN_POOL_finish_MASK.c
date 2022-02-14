
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__* vals; } ;
struct TYPE_7__ {scalar_t__ d; } ;
struct TYPE_6__ {TYPE_3__* current; TYPE_3__* head; } ;
typedef TYPE_1__ BN_POOL ;
typedef TYPE_2__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(BN_POOL *VAR_1)
{
    unsigned int VAR_2;
    BIGNUM *VAR_3;

    while (VAR_1->head) {
        for (VAR_2 = 0, VAR_3 = VAR_1->head->vals; VAR_2++ < VAR_0; VAR_3++)
            if (VAR_3->d)
                FUNC_0(VAR_3);
        VAR_1->current = VAR_1->head->next;
        FUNC_1(VAR_1->head);
        VAR_1->head = VAR_1->current;
    }
}
