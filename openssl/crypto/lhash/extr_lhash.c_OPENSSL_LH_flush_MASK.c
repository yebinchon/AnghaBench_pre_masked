
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_nodes; TYPE_1__** b; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef TYPE_2__ OPENSSL_LHASH ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(OPENSSL_LHASH *VAR_0)
{
    unsigned int VAR_1;
    OPENSSL_LH_NODE *VAR_2, *VAR_3;

    if (VAR_0 == ((void*)0))
        return;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_nodes; VAR_1++) {
        VAR_2 = VAR_0->b[VAR_1];
        while (VAR_2 != ((void*)0)) {
            VAR_3 = VAR_2->next;
            FUNC_0(VAR_2);
            VAR_2 = VAR_3;
        }
        VAR_0->b[VAR_1] = ((void*)0);
    }
}
