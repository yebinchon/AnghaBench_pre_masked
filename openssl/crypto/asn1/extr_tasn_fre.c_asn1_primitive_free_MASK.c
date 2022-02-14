
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ itype; int utype; int size; TYPE_3__* funcs; } ;
struct TYPE_10__ {int (* prim_free ) (int **,TYPE_4__ const*) ;int (* prim_clear ) (int **,TYPE_4__ const*) ;} ;
struct TYPE_8__ {int * asn1_value; } ;
struct TYPE_9__ {int type; TYPE_1__ value; } ;
typedef int ASN1_VALUE ;
typedef TYPE_2__ ASN1_TYPE ;
typedef int ASN1_STRING ;
typedef TYPE_3__ ASN1_PRIMITIVE_FUNCS ;
typedef int ASN1_OBJECT ;
typedef TYPE_4__ ASN1_ITEM ;
typedef int ASN1_BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;




 int FUNC_2 (int *,int) ;
 int FUNC_3 (int **,TYPE_4__ const*) ;
 int FUNC_4 (int **,TYPE_4__ const*) ;

void FUNC_5(ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2, int VAR_3)
{
    int VAR_4;


    if (VAR_2) {
        const ASN1_PRIMITIVE_FUNCS *VAR_5 = VAR_2->funcs;

        if (VAR_3) {
            if (VAR_5 && VAR_5->prim_clear) {
                VAR_5->prim_clear(VAR_1, VAR_2);
                return;
            }
        } else if (VAR_5 && VAR_5->prim_free) {
            VAR_5->prim_free(VAR_1, VAR_2);
            return;
        }
    }


    if (!VAR_2) {
        ASN1_TYPE *VAR_6 = (ASN1_TYPE *)*VAR_1;

        VAR_4 = VAR_6->type;
        VAR_1 = &VAR_6->value.asn1_value;
        if (*VAR_1 == ((void*)0))
            return;
    } else if (VAR_2->itype == VAR_0) {
        VAR_4 = -1;
        if (*VAR_1 == ((void*)0))
            return;
    } else {
        VAR_4 = VAR_2->utype;
        if ((VAR_4 != 130) && *VAR_1 == ((void*)0))
            return;
    }

    switch (VAR_4) {
    case 128:
        FUNC_0((ASN1_OBJECT *)*VAR_1);
        break;

    case 130:
        if (VAR_2)
            *(ASN1_BOOLEAN *)VAR_1 = VAR_2->size;
        else
            *(ASN1_BOOLEAN *)VAR_1 = -1;
        return;

    case 129:
        break;

    case 131:
        FUNC_5(VAR_1, ((void*)0), 0);
        FUNC_1(*VAR_1);
        break;

    default:
        FUNC_2((ASN1_STRING *)*VAR_1, VAR_3);
        break;
    }
    *VAR_1 = ((void*)0);
}
