
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ EC_KEY_METHOD ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

EC_KEY_METHOD *FUNC_1(const EC_KEY_METHOD *VAR_1)
{
    EC_KEY_METHOD *VAR_2 = FUNC_0(sizeof(*VAR_1));

    if (VAR_2 == ((void*)0))
        return ((void*)0);
    if (VAR_1 != ((void*)0))
        *VAR_2 = *VAR_1;
    VAR_2->flags |= VAR_0;
    return VAR_2;
}
