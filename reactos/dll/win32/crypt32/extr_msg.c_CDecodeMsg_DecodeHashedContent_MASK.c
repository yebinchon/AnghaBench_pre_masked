
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {int open_flags; } ;
struct TYPE_20__ {int properties; TYPE_1__ base; } ;
struct TYPE_19__ {int cbData; int pbData; } ;
struct TYPE_17__ {int cbData; int const* pbData; } ;
struct TYPE_14__ {scalar_t__ cbData; } ;
struct TYPE_16__ {TYPE_13__ Content; scalar_t__ pszObjId; } ;
struct TYPE_18__ {TYPE_3__ hash; TYPE_2__ ContentInfo; int DigestAlgorithm; int version; } ;
typedef int DWORD ;
typedef TYPE_4__ CRYPT_DIGESTED_DATA ;
typedef TYPE_5__ CRYPT_DER_BLOB ;
typedef TYPE_6__ CDecodeMsg ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_6__*,TYPE_13__*) ;
 int FUNC_1 (TYPE_6__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,TYPE_4__*,int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int const*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_6(CDecodeMsg *VAR_7,
 const CRYPT_DER_BLOB *VAR_8)
{
    BOOL VAR_9;
    CRYPT_DIGESTED_DATA *VAR_10;
    DWORD VAR_11;

    VAR_9 = FUNC_2(VAR_8->pbData, VAR_8->cbData,
     VAR_6, ((void*)0), (CRYPT_DIGESTED_DATA *)&VAR_10,
     &VAR_11);
    if (VAR_9)
    {
        FUNC_3(VAR_7->properties, VAR_5,
         (const BYTE *)&VAR_10->version, sizeof(VAR_10->version));
        FUNC_1(VAR_7, VAR_2,
         &VAR_10->DigestAlgorithm);
        FUNC_3(VAR_7->properties,
         VAR_4,
         (const BYTE *)VAR_10->ContentInfo.pszObjId,
         VAR_10->ContentInfo.pszObjId ?
         FUNC_5(VAR_10->ContentInfo.pszObjId) + 1 : 0);
        if (!(VAR_7->base.open_flags & VAR_1))
        {
            if (VAR_10->ContentInfo.Content.cbData)
                FUNC_0(VAR_7,
                 &VAR_10->ContentInfo.Content);
            else
                FUNC_3(VAR_7->properties,
                 VAR_0, ((void*)0), 0);
        }
        FUNC_3(VAR_7->properties, VAR_3,
         VAR_10->hash.pbData, VAR_10->hash.cbData);
        FUNC_4(VAR_10);
    }
    return VAR_9;
}
