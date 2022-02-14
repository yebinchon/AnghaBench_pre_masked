
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* info; int signerHandles; } ;
struct TYPE_15__ {TYPE_2__ signed_data; } ;
struct TYPE_21__ {TYPE_3__ u; } ;
struct TYPE_20__ {int SubjectPublicKeyInfo; int SerialNumber; int Issuer; } ;
struct TYPE_16__ {int SerialNumber; int Issuer; } ;
struct TYPE_17__ {TYPE_4__ IssuerSerialNumber; } ;
struct TYPE_18__ {scalar_t__ dwIdChoice; TYPE_5__ u; } ;
struct TYPE_19__ {TYPE_6__ SignerId; } ;
struct TYPE_13__ {size_t cSignerInfo; TYPE_7__* rgSignerInfo; } ;
typedef TYPE_7__* PCMSG_CMS_SIGNER_INFO ;
typedef TYPE_8__* PCERT_INFO ;
typedef size_t DWORD ;
typedef TYPE_9__ CDecodeMsg ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_9__*,int ,size_t,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,size_t) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_5(CDecodeMsg *VAR_5, PCERT_INFO VAR_6)
{
    BOOL VAR_7 = VAR_2;
    DWORD VAR_8;

    if (!VAR_5->u.signed_data.signerHandles)
    {
        FUNC_4(VAR_3);
        return VAR_2;
    }
    for (VAR_8 = 0; !VAR_7 && VAR_8 < VAR_5->u.signed_data.info->cSignerInfo; VAR_8++)
    {
        PCMSG_CMS_SIGNER_INFO VAR_9 =
         &VAR_5->u.signed_data.info->rgSignerInfo[VAR_8];

        if (VAR_9->SignerId.dwIdChoice == VAR_0)
        {
            VAR_7 = FUNC_1(VAR_4,
             &VAR_9->SignerId.u.IssuerSerialNumber.Issuer,
             &VAR_6->Issuer);
            if (VAR_7)
            {
                VAR_7 = FUNC_2(
                 &VAR_9->SignerId.u.IssuerSerialNumber.SerialNumber,
                 &VAR_6->SerialNumber);
                if (VAR_7)
                    break;
            }
        }
        else
        {
            FUNC_3("signer %d: unimplemented for key id\n", VAR_8);
        }
    }
    if (VAR_7)
        VAR_7 = FUNC_0(VAR_5, 0, VAR_8,
         &VAR_6->SubjectPublicKeyInfo);
    else
        FUNC_4(VAR_1);

    return VAR_7;
}
