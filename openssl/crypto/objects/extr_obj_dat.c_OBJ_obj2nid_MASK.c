
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nid; } ;
struct TYPE_9__ {TYPE_1__* obj; int type; } ;
struct TYPE_8__ {scalar_t__ nid; scalar_t__ length; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* FUNC_0 (TYPE_1__ const**,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int * VAR_4 ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;

int FUNC_3(const ASN1_OBJECT *VAR_7)
{
    const unsigned int *VAR_8;
    ADDED_OBJ VAR_9, *VAR_10;

    if (VAR_7 == ((void*)0))
        return VAR_1;
    if (VAR_7->nid != 0)
        return VAR_7->nid;

    if (VAR_7->length == 0)
        return VAR_1;


    FUNC_1(VAR_3, ((void*)0));

    if (VAR_4 != ((void*)0)) {
        VAR_9.type = VAR_0;
        VAR_9.obj = (ASN1_OBJECT *)VAR_7;
        VAR_10 = FUNC_2(VAR_4, &VAR_9);
        if (VAR_10 != ((void*)0))
            return VAR_10->obj->nid;
    }
    VAR_8 = FUNC_0(&VAR_7, VAR_6, VAR_2);
    if (VAR_8 == ((void*)0))
        return VAR_1;
    return VAR_5[*VAR_8].nid;
}
