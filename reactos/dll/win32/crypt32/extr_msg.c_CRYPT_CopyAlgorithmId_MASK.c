
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Parameters; scalar_t__ pszObjId; } ;
typedef scalar_t__ LPSTR ;
typedef scalar_t__ LPBYTE ;
typedef TYPE_1__ CRYPT_ALGORITHM_IDENTIFIER ;


 int FUNC_0 (int *,int *,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(CRYPT_ALGORITHM_IDENTIFIER *VAR_0,
 const CRYPT_ALGORITHM_IDENTIFIER *VAR_1, LPBYTE *VAR_2)
{
    if (VAR_1->pszObjId)
    {
        VAR_0->pszObjId = (LPSTR)*VAR_2;
        FUNC_1(VAR_0->pszObjId, VAR_1->pszObjId);
        *VAR_2 += FUNC_2(VAR_0->pszObjId) + 1;
    }
    FUNC_0(&VAR_0->Parameters, &VAR_1->Parameters, VAR_2);
}
