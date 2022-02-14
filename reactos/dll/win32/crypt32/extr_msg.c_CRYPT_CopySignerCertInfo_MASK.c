
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ cbData; } ;
struct TYPE_13__ {int SerialNumber; int Issuer; } ;
struct TYPE_9__ {TYPE_8__ SerialNumber; TYPE_8__ Issuer; } ;
struct TYPE_10__ {int KeyId; TYPE_1__ IssuerSerialNumber; } ;
struct TYPE_11__ {scalar_t__ dwIdChoice; TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_3__ SignerId; } ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ CMSG_CMS_SIGNER_INFO ;
typedef TYPE_5__ CERT_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_8__*,int **) ;
 int FUNC_1 (int *,int *,int *,scalar_t__,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,void*,...) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_6(void *VAR_4, DWORD *VAR_5,
 const CMSG_CMS_SIGNER_INFO *VAR_6)
{
    DWORD VAR_7 = sizeof(CERT_INFO), VAR_8 = 0;
    BOOL VAR_9;

    FUNC_4("(%p, %d, %p)\n", VAR_4, VAR_4 ? *VAR_5 : 0, VAR_6);

    if (VAR_6->SignerId.dwIdChoice == VAR_0)
    {
        VAR_7 += VAR_6->SignerId.u.IssuerSerialNumber.Issuer.cbData;
        VAR_7 += VAR_6->SignerId.u.IssuerSerialNumber.SerialNumber.cbData;
    }
    else
    {
        VAR_8 = FUNC_2(&VAR_6->SignerId.u.KeyId);
        VAR_7 += VAR_8;
    }
    if (!VAR_4)
    {
        *VAR_5 = VAR_7;
        VAR_9 = VAR_3;
    }
    else if (*VAR_5 < VAR_7)
    {
        *VAR_5 = VAR_7;
        FUNC_3(VAR_1);
        VAR_9 = VAR_2;
    }
    else
    {
        LPBYTE VAR_10 = (BYTE *)VAR_4 + sizeof(CERT_INFO);
        CERT_INFO *VAR_11 = VAR_4;

        FUNC_5(VAR_11, 0, sizeof(CERT_INFO));
        if (VAR_6->SignerId.dwIdChoice == VAR_0)
        {
            FUNC_0(&VAR_11->Issuer,
             &VAR_6->SignerId.u.IssuerSerialNumber.Issuer, &VAR_10);
            FUNC_0(&VAR_11->SerialNumber,
             &VAR_6->SignerId.u.IssuerSerialNumber.SerialNumber, &VAR_10);
            VAR_9 = VAR_3;
        }
        else
            VAR_9 = FUNC_1(&VAR_11->Issuer, &VAR_11->SerialNumber,
             &VAR_6->SignerId.u.KeyId, VAR_8, &VAR_10);
    }
    FUNC_4("returning %d\n", VAR_9);
    return VAR_9;
}
