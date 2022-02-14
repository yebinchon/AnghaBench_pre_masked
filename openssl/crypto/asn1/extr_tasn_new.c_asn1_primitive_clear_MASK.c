
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ itype; int utype; int size; TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* prim_clear ) (int **,TYPE_2__ const*) ;} ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_PRIMITIVE_FUNCS ;
typedef TYPE_2__ ASN1_ITEM ;
typedef int ASN1_BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_1(ASN1_VALUE **VAR_2, const ASN1_ITEM *VAR_3)
{
    int VAR_4;
    if (VAR_3 && VAR_3->funcs) {
        const ASN1_PRIMITIVE_FUNCS *VAR_5 = VAR_3->funcs;
        if (VAR_5->prim_clear)
            VAR_5->prim_clear(VAR_2, VAR_3);
        else
            *VAR_2 = ((void*)0);
        return;
    }
    if (!VAR_3 || (VAR_3->itype == VAR_0))
        VAR_4 = -1;
    else
        VAR_4 = VAR_3->utype;
    if (VAR_4 == VAR_1)
        *(ASN1_BOOLEAN *)VAR_2 = VAR_3->size;
    else
        *VAR_2 = ((void*)0);
}
