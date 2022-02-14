
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hash; } ;
struct TYPE_8__ {int properties; TYPE_1__ u; int type; } ;
struct TYPE_7__ {int cbData; int * pbData; } ;
typedef int DWORD ;
typedef TYPE_2__ CRYPT_DATA_BLOB ;
typedef TYPE_3__ CDecodeMsg ;
typedef int BOOL ;





 int FUNC_0 (void*,int*,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int,TYPE_2__*) ;
 int FUNC_3 (int ,int ,void*,int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(CDecodeMsg *VAR_3, DWORD VAR_4,
 DWORD VAR_5, void *VAR_6, DWORD *VAR_7)
{
    BOOL VAR_8 = VAR_1;

    switch (VAR_4)
    {
    case 128:
        VAR_8 = FUNC_0(VAR_6, VAR_7, &VAR_3->type, sizeof(VAR_3->type));
        break;
    case 129:
    {
        CRYPT_DATA_BLOB VAR_9;

        VAR_8 = FUNC_2(VAR_3->properties, VAR_4,
         &VAR_9);
        if (VAR_8)
        {
            VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_9.pbData, VAR_9.cbData);
            if (VAR_8 && VAR_6)
                FUNC_1(VAR_6);
        }
        else
            FUNC_4(VAR_0);
        break;
    }
    case 130:
        VAR_8 = FUNC_3(VAR_3->u.hash, VAR_2, VAR_6, VAR_7, 0);
        break;
    default:
    {
        CRYPT_DATA_BLOB VAR_10;

        VAR_8 = FUNC_2(VAR_3->properties, VAR_4,
         &VAR_10);
        if (VAR_8)
            VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_10.pbData, VAR_10.cbData);
        else
            FUNC_4(VAR_0);
    }
    }
    return VAR_8;
}
