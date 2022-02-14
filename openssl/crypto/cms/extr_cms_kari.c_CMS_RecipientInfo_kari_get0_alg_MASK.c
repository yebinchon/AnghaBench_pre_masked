
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_6__ {TYPE_1__* kari; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_5__ {int * ukm; int * keyEncryptionAlgorithm; } ;
typedef TYPE_3__ CMS_RecipientInfo ;
typedef int ASN1_OCTET_STRING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(CMS_RecipientInfo *VAR_3,
                                    X509_ALGOR **VAR_4,
                                    ASN1_OCTET_STRING **VAR_5)
{
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0,
               VAR_2);
        return 0;
    }
    if (VAR_4)
        *VAR_4 = VAR_3->d.kari->keyEncryptionAlgorithm;
    if (VAR_5)
        *VAR_5 = VAR_3->d.kari->ukm;
    return 1;
}
