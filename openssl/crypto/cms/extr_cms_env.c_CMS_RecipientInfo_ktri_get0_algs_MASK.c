
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_ALGOR ;
typedef int X509 ;
struct TYPE_7__ {int * keyEncryptionAlgorithm; int * recip; int * pkey; } ;
struct TYPE_5__ {TYPE_3__* ktri; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ d; } ;
typedef int EVP_PKEY ;
typedef TYPE_2__ CMS_RecipientInfo ;
typedef TYPE_3__ CMS_KeyTransRecipientInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(CMS_RecipientInfo *VAR_3,
                                     EVP_PKEY **VAR_4, X509 **VAR_5,
                                     X509_ALGOR **VAR_6)
{
    CMS_KeyTransRecipientInfo *VAR_7;
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0,
               VAR_2);
        return 0;
    }

    VAR_7 = VAR_3->d.ktri;

    if (VAR_4)
        *VAR_4 = VAR_7->pkey;
    if (VAR_5)
        *VAR_5 = VAR_7->recip;
    if (VAR_6)
        *VAR_6 = VAR_7->keyEncryptionAlgorithm;
    return 1;
}
