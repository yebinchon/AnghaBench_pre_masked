
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int used; TYPE_1__* current; } ;
struct TYPE_4__ {struct TYPE_4__* prev; scalar_t__ vals; } ;
typedef TYPE_2__ BN_POOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(BN_POOL *VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = (VAR_1->used - 1) % VAR_0;

    VAR_1->used -= VAR_2;
    while (VAR_2--) {
        FUNC_0(VAR_1->current->vals + VAR_3);
        if (VAR_3 == 0) {
            VAR_3 = VAR_0 - 1;
            VAR_1->current = VAR_1->current->prev;
        } else
            VAR_3--;
    }
}
