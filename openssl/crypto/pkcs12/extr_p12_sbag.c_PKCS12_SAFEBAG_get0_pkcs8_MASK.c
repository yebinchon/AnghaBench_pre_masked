
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_SIG ;
struct TYPE_4__ {int const* shkeybag; } ;
struct TYPE_5__ {TYPE_1__ value; int type; } ;
typedef TYPE_2__ PKCS12_SAFEBAG ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

const X509_SIG *FUNC_1(const PKCS12_SAFEBAG *VAR_1)
{
    if (FUNC_0(VAR_1->type) != VAR_0)
        return ((void*)0);
    return VAR_1->value.shkeybag;
}
