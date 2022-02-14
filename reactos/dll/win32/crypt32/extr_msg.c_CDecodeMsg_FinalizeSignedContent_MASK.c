
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {TYPE_3__* info; } ;
struct TYPE_16__ {TYPE_9__ signed_data; } ;
struct TYPE_13__ {int open_flags; } ;
struct TYPE_17__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_18__ {TYPE_4__ u; TYPE_1__ base; TYPE_5__ detached_data; int crypt_prov; } ;
struct TYPE_14__ {int pszObjId; TYPE_5__ Content; } ;
struct TYPE_15__ {scalar_t__ cSignerInfo; TYPE_2__ content; } ;
typedef scalar_t__ DWORD ;
typedef int CRYPT_DER_BLOB ;
typedef TYPE_5__ CRYPT_DATA_BLOB ;
typedef TYPE_6__ CDecodeMsg ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 scalar_t__ FUNC_1 (TYPE_9__*,scalar_t__,int *,int*) ;
 scalar_t__ FUNC_2 (TYPE_9__*,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,scalar_t__,int ,int *,TYPE_5__**,scalar_t__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_6(CDecodeMsg *VAR_7,
 CRYPT_DER_BLOB *VAR_8)
{
    BOOL VAR_9;
    DWORD VAR_10, VAR_11;

    VAR_9 = FUNC_0(&VAR_7->u.signed_data);
    for (VAR_10 = 0; VAR_9 && VAR_10 < VAR_7->u.signed_data.info->cSignerInfo; VAR_10++)
        VAR_9 = FUNC_1(&VAR_7->u.signed_data, VAR_10,
         &VAR_7->crypt_prov, &VAR_7->base.open_flags);
    if (VAR_9)
    {
        CRYPT_DATA_BLOB *VAR_12;






        if (VAR_7->base.open_flags & VAR_0)
            VAR_12 = &VAR_7->detached_data;
        else
            VAR_12 = &VAR_7->u.signed_data.info->content.Content;
        if (VAR_12->cbData)
        {



            if (!(VAR_7->base.open_flags & VAR_0) &&
             !FUNC_5(VAR_7->u.signed_data.info->content.pszObjId,
             VAR_6))
            {
                CRYPT_DATA_BLOB *VAR_13;

                VAR_9 = FUNC_3(VAR_4,
                 VAR_5, VAR_12->pbData, VAR_12->cbData,
                 VAR_1, ((void*)0), &VAR_13, &VAR_11);
                if (VAR_9)
                {
                    VAR_9 = FUNC_2(&VAR_7->u.signed_data,
                     VAR_13->pbData, VAR_13->cbData, VAR_2, VAR_3);
                    FUNC_4(VAR_13);
                }
            }
            else
                VAR_9 = FUNC_2(&VAR_7->u.signed_data,
                 VAR_12->pbData, VAR_12->cbData, VAR_2, VAR_3);
        }
    }
    return VAR_9;
}
