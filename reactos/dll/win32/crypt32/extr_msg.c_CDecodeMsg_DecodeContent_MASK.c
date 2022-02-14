
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int cbData; int pbData; } ;
struct TYPE_13__ {int type; TYPE_1__ msg_data; } ;
struct TYPE_12__ {int Content; int pszObjId; } ;
typedef int DWORD ;
typedef int CRYPT_DER_BLOB ;
typedef TYPE_2__ CRYPT_CONTENT_INFO ;
typedef TYPE_3__ CDecodeMsg ;
typedef int BOOL ;


 int FUNC_0 (TYPE_3__*,int const*) ;
 int FUNC_1 (TYPE_3__*,int const*) ;
 int FUNC_2 (TYPE_3__*,int const*) ;
 int FUNC_3 (TYPE_3__*,int const*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int *,TYPE_2__**,int*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static BOOL FUNC_8(CDecodeMsg *VAR_9, const CRYPT_DER_BLOB *VAR_10,
 DWORD VAR_11)
{
    BOOL VAR_12;

    switch (VAR_11)
    {
    case 131:
        if ((VAR_12 = FUNC_0(VAR_9, VAR_10)))
            VAR_9->type = 131;
        break;
    case 129:
        if ((VAR_12 = FUNC_2(VAR_9, VAR_10)))
            VAR_9->type = 129;
        break;
    case 130:
        if ((VAR_12 = FUNC_1(VAR_9, VAR_10)))
            VAR_9->type = 130;
        break;
    case 128:
        if ((VAR_12 = FUNC_3(VAR_9, VAR_10)))
            VAR_9->type = 128;
        break;
    default:
    {
        CRYPT_CONTENT_INFO *VAR_13;
        DWORD VAR_14;

        VAR_12 = FUNC_4(VAR_4, VAR_3,
         VAR_9->msg_data.pbData, VAR_9->msg_data.cbData, VAR_0,
         ((void*)0), &VAR_13, &VAR_14);
        if (VAR_12)
        {
            if (!FUNC_7(VAR_13->pszObjId, VAR_5))
                VAR_12 = FUNC_8(VAR_9, &VAR_13->Content, 131);
            else if (!FUNC_7(VAR_13->pszObjId, VAR_6))
                VAR_12 = FUNC_8(VAR_9, &VAR_13->Content,
                 129);
            else if (!FUNC_7(VAR_13->pszObjId, VAR_7))
                VAR_12 = FUNC_8(VAR_9, &VAR_13->Content,
                 130);
            else if (!FUNC_7(VAR_13->pszObjId, VAR_8))
                VAR_12 = FUNC_8(VAR_9, &VAR_13->Content,
                 128);
            else
            {
                FUNC_6(VAR_1);
                VAR_12 = VAR_2;
            }
            FUNC_5(VAR_13);
        }
    }
    }
    return VAR_12;
}
