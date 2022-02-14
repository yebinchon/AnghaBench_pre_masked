
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_7__ {int byKey; int byName; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ value; } ;
struct TYPE_6__ {TYPE_3__ responderId; } ;
struct TYPE_9__ {TYPE_1__ tbsResponseData; } ;
typedef TYPE_3__ OCSP_RESPID ;
typedef TYPE_4__ OCSP_BASICRESP ;
typedef int ASN1_OCTET_STRING ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ) ;

int FUNC_2(const OCSP_BASICRESP *VAR_2,
                      ASN1_OCTET_STRING **VAR_3,
                      X509_NAME **VAR_4)
{
    const OCSP_RESPID *VAR_5 = &VAR_2->tbsResponseData.responderId;

    if (VAR_5->type == VAR_1) {
        *VAR_4 = FUNC_1(VAR_5->value.byName);
        *VAR_3 = ((void*)0);
    } else if (VAR_5->type == VAR_0) {
        *VAR_3 = FUNC_0(VAR_5->value.byKey);
        *VAR_4 = ((void*)0);
    } else {
        return 0;
    }
    if (*VAR_4 == ((void*)0) && *VAR_3 == ((void*)0))
        return 0;
    return 1;
}
