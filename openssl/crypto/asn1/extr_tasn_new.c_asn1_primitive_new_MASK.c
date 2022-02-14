
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ itype; int utype; int size; TYPE_4__* funcs; } ;
struct TYPE_15__ {int (* prim_new ) (int **,TYPE_5__ const*) ;int (* prim_clear ) (int **,TYPE_5__ const*) ;} ;
struct TYPE_14__ {int type; int flags; } ;
struct TYPE_12__ {int * ptr; } ;
struct TYPE_13__ {int type; TYPE_1__ value; } ;
typedef int ASN1_VALUE ;
typedef TYPE_2__ ASN1_TYPE ;
typedef TYPE_3__ ASN1_STRING ;
typedef TYPE_4__ ASN1_PRIMITIVE_FUNCS ;
typedef TYPE_5__ ASN1_ITEM ;
typedef int ASN1_BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int) ;




 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (int **,TYPE_5__ const*) ;
 int FUNC_6 (int **,TYPE_5__ const*) ;

__attribute__((used)) static int FUNC_7(ASN1_VALUE **VAR_6, const ASN1_ITEM *VAR_7,
                              int VAR_8)
{
    ASN1_TYPE *VAR_9;
    ASN1_STRING *VAR_10;
    int VAR_11;

    if (!VAR_7)
        return 0;

    if (VAR_7->funcs) {
        const ASN1_PRIMITIVE_FUNCS *VAR_12 = VAR_7->funcs;
        if (VAR_8) {
            if (VAR_12->prim_clear) {
                VAR_12->prim_clear(VAR_6, VAR_7);
                return 1;
            }
        } else if (VAR_12->prim_new) {
            return VAR_12->prim_new(VAR_6, VAR_7);
        }
    }

    if (VAR_7->itype == VAR_1)
        VAR_11 = -1;
    else
        VAR_11 = VAR_7->utype;
    switch (VAR_11) {
    case 128:
        *VAR_6 = (ASN1_VALUE *)FUNC_2(VAR_5);
        return 1;

    case 130:
        *(ASN1_BOOLEAN *)VAR_6 = VAR_7->size;
        return 1;

    case 129:
        *VAR_6 = (ASN1_VALUE *)1;
        return 1;

    case 131:
        if ((VAR_9 = FUNC_3(sizeof(*VAR_9))) == ((void*)0)) {
            FUNC_1(VAR_0, VAR_4);
            return 0;
        }
        VAR_9->value.ptr = ((void*)0);
        VAR_9->type = -1;
        *VAR_6 = (ASN1_VALUE *)VAR_9;
        break;

    default:
        if (VAR_8) {
            VAR_10 = *(ASN1_STRING **)VAR_6;
            FUNC_4(VAR_10, 0, sizeof(*VAR_10));
            VAR_10->type = VAR_11;
            VAR_10->flags = VAR_2;
        } else {
            VAR_10 = FUNC_0(VAR_11);
            *VAR_6 = (ASN1_VALUE *)VAR_10;
        }
        if (VAR_7->itype == VAR_1 && VAR_10)
            VAR_10->flags |= VAR_3;
        break;
    }
    if (*VAR_6)
        return 1;
    return 0;
}
