
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pName; } ;
struct TYPE_5__ {scalar_t__ dwDatatypeCount; TYPE_2__* pDatatypesInfo1; } ;
typedef TYPE_1__* PLOCAL_PRINT_PROCESSOR ;
typedef TYPE_2__* PDATATYPES_INFO_1W ;
typedef int PCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__* const,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

BOOL
FUNC_2(const PLOCAL_PRINT_PROCESSOR VAR_2, PCWSTR VAR_3)
{
    DWORD VAR_4;
    PDATATYPES_INFO_1W VAR_5 = VAR_2->pDatatypesInfo1;

    FUNC_0("FindDatatype(%p, %S)\n", VAR_2, VAR_3);

    if (!VAR_3)
        return VAR_0;

    for (VAR_4 = 0; VAR_4 < VAR_2->dwDatatypeCount; VAR_4++)
    {
        if (FUNC_1(VAR_5->pName, VAR_3) == 0)
            return VAR_1;

        ++VAR_5;
    }

    return VAR_0;
}
