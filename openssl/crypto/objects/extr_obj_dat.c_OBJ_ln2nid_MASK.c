
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nid; } ;
struct TYPE_8__ {TYPE_1__* obj; int type; } ;
struct TYPE_7__ {char const* ln; int nid; } ;
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
 int VAR_5 ;
 TYPE_3__* VAR_6 ;

int FUNC_3(const char *VAR_7)
{
    ASN1_OBJECT VAR_8;
    const ASN1_OBJECT *VAR_9 = &VAR_8;
    ADDED_OBJ VAR_10, *VAR_11;
    const unsigned int *VAR_12;


    FUNC_1(VAR_3, ((void*)0));

    VAR_8.ln = VAR_7;
    if (VAR_4 != ((void*)0)) {
        VAR_10.type = VAR_0;
        VAR_10.obj = &VAR_8;
        VAR_11 = FUNC_2(VAR_4, &VAR_10);
        if (VAR_11 != ((void*)0))
            return VAR_11->obj->nid;
    }
    VAR_12 = FUNC_0(&VAR_9, VAR_5, VAR_2);
    if (VAR_12 == ((void*)0))
        return VAR_1;
    return VAR_6[*VAR_12].nid;
}
