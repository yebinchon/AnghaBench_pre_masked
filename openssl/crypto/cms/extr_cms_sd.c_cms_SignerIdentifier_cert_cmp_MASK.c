
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int subjectKeyIdentifier; int issuerAndSerialNumber; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ d; } ;
typedef TYPE_2__ CMS_SignerIdentifier ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(CMS_SignerIdentifier *VAR_2, X509 *VAR_3)
{
    if (VAR_2->type == VAR_0)
        return FUNC_0(VAR_2->d.issuerAndSerialNumber, VAR_3);
    else if (VAR_2->type == VAR_1)
        return FUNC_1(VAR_2->d.subjectKeyIdentifier, VAR_3);
    else
        return -1;
}
