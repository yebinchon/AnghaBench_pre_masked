
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* asn1_ex_clear ) (int **,TYPE_1__ const*) ;} ;
struct TYPE_6__ {int itype; int templates; TYPE_2__* funcs; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;
typedef TYPE_2__ ASN1_EXTERN_FUNCS ;
 int FUNC_0 (int **,TYPE_1__ const*) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_3(ASN1_VALUE **VAR_0, const ASN1_ITEM *VAR_1)
{
    const ASN1_EXTERN_FUNCS *VAR_2;

    switch (VAR_1->itype) {

    case 132:
        VAR_2 = VAR_1->funcs;
        if (VAR_2 && VAR_2->asn1_ex_clear)
            VAR_2->asn1_ex_clear(VAR_0, VAR_1);
        else
            *VAR_0 = ((void*)0);
        break;

    case 129:
        if (VAR_1->templates)
            FUNC_1(VAR_0, VAR_1->templates);
        else
            FUNC_0(VAR_0, VAR_1);
        break;

    case 131:
        FUNC_0(VAR_0, VAR_1);
        break;

    case 133:
    case 128:
    case 130:
        *VAR_0 = ((void*)0);
        break;
    }
}
