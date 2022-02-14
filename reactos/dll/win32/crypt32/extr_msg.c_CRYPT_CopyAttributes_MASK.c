
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cValue; int * rgValue; scalar_t__ pszObjId; } ;
struct TYPE_5__ {int cAttr; TYPE_2__* rgAttr; } ;
typedef int * PCRYPT_DATA_BLOB ;
typedef scalar_t__ LPSTR ;
typedef scalar_t__ LPBYTE ;
typedef size_t DWORD ;
typedef int CRYPT_DATA_BLOB ;
typedef TYPE_1__ CRYPT_ATTRIBUTES ;
typedef TYPE_2__ CRYPT_ATTRIBUTE ;


 int FUNC_0 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(CRYPT_ATTRIBUTES *VAR_0,
 const CRYPT_ATTRIBUTES *VAR_1, LPBYTE *VAR_2)
{
    VAR_0->cAttr = VAR_1->cAttr;
    if (VAR_1->cAttr)
    {
        DWORD VAR_3;

        *VAR_2 = FUNC_1(*VAR_2);
        VAR_0->rgAttr = (CRYPT_ATTRIBUTE *)*VAR_2;
        *VAR_2 += VAR_1->cAttr * sizeof(CRYPT_ATTRIBUTE);
        for (VAR_3 = 0; VAR_3 < VAR_1->cAttr; VAR_3++)
        {
            if (VAR_1->rgAttr[VAR_3].pszObjId)
            {
                VAR_0->rgAttr[VAR_3].pszObjId = (LPSTR)*VAR_2;
                FUNC_2(VAR_0->rgAttr[VAR_3].pszObjId, VAR_1->rgAttr[VAR_3].pszObjId);
                *VAR_2 += FUNC_3(VAR_1->rgAttr[VAR_3].pszObjId) + 1;
            }
            if (VAR_1->rgAttr[VAR_3].cValue)
            {
                DWORD VAR_4;

                VAR_0->rgAttr[VAR_3].cValue = VAR_1->rgAttr[VAR_3].cValue;
                *VAR_2 = FUNC_1(*VAR_2);
                VAR_0->rgAttr[VAR_3].rgValue = (PCRYPT_DATA_BLOB)*VAR_2;
                *VAR_2 += VAR_1->rgAttr[VAR_3].cValue * sizeof(CRYPT_DATA_BLOB);
                for (VAR_4 = 0; VAR_4 < VAR_1->rgAttr[VAR_3].cValue; VAR_4++)
                    FUNC_0(&VAR_0->rgAttr[VAR_3].rgValue[VAR_4],
                     &VAR_1->rgAttr[VAR_3].rgValue[VAR_4], VAR_2);
            }
        }
    }
}
