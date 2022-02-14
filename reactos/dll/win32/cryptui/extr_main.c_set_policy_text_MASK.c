
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parFmt ;
struct TYPE_6__ {int cbSize; int dxStartIndent; int dwMask; } ;
struct TYPE_5__ {size_t cPurposes; int pCertContext; int * rgszPurposes; } ;
typedef TYPE_1__* PCCRYPTUI_VIEWCERTIFICATE_STRUCTW ;
typedef TYPE_2__ PARAFORMAT2 ;
typedef int HWND ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(HWND VAR_7,
 PCCRYPTUI_VIEWCERTIFICATE_STRUCTW VAR_8)
{
    BOOL VAR_9 = VAR_0, VAR_10 = VAR_0;
    BOOL VAR_11 = VAR_0, VAR_12 = VAR_0;

    if (VAR_8->cPurposes)
    {
        DWORD VAR_13;

        for (VAR_13 = 0; VAR_13 < VAR_8->cPurposes; VAR_13++)
        {
            if (!FUNC_3(VAR_8->rgszPurposes[VAR_13], VAR_6))
                VAR_9 = VAR_4;
            else if (!FUNC_3(VAR_8->rgszPurposes[VAR_13],
             VAR_5))
                VAR_10 = VAR_4;
            else
                VAR_11 = VAR_4;
        }
    }
    else
        VAR_10 = VAR_9 = VAR_4;
    if (VAR_10)
        FUNC_1(VAR_7, VAR_8->pCertContext, &VAR_12);
    if (VAR_9)
        VAR_11 = FUNC_2(VAR_7, VAR_8->pCertContext,
         &VAR_12);
    if (VAR_11)
    {
        PARAFORMAT2 VAR_14;

        VAR_14.cbSize = sizeof(VAR_14);
        VAR_14.dwMask = VAR_3;
        VAR_14.dxStartIndent = VAR_2;
        FUNC_0(VAR_7,
         VAR_1, &VAR_14);
    }
}
