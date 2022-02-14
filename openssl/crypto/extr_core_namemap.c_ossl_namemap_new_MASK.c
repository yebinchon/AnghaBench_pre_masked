
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * namenum; int * lock; } ;
typedef TYPE_1__ OSSL_NAMEMAP ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

OSSL_NAMEMAP *FUNC_4(void)
{
    OSSL_NAMEMAP *VAR_2;

    if ((VAR_2 = FUNC_1(sizeof(*VAR_2))) != ((void*)0)
        && (VAR_2->lock = FUNC_0()) != ((void*)0)
        && (VAR_2->namenum =
            FUNC_2(VAR_1, VAR_0)) != ((void*)0))
        return VAR_2;

    FUNC_3(VAR_2);
    return ((void*)0);
}
