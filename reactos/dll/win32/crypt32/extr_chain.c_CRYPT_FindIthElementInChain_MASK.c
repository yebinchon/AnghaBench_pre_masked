
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cChain; TYPE_1__** rgpChain; } ;
struct TYPE_4__ {size_t cElement; int ** rgpElement; } ;
typedef int * PCERT_CHAIN_ELEMENT ;
typedef size_t DWORD ;
typedef TYPE_2__ CERT_CHAIN_CONTEXT ;



__attribute__((used)) static PCERT_CHAIN_ELEMENT FUNC_0(
 const CERT_CHAIN_CONTEXT *VAR_0, DWORD VAR_1)
{
    DWORD VAR_2, VAR_3;
    PCERT_CHAIN_ELEMENT VAR_4 = ((void*)0);

    for (VAR_2 = 0, VAR_3 = 0; !VAR_4 && VAR_2 < VAR_0->cChain; VAR_2++)
    {
        if (VAR_3 + VAR_0->rgpChain[VAR_2]->cElement < VAR_1)
            VAR_3 += VAR_0->rgpChain[VAR_2]->cElement;
        else
            VAR_4 = VAR_0->rgpChain[VAR_2]->rgpElement[VAR_1 - VAR_3];
    }
    return VAR_4;
}
