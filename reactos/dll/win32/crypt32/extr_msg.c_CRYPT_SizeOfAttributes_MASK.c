
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cAttr; TYPE_2__* rgAttr; } ;
struct TYPE_6__ {int cValue; TYPE_1__* rgValue; scalar_t__ pszObjId; } ;
struct TYPE_5__ {scalar_t__ cbData; } ;
typedef size_t DWORD ;
typedef int CRYPT_DATA_BLOB ;
typedef TYPE_3__ CRYPT_ATTRIBUTES ;
typedef int CRYPT_ATTRIBUTE ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static DWORD FUNC_2(const CRYPT_ATTRIBUTES *VAR_0)
{
    DWORD VAR_1 = VAR_0->cAttr * sizeof(CRYPT_ATTRIBUTE), VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0->cAttr; VAR_2++)
    {
        if (VAR_0->rgAttr[VAR_2].pszObjId)
            VAR_1 += FUNC_1(VAR_0->rgAttr[VAR_2].pszObjId) + 1;

        VAR_1 = FUNC_0(VAR_1);
        VAR_1 += VAR_0->rgAttr[VAR_2].cValue * sizeof(CRYPT_DATA_BLOB);
        for (VAR_3 = 0; VAR_3 < VAR_0->rgAttr[VAR_2].cValue; VAR_3++)
            VAR_1 += VAR_0->rgAttr[VAR_2].rgValue[VAR_3].cbData;
    }

    VAR_1 = FUNC_0(VAR_1);
    return VAR_1;
}
