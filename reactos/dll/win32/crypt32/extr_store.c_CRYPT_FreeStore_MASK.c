
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwMagic; scalar_t__ properties; } ;
typedef TYPE_1__ WINECRYPT_CERTSTORE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(WINECRYPT_CERTSTORE *VAR_0)
{
    if (VAR_0->properties)
        FUNC_0(VAR_0->properties);
    VAR_0->dwMagic = 0;
    FUNC_1(VAR_0);
}
