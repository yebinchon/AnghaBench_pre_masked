
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int num_alloc_nodes; unsigned int p; unsigned int pmax; TYPE_1__** b; int num_expands; int num_nodes; int num_expand_reallocs; int error; } ;
struct TYPE_7__ {unsigned long hash; struct TYPE_7__* next; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef TYPE_2__ OPENSSL_LHASH ;


 TYPE_1__** FUNC_0 (TYPE_1__**,int) ;
 int FUNC_1 (TYPE_1__**,int ,int) ;

__attribute__((used)) static int FUNC_2(OPENSSL_LHASH *VAR_0)
{
    OPENSSL_LH_NODE **VAR_1, **VAR_2, **VAR_3, *VAR_4;
    unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
    unsigned long VAR_9;

    VAR_7 = VAR_0->num_alloc_nodes;
    VAR_5 = VAR_0->p;
    VAR_6 = VAR_0->pmax;
    if (VAR_5 + 1 >= VAR_6) {
        VAR_8 = VAR_7 * 2;
        VAR_1 = FUNC_0(VAR_0->b, sizeof(OPENSSL_LH_NODE *) * VAR_8);
        if (VAR_1 == ((void*)0)) {
            VAR_0->error++;
            return 0;
        }
        VAR_0->b = VAR_1;
        FUNC_1(VAR_1 + VAR_7, 0, sizeof(*VAR_1) * (VAR_8 - VAR_7));
        VAR_0->pmax = VAR_7;
        VAR_0->num_alloc_nodes = VAR_8;
        VAR_0->num_expand_reallocs++;
        VAR_0->p = 0;
    } else {
        VAR_0->p++;
    }

    VAR_0->num_nodes++;
    VAR_0->num_expands++;
    VAR_2 = &(VAR_0->b[VAR_5]);
    VAR_3 = &(VAR_0->b[VAR_5 + VAR_6]);
    *VAR_3 = ((void*)0);

    for (VAR_4 = *VAR_2; VAR_4 != ((void*)0);) {
        VAR_9 = VAR_4->hash;
        if ((VAR_9 % VAR_7) != VAR_5) {
            *VAR_2 = (*VAR_2)->next;
            VAR_4->next = *VAR_3;
            *VAR_3 = VAR_4;
        } else
            VAR_2 = &((*VAR_2)->next);
        VAR_4 = *VAR_2;
    }

    return 1;
}
