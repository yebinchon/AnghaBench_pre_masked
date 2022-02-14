
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Parameters; scalar_t__ pszObjId; } ;
typedef TYPE_1__ CRYPT_ALGORITHM_IDENTIFIER ;
typedef int BOOL ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_4(CRYPT_ALGORITHM_IDENTIFIER *VAR_1,
 const CRYPT_ALGORITHM_IDENTIFIER *VAR_2)
{
    VAR_1->pszObjId = FUNC_1(FUNC_3(VAR_2->pszObjId) + 1);
    if (VAR_1->pszObjId)
    {
        FUNC_2(VAR_1->pszObjId, VAR_2->pszObjId);
        return FUNC_0(&VAR_1->Parameters, &VAR_2->Parameters);
    }
    else
        return VAR_0;
}
