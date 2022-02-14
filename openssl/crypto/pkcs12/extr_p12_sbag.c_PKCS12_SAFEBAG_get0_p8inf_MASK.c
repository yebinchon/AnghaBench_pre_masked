
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int const* keybag; } ;
struct TYPE_6__ {TYPE_1__ value; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ PKCS12_SAFEBAG ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*) ;

const PKCS8_PRIV_KEY_INFO *FUNC_1(const PKCS12_SAFEBAG *VAR_1)
{
    if (FUNC_0(VAR_1) != VAR_0)
        return ((void*)0);
    return VAR_1->value.keybag;
}
