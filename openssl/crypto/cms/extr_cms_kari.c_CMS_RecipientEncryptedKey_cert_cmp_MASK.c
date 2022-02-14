
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {TYPE_1__* rKeyId; int issuerAndSerialNumber; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_8__ {TYPE_4__* rid; } ;
struct TYPE_6__ {int subjectKeyIdentifier; } ;
typedef TYPE_3__ CMS_RecipientEncryptedKey ;
typedef TYPE_4__ CMS_KeyAgreeRecipientIdentifier ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(CMS_RecipientEncryptedKey *VAR_2,
                                       X509 *VAR_3)
{
    CMS_KeyAgreeRecipientIdentifier *VAR_4 = VAR_2->rid;
    if (VAR_4->type == VAR_0)
        return FUNC_0(VAR_4->d.issuerAndSerialNumber, VAR_3);
    else if (VAR_4->type == VAR_1)
        return FUNC_1(VAR_4->d.rKeyId->subjectKeyIdentifier, VAR_3);
    else
        return -1;
}
