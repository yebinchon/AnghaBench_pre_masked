
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nid; } ;
struct TYPE_8__ {TYPE_1__* obj; int type; } ;
struct TYPE_7__ {int nid; } ;
typedef TYPE_1__ ASN1_OBJECT ;
typedef TYPE_2__ ADDED_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int * VAR_6 ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;
 TYPE_3__* VAR_7 ;

ASN1_OBJECT *FUNC_3(int VAR_8)
{
    ADDED_OBJ VAR_9, *VAR_10;
    ASN1_OBJECT VAR_11;

    if ((VAR_8 >= 0) && (VAR_8 < VAR_2)) {
        if ((VAR_8 != VAR_1) && (VAR_7[VAR_8].nid == VAR_1)) {
            FUNC_0(VAR_3, VAR_4);
            return ((void*)0);
        }
        return (ASN1_OBJECT *)&(VAR_7[VAR_8]);
    }


    FUNC_1(VAR_5, ((void*)0));

    if (VAR_6 == ((void*)0))
        return ((void*)0);

    VAR_9.type = VAR_0;
    VAR_9.obj = &VAR_11;
    VAR_11.nid = VAR_8;
    VAR_10 = FUNC_2(VAR_6, &VAR_9);
    if (VAR_10 != ((void*)0))
        return VAR_10->obj;

    FUNC_0(VAR_3, VAR_4);
    return ((void*)0);
}
