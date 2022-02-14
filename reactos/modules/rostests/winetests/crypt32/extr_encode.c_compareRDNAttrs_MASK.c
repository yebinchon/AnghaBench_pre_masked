
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwValueType; scalar_t__* pszObjId; } ;
typedef TYPE_1__ CERT_RDN_ATTR ;
typedef int CERT_NAME_VALUE ;


 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int,char*,scalar_t__*,...) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(const CERT_RDN_ATTR *VAR_0,
 const CERT_RDN_ATTR *VAR_1)
{
    if (VAR_0->pszObjId && *VAR_0->pszObjId)
    {
        FUNC_1(VAR_1->pszObjId != ((void*)0), "Expected OID %s, got NULL\n",
         VAR_0->pszObjId);
        if (VAR_1->pszObjId)
        {
            FUNC_1(!FUNC_2(VAR_1->pszObjId, VAR_0->pszObjId),
             "Got unexpected OID %s, expected %s\n", VAR_1->pszObjId,
             VAR_0->pszObjId);
        }
    }
    FUNC_0((const CERT_NAME_VALUE *)&VAR_0->dwValueType,
     (const CERT_NAME_VALUE *)&VAR_1->dwValueType);
}
