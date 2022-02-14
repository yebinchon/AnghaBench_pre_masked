
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; TYPE_1__* obj; } ;
struct TYPE_5__ {int length; int nid; int * ln; int * sn; int data; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;






 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(const ADDED_OBJ *VAR_0, const ADDED_OBJ *VAR_1)
{
    ASN1_OBJECT *VAR_2, *VAR_3;
    int VAR_4;

    VAR_4 = VAR_0->type - VAR_1->type;
    if (VAR_4)
        return VAR_4;
    VAR_2 = VAR_0->obj;
    VAR_3 = VAR_1->obj;
    switch (VAR_0->type) {
    case 131:
        VAR_4 = (VAR_2->length - VAR_3->length);
        if (VAR_4)
            return VAR_4;
        return FUNC_0(VAR_2->data, VAR_3->data, (size_t)VAR_2->length);
    case 128:
        if (VAR_2->sn == ((void*)0))
            return -1;
        else if (VAR_3->sn == ((void*)0))
            return 1;
        else
            return FUNC_1(VAR_2->sn, VAR_3->sn);
    case 130:
        if (VAR_2->ln == ((void*)0))
            return -1;
        else if (VAR_3->ln == ((void*)0))
            return 1;
        else
            return FUNC_1(VAR_2->ln, VAR_3->ln);
    case 129:
        return VAR_2->nid - VAR_3->nid;
    default:

        return 0;
    }
}
