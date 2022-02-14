
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nullParams ;
struct TYPE_10__ {int properties; } ;
struct TYPE_8__ {int cbData; int * pbData; } ;
struct TYPE_9__ {TYPE_1__ Parameters; scalar_t__ pszObjId; } ;
typedef scalar_t__ LPSTR ;
typedef int DWORD ;
typedef TYPE_2__ CRYPT_ALGORITHM_IDENTIFIER ;
typedef TYPE_3__ CDecodeMsg ;
typedef int BYTE ;



 int FUNC_0 (int ,int,int *,int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(CDecodeMsg *VAR_0, DWORD VAR_1,
 const CRYPT_ALGORITHM_IDENTIFIER *VAR_2)
{
    static const BYTE VAR_3[] = { 128, 0 };
    CRYPT_ALGORITHM_IDENTIFIER *VAR_4;
    DWORD VAR_5 = sizeof(CRYPT_ALGORITHM_IDENTIFIER);


    VAR_5 += FUNC_6(VAR_2->pszObjId) + 1;
    VAR_5 += VAR_2->Parameters.cbData;
    VAR_4 = FUNC_1(VAR_5);
    if (VAR_4)
    {
        VAR_4->pszObjId =
         (LPSTR)((BYTE *)VAR_4 + sizeof(CRYPT_ALGORITHM_IDENTIFIER));
        FUNC_5(VAR_4->pszObjId, VAR_2->pszObjId);
        VAR_4->Parameters.pbData = (BYTE *)VAR_4->pszObjId + FUNC_6(VAR_2->pszObjId)
         + 1;

        if (VAR_2->Parameters.cbData == sizeof(VAR_3) &&
         !FUNC_3(VAR_2->Parameters.pbData, VAR_3, sizeof(VAR_3)))
        {
            VAR_4->Parameters.cbData = 0;
            VAR_5 -= sizeof(VAR_3);
        }
        else
            VAR_4->Parameters.cbData = VAR_2->Parameters.cbData;
        if (VAR_4->Parameters.cbData)
            FUNC_4(VAR_4->Parameters.pbData, VAR_2->Parameters.pbData,
             VAR_2->Parameters.cbData);
        FUNC_0(VAR_0->properties, VAR_1, (BYTE *)VAR_4,
         VAR_5);
        FUNC_2(VAR_4);
    }
}
