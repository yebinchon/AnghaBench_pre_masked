
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pszObjId; } ;
struct TYPE_12__ {int cbSize; scalar_t__ hCryptProv; TYPE_1__ HashAlgorithm; } ;
struct TYPE_10__ {int * pbData; scalar_t__ cbData; } ;
struct TYPE_11__ {int hash; TYPE_2__ data; scalar_t__ prov; } ;
typedef int PCMSG_STREAM_INFO ;
typedef int LPSTR ;
typedef scalar_t__ HCRYPTPROV ;
typedef TYPE_3__* HCRYPTMSG ;
typedef int DWORD ;
typedef int CryptMsgBase ;
typedef TYPE_4__ CMSG_HASHED_ENCODE_INFO ;
typedef TYPE_3__ CHashEncodeMsg ;
typedef int ALG_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static HCRYPTMSG FUNC_7(DWORD VAR_7, const void *VAR_8,
 LPSTR VAR_9, PCMSG_STREAM_INFO VAR_10)
{
    CHashEncodeMsg *VAR_11;
    const CMSG_HASHED_ENCODE_INFO *VAR_12 = VAR_8;
    HCRYPTPROV VAR_13;
    ALG_ID VAR_14;

    if (VAR_12->cbSize != sizeof(CMSG_HASHED_ENCODE_INFO))
    {
        FUNC_6(VAR_6);
        return ((void*)0);
    }
    if (!(VAR_14 = FUNC_0(VAR_12->HashAlgorithm.pszObjId)))
    {
        FUNC_6(VAR_5);
        return ((void*)0);
    }
    if (VAR_12->hCryptProv)
        VAR_13 = VAR_12->hCryptProv;
    else
    {
        VAR_13 = FUNC_5(VAR_14);
        if (!VAR_13)
        {
            FUNC_6(VAR_6);
            return ((void*)0);
        }
        VAR_7 &= ~VAR_3;
    }
    VAR_11 = FUNC_2(sizeof(CHashEncodeMsg));
    if (VAR_11)
    {
        FUNC_3((CryptMsgBase *)VAR_11, VAR_7, VAR_10,
         VAR_0, VAR_1, VAR_2,
         VAR_4);
        VAR_11->prov = VAR_13;
        VAR_11->data.cbData = 0;
        VAR_11->data.pbData = ((void*)0);
        if (!FUNC_1(VAR_13, VAR_14, 0, 0, &VAR_11->hash))
        {
            FUNC_4(VAR_11);
            VAR_11 = ((void*)0);
        }
    }
    return VAR_11;
}
