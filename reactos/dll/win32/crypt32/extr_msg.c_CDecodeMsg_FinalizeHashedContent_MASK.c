
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int hash; } ;
struct TYPE_14__ {int cbData; int pbData; } ;
struct TYPE_13__ {int open_flags; } ;
struct TYPE_18__ {TYPE_3__ u; int properties; TYPE_2__ detached_data; TYPE_1__ base; int crypt_prov; } ;
struct TYPE_17__ {int pszObjId; } ;
struct TYPE_16__ {int cbData; int pbData; } ;
typedef int DWORD ;
typedef int CRYPT_DER_BLOB ;
typedef TYPE_4__ CRYPT_DATA_BLOB ;
typedef TYPE_5__ CRYPT_ALGORITHM_IDENTIFIER ;
typedef TYPE_6__ CDecodeMsg ;
typedef scalar_t__ BOOL ;
typedef int ALG_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*,int ,int ,TYPE_5__*,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static BOOL FUNC_8(CDecodeMsg *VAR_4,
 CRYPT_DER_BLOB *VAR_5)
{
    CRYPT_ALGORITHM_IDENTIFIER *VAR_6 = ((void*)0);
    DWORD VAR_7 = 0;
    ALG_ID VAR_8 = 0;
    BOOL VAR_9;

    FUNC_6(VAR_4, VAR_3, 0, ((void*)0), &VAR_7);
    VAR_6 = FUNC_4(VAR_7);
    VAR_9 = FUNC_6(VAR_4, VAR_3, 0, VAR_6,
     &VAR_7);
    if (VAR_9)
        VAR_8 = FUNC_0(VAR_6->pszObjId);

    if (!VAR_4->crypt_prov)
    {
        VAR_4->crypt_prov = FUNC_7(VAR_8);
        if (VAR_4->crypt_prov)
            VAR_4->base.open_flags &= ~VAR_1;
    }

    VAR_9 = FUNC_2(VAR_4->crypt_prov, VAR_8, 0, 0, &VAR_4->u.hash);
    if (VAR_9)
    {
        CRYPT_DATA_BLOB VAR_10;

        if (VAR_4->base.open_flags & VAR_2)
        {



            VAR_10.pbData = VAR_4->detached_data.pbData;
            VAR_10.cbData = VAR_4->detached_data.cbData;
        }
        else
            VAR_9 = FUNC_1(VAR_4->properties,
             VAR_0, &VAR_10);
        if (VAR_9)
            VAR_9 = FUNC_3(VAR_4->u.hash, VAR_10.pbData, VAR_10.cbData, 0);
    }
    FUNC_5(VAR_6);
    return VAR_9;
}
