
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cCapability; TYPE_2__* rgCapability; } ;
struct TYPE_6__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_7__ {TYPE_1__ Parameters; int pszObjId; } ;
typedef int LPCSTR ;
typedef size_t DWORD ;
typedef TYPE_3__ CRYPT_SMIME_CAPABILITIES ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int,char*,int ,size_t,...) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(LPCSTR VAR_0,
 const CRYPT_SMIME_CAPABILITIES *VAR_1, const CRYPT_SMIME_CAPABILITIES *VAR_2)
{
    DWORD VAR_3;

    FUNC_1(VAR_2->cCapability == VAR_1->cCapability,
     "%s: expected %d capabilities, got %d\n", VAR_0, VAR_1->cCapability,
     VAR_2->cCapability);
    for (VAR_3 = 0; VAR_3 < VAR_1->cCapability; VAR_3++)
    {
        FUNC_1(!FUNC_2(VAR_1->rgCapability[VAR_3].pszObjId,
         VAR_2->rgCapability[VAR_3].pszObjId), "%s[%d]: expected %s, got %s\n",
         VAR_0, VAR_3, VAR_1->rgCapability[VAR_3].pszObjId,
         VAR_2->rgCapability[VAR_3].pszObjId);
        FUNC_1(VAR_1->rgCapability[VAR_3].Parameters.cbData ==
         VAR_2->rgCapability[VAR_3].Parameters.cbData,
         "%s[%d]: expected %d bytes, got %d\n", VAR_0, VAR_3,
         VAR_1->rgCapability[VAR_3].Parameters.cbData,
         VAR_2->rgCapability[VAR_3].Parameters.cbData);
        if (VAR_1->rgCapability[VAR_3].Parameters.cbData)
            FUNC_1(!FUNC_0(VAR_1->rgCapability[VAR_3].Parameters.pbData,
             VAR_2->rgCapability[VAR_3].Parameters.pbData,
             VAR_1->rgCapability[VAR_3].Parameters.cbData),
             "%s[%d]: unexpected value\n", VAR_0, VAR_3);
    }
}
