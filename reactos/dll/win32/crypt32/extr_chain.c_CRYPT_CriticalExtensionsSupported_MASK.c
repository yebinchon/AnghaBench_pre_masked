
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pCertInfo; } ;
struct TYPE_6__ {size_t cExtension; TYPE_1__* rgExtension; } ;
struct TYPE_5__ {int pszObjId; scalar_t__ fCritical; } ;
typedef TYPE_3__* PCCERT_CONTEXT ;
typedef int LPCSTR ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static BOOL FUNC_3(PCCERT_CONTEXT VAR_10)
{
    BOOL VAR_11 = VAR_1;
    DWORD VAR_12;

    for (VAR_12 = 0; VAR_11 && VAR_12 < VAR_10->pCertInfo->cExtension; VAR_12++)
    {
        if (VAR_10->pCertInfo->rgExtension[VAR_12].fCritical)
        {
            LPCSTR VAR_13 = VAR_10->pCertInfo->rgExtension[VAR_12].pszObjId;

            if (!FUNC_2(VAR_13, VAR_2))
                VAR_11 = VAR_1;
            else if (!FUNC_2(VAR_13, VAR_3))
                VAR_11 = VAR_1;
            else if (!FUNC_2(VAR_13, VAR_7))
                VAR_11 = VAR_1;
            else if (!FUNC_2(VAR_13, VAR_6))
                VAR_11 = VAR_1;
            else if (!FUNC_2(VAR_13, VAR_8))
                VAR_11 = VAR_1;
            else if (!FUNC_2(VAR_13, VAR_9))
                VAR_11 = VAR_1;
            else if (!FUNC_2(VAR_13, VAR_4))
                VAR_11 = VAR_1;
            else if (!FUNC_2(VAR_13, VAR_5))
                VAR_11 = VAR_1;
            else
            {
                FUNC_0("unsupported critical extension %s\n",
                 FUNC_1(VAR_13));
                VAR_11 = VAR_0;
            }
        }
    }
    return VAR_11;
}
