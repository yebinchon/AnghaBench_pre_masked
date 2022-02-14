
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pbData; } ;
struct TYPE_5__ {scalar_t__ pszObjId; TYPE_1__ Parameters; } ;
typedef scalar_t__ LPSTR ;
typedef TYPE_2__ CRYPT_ALGORITHM_IDENTIFIER ;
typedef int BYTE ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(CRYPT_ALGORITHM_IDENTIFIER *VAR_0)
{
    VAR_0->pszObjId = (LPSTR)((BYTE *)VAR_0 + sizeof(CRYPT_ALGORITHM_IDENTIFIER));
    VAR_0->Parameters.pbData = (BYTE *)VAR_0->pszObjId + FUNC_0(VAR_0->pszObjId) + 1;
}
