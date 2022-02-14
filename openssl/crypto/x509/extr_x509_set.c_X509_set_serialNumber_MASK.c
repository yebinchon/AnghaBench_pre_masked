
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int serialNumber; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(X509 *VAR_0, ASN1_INTEGER *VAR_1)
{
    ASN1_INTEGER *VAR_2;

    if (VAR_0 == ((void*)0))
        return 0;
    VAR_2 = &VAR_0->cert_info.serialNumber;
    if (VAR_2 != VAR_1)
        return FUNC_0(VAR_2, VAR_1);
    return 1;
}
