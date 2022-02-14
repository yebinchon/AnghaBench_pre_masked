
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * ptr; } ;
struct TYPE_12__ {TYPE_2__ u; TYPE_1__* vtbl; } ;
typedef TYPE_3__ context_t ;
typedef int WINE_STORE_LIST_ENTRY ;
struct TYPE_13__ {int hdr; } ;
typedef TYPE_4__ WINE_COLLECTIONSTORE ;
struct TYPE_10__ {TYPE_3__* (* clone ) (TYPE_3__*,int *,int ) ;} ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static context_t *FUNC_1(WINE_COLLECTIONSTORE *VAR_1,
 WINE_STORE_LIST_ENTRY *VAR_2, context_t *VAR_3)
{
    context_t *VAR_4;

    VAR_4 = VAR_3->vtbl->clone(VAR_3, &VAR_1->hdr, VAR_0);
    if (!VAR_4)
        return ((void*)0);

    VAR_4->u.ptr = VAR_2;
    return VAR_4;
}
