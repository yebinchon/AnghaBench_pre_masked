
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_7__ {int rid; } ;
struct TYPE_5__ {TYPE_3__* ktri; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ d; } ;
typedef TYPE_2__ CMS_RecipientInfo ;
typedef TYPE_3__ CMS_KeyTransRecipientInfo ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_INTEGER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int **,int **,int **) ;

int FUNC_2(CMS_RecipientInfo *VAR_3,
                                          ASN1_OCTET_STRING **VAR_4,
                                          X509_NAME **VAR_5,
                                          ASN1_INTEGER **VAR_6)
{
    CMS_KeyTransRecipientInfo *VAR_7;
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0,
               VAR_2);
        return 0;
    }
    VAR_7 = VAR_3->d.ktri;

    return FUNC_1(VAR_7->rid, VAR_4, VAR_5, VAR_6);
}
