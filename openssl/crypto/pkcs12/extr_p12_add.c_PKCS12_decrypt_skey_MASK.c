
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shkeybag; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ PKCS12_SAFEBAG ;


 int * FUNC_0 (int ,char const*,int) ;

PKCS8_PRIV_KEY_INFO *FUNC_1(const PKCS12_SAFEBAG *VAR_0,
                                         const char *VAR_1, int VAR_2)
{
    return FUNC_0(VAR_0->value.shkeybag, VAR_1, VAR_2);
}
