
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * ptr; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
struct TYPE_13__ {TYPE_3__ base; } ;
typedef TYPE_2__ ctl_t ;
typedef TYPE_3__ context_t ;
typedef int WINE_STORE_LIST_ENTRY ;
typedef int WINE_COLLECTIONSTORE ;
typedef int WINECRYPT_CERTSTORE ;
typedef int BOOL ;


 int FUNC_0 (int *,int ,TYPE_3__*,TYPE_3__*,TYPE_3__**) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_4(WINECRYPT_CERTSTORE *VAR_2, context_t *VAR_3,
 context_t *VAR_4, context_t **VAR_5, BOOL VAR_6)
{
    BOOL VAR_7;
    context_t *VAR_8 = ((void*)0);
    WINE_COLLECTIONSTORE *VAR_9 = (WINE_COLLECTIONSTORE*)VAR_2;

    VAR_7 = FUNC_0(VAR_9, FUNC_3(VAR_1, VAR_0),
     VAR_3, VAR_4, &VAR_8);
    if (VAR_5 && VAR_8)
    {
        WINE_STORE_LIST_ENTRY *VAR_10 = VAR_8->u.ptr;
        ctl_t *VAR_11 = (ctl_t*)FUNC_1(VAR_9, VAR_10,
         VAR_8);

        *VAR_5 = &VAR_11->base;
    }
    if (VAR_8)
        FUNC_2(VAR_8);
    return VAR_7;
}
