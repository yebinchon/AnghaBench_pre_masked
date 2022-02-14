
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ length; int * sn; int * ln; int nid; int * data; } ;
typedef TYPE_1__ ASN1_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,scalar_t__) ;
 void* FUNC_4 (int *) ;

ASN1_OBJECT *FUNC_5(const ASN1_OBJECT *VAR_6)
{
    ASN1_OBJECT *VAR_7;

    if (VAR_6 == ((void*)0))
        return ((void*)0);

    if (!(VAR_6->flags & VAR_0))
        return (ASN1_OBJECT *)VAR_6;

    VAR_7 = FUNC_1();
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_5, VAR_3);
        return ((void*)0);
    }



    VAR_7->flags = VAR_6->flags | (VAR_0 |
                           VAR_2 |
                           VAR_1);

    if (VAR_6->length > 0 && (VAR_7->data = FUNC_3(VAR_6->data, VAR_6->length)) == ((void*)0))
        goto err;

    VAR_7->length = VAR_6->length;
    VAR_7->nid = VAR_6->nid;

    if (VAR_6->ln != ((void*)0) && (VAR_7->ln = FUNC_4(VAR_6->ln)) == ((void*)0))
        goto err;

    if (VAR_6->sn != ((void*)0) && (VAR_7->sn = FUNC_4(VAR_6->sn)) == ((void*)0))
        goto err;

    return VAR_7;
 err:
    FUNC_0(VAR_7);
    FUNC_2(VAR_5, VAR_4);
    return ((void*)0);
}
