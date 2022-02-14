
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int subjectKeyIdentifier; int issuerAndSerialNumber; } ;
struct TYPE_5__ {int type; TYPE_1__ d; } ;
typedef TYPE_2__ CMS_SignerIdentifier ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(CMS_SignerIdentifier *VAR_2, X509 *VAR_3, int VAR_4)
{
    switch (VAR_4) {
    case 129:
        if (!FUNC_1(&VAR_2->d.issuerAndSerialNumber, VAR_3))
            return 0;
        break;

    case 128:
        if (!FUNC_2(&VAR_2->d.subjectKeyIdentifier, VAR_3))
            return 0;
        break;

    default:
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_2->type = VAR_4;

    return 1;
}
