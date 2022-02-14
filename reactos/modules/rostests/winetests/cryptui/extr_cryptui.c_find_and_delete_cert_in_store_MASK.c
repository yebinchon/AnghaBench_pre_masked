
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int SerialNumber; int Issuer; } ;
struct TYPE_11__ {TYPE_1__ IssuerSerialNumber; } ;
struct TYPE_14__ {TYPE_2__ u; int dwIdChoice; } ;
struct TYPE_13__ {TYPE_3__* pCertInfo; } ;
struct TYPE_12__ {int SerialNumber; int Issuer; } ;
typedef TYPE_4__* PCCERT_CONTEXT ;
typedef int HCERTSTORE ;
typedef int CRYPT_INTEGER_BLOB ;
typedef int CERT_NAME_BLOB ;
typedef TYPE_5__ CERT_ID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ,int ,int ,int ,TYPE_5__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static BOOL FUNC_3(HCERTSTORE VAR_5, PCCERT_CONTEXT VAR_6)
{
    CERT_ID VAR_7;
    PCCERT_CONTEXT VAR_8;

    VAR_7.dwIdChoice = VAR_1;
    FUNC_2(&VAR_7.u.IssuerSerialNumber.Issuer,
     &VAR_6->pCertInfo->Issuer, sizeof(CERT_NAME_BLOB));
    FUNC_2(&VAR_7.u.IssuerSerialNumber.SerialNumber,
     &VAR_6->pCertInfo->SerialNumber, sizeof(CRYPT_INTEGER_BLOB));
    VAR_8 = FUNC_1(VAR_5, VAR_4, 0,
     VAR_0, &VAR_7, ((void*)0));
    if (!VAR_8)
        return VAR_2;

    FUNC_0(VAR_8);

    return VAR_3;
}
