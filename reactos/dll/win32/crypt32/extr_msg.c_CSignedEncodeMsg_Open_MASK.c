
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_22__ {int cSignerInfo; int rgCrlEncoded; int cCrlEncoded; int rgCertEncoded; int cCertEncoded; int * signerKeySpec; struct TYPE_22__* rgSignerInfo; int version; } ;
struct TYPE_21__ {int cbSize; size_t cSigners; int rgCrlEncoded; int cCrlEncoded; int rgCertEncoded; int cCertEncoded; TYPE_10__* rgSigners; scalar_t__ cAttrCertEncoded; } ;
struct TYPE_17__ {TYPE_6__* info; scalar_t__ cSignerHandle; int * signerHandles; } ;
struct TYPE_18__ {int * pbData; scalar_t__ cbData; } ;
struct TYPE_20__ {TYPE_11__ msg_data; TYPE_1__ data; int * innerOID; } ;
struct TYPE_19__ {scalar_t__ dwIdChoice; } ;
struct TYPE_16__ {int dwKeySpec; int hCryptProv; TYPE_2__ SignerId; } ;
typedef int PCMSG_STREAM_INFO ;
typedef int LPCSTR ;
typedef TYPE_3__* HCRYPTMSG ;
typedef size_t DWORD ;
typedef int CryptMsgBase ;
typedef TYPE_3__ CSignedEncodeMsg ;
typedef int CRYPT_SIGNED_INFO ;
typedef TYPE_5__ CMSG_SIGNED_ENCODE_INFO_WITH_CMS ;
typedef int CMSG_SIGNED_ENCODE_INFO ;
typedef int CMSG_CMS_SIGNER_INFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_11__*) ;
 scalar_t__ FUNC_4 (TYPE_11__*,size_t,int *,size_t*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_10__*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,size_t,int ,int (*) (TYPE_3__*),int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (TYPE_6__*,int ,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static HCRYPTMSG FUNC_15(DWORD VAR_10,
 const void *VAR_11, LPCSTR VAR_12,
 PCMSG_STREAM_INFO VAR_13)
{
    const CMSG_SIGNED_ENCODE_INFO_WITH_CMS *VAR_14 = VAR_11;
    DWORD VAR_15;
    CSignedEncodeMsg *VAR_16;

    if (VAR_14->cbSize != sizeof(CMSG_SIGNED_ENCODE_INFO) &&
     VAR_14->cbSize != sizeof(CMSG_SIGNED_ENCODE_INFO_WITH_CMS))
    {
        FUNC_11(VAR_7);
        return ((void*)0);
    }
    if (VAR_14->cbSize == sizeof(CMSG_SIGNED_ENCODE_INFO_WITH_CMS) &&
     VAR_14->cAttrCertEncoded)
    {
        FUNC_10("CMSG_SIGNED_ENCODE_INFO with CMS fields unsupported\n");
        return ((void*)0);
    }
    for (VAR_15 = 0; VAR_15 < VAR_14->cSigners; VAR_15++)
        if (!FUNC_1(&VAR_14->rgSigners[VAR_15]))
            return ((void*)0);
    VAR_16 = FUNC_6(sizeof(CSignedEncodeMsg));
    if (VAR_16)
    {
        BOOL VAR_17 = VAR_9;

        FUNC_8((CryptMsgBase *)VAR_16, VAR_10, VAR_13,
         FUNC_2, VAR_5,
         VAR_6, VAR_4);
        if (VAR_12)
        {
            VAR_16->innerOID = FUNC_6(FUNC_14(VAR_12) + 1);
            if (VAR_16->innerOID)
                FUNC_13(VAR_16->innerOID, VAR_12);
            else
                VAR_17 = VAR_8;
        }
        else
            VAR_16->innerOID = ((void*)0);
        VAR_16->data.cbData = 0;
        VAR_16->data.pbData = ((void*)0);
        if (VAR_17)
            VAR_16->msg_data.info = FUNC_6(sizeof(CRYPT_SIGNED_INFO));
        else
            VAR_16->msg_data.info = ((void*)0);
        if (VAR_16->msg_data.info)
        {
            FUNC_12(VAR_16->msg_data.info, 0, sizeof(CRYPT_SIGNED_INFO));
            VAR_16->msg_data.info->version = VAR_2;
        }
        else
            VAR_17 = VAR_8;
        if (VAR_17)
        {
            if (VAR_14->cSigners)
            {
                VAR_16->msg_data.info->rgSignerInfo =
                 FUNC_6(VAR_14->cSigners * sizeof(CMSG_CMS_SIGNER_INFO));
                if (VAR_16->msg_data.info->rgSignerInfo)
                {
                    VAR_16->msg_data.info->cSignerInfo = VAR_14->cSigners;
                    FUNC_12(VAR_16->msg_data.info->rgSignerInfo, 0,
                     VAR_16->msg_data.info->cSignerInfo *
                     sizeof(CMSG_CMS_SIGNER_INFO));
                    VAR_17 = FUNC_3(&VAR_16->msg_data);
                    VAR_16->msg_data.info->signerKeySpec = FUNC_6(VAR_14->cSigners * sizeof(DWORD));
                    if (!VAR_16->msg_data.info->signerKeySpec)
                        VAR_17 = VAR_8;
                    for (VAR_15 = 0; VAR_17 && VAR_15 < VAR_16->msg_data.info->cSignerInfo; VAR_15++)
                    {
                        if (VAR_14->rgSigners[VAR_15].SignerId.dwIdChoice ==
                         VAR_0)
                            VAR_16->msg_data.info->version = VAR_3;
                        VAR_17 = FUNC_5(
                         &VAR_16->msg_data.info->rgSignerInfo[VAR_15],
                         &VAR_14->rgSigners[VAR_15]);
                        if (VAR_17)
                        {
                            VAR_17 = FUNC_4(
                             &VAR_16->msg_data, VAR_15, &VAR_14->rgSigners[VAR_15].hCryptProv, &VAR_10);
                            if (VAR_10 & VAR_1)
                                FUNC_9(VAR_14->rgSigners[VAR_15].hCryptProv,
                                 0);
                        }
                        VAR_16->msg_data.info->signerKeySpec[VAR_15] =
                         VAR_14->rgSigners[VAR_15].dwKeySpec;
                    }
                }
                else
                    VAR_17 = VAR_8;
            }
            else
            {
                VAR_16->msg_data.info->cSignerInfo = 0;
                VAR_16->msg_data.signerHandles = ((void*)0);
                VAR_16->msg_data.cSignerHandle = 0;
            }
        }
        if (VAR_17)
            VAR_17 = FUNC_0(&VAR_16->msg_data.info->cCertEncoded,
             &VAR_16->msg_data.info->rgCertEncoded, VAR_14->cCertEncoded,
             VAR_14->rgCertEncoded);
        if (VAR_17)
            VAR_17 = FUNC_0(&VAR_16->msg_data.info->cCrlEncoded,
             &VAR_16->msg_data.info->rgCrlEncoded, VAR_14->cCrlEncoded,
             VAR_14->rgCrlEncoded);
        if (!VAR_17)
        {
            FUNC_2(VAR_16);
            FUNC_7(VAR_16);
            VAR_16 = ((void*)0);
        }
    }
    return VAR_16;
}
