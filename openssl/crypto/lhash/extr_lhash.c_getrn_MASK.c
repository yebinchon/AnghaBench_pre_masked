
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long (* hash ) (void const*) ;unsigned long pmax; unsigned long p; unsigned long num_alloc_nodes; scalar_t__ (* comp ) (int ,void const*) ;int num_comp_calls; int num_hash_comps; TYPE_1__** b; int num_hash_calls; } ;
struct TYPE_5__ {unsigned long hash; struct TYPE_5__* next; int data; } ;
typedef TYPE_1__ OPENSSL_LH_NODE ;
typedef scalar_t__ (* OPENSSL_LH_COMPFUNC ) (int ,void const*) ;
typedef TYPE_2__ OPENSSL_LHASH ;


 unsigned long FUNC_0 (void const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static OPENSSL_LH_NODE **FUNC_2(OPENSSL_LHASH *VAR_0,
                               const void *VAR_1, unsigned long *VAR_2)
{
    OPENSSL_LH_NODE **VAR_3, *VAR_4;
    unsigned long VAR_5, VAR_6;
    OPENSSL_LH_COMPFUNC VAR_7;

    VAR_5 = (*(VAR_0->hash)) (VAR_1);
    FUNC_1(&VAR_0->num_hash_calls);
    *VAR_2 = VAR_5;

    VAR_6 = VAR_5 % VAR_0->pmax;
    if (VAR_6 < VAR_0->p)
        VAR_6 = VAR_5 % VAR_0->num_alloc_nodes;

    VAR_7 = VAR_0->comp;
    VAR_3 = &(VAR_0->b[(int)VAR_6]);
    for (VAR_4 = *VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
        FUNC_1(&VAR_0->num_hash_comps);
        if (VAR_4->hash != VAR_5) {
            VAR_3 = &(VAR_4->next);
            continue;
        }
        FUNC_1(&VAR_0->num_comp_calls);
        if (VAR_7(VAR_4->data, VAR_1) == 0)
            break;
        VAR_3 = &(VAR_4->next);
    }
    return VAR_3;
}
