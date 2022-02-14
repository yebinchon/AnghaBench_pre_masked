
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dwFlags; } ;
struct TYPE_7__ {int member_3; int member_4; int cfFormat; int member_2; int * member_1; int member_0; } ;
struct TYPE_6__ {int cLinkTypes; int cPasteEntries; TYPE_4__* arrPasteEntries; int lpSrcDataObj; int * arrLinkTypes; } ;
typedef TYPE_1__ OLEUIPASTESPECIALW ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ FORMATETC ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static DWORD FUNC_5(HWND VAR_6, OLEUIPASTESPECIALW *VAR_7)
{
    HRESULT VAR_8;
    DWORD VAR_9 = 0;
    DWORD VAR_10 = 0;
    int VAR_11, VAR_12;
    FORMATETC VAR_13 = {0, ((void*)0), VAR_0, -1, -1};

    for(VAR_11 = 0; VAR_11 < VAR_7->cLinkTypes && VAR_11 < VAR_4; VAR_11++)
    {
        VAR_13.cfFormat = VAR_7->arrLinkTypes[VAR_11];
        VAR_8 = FUNC_2(VAR_7->lpSrcDataObj, &VAR_13);
        if(VAR_8 == VAR_5)
            VAR_9 |= 1 << VAR_11;
    }
    FUNC_3("supported_mask %02x\n", VAR_9);
    for(VAR_12 = 0; VAR_12 < VAR_7->cPasteEntries; VAR_12++)
    {
        DWORD VAR_14;
        if(VAR_7->arrPasteEntries[VAR_12].dwFlags & VAR_3)
            VAR_14 = 0xff;
        else
            VAR_14 = VAR_7->arrPasteEntries[VAR_12].dwFlags & 0xff;

        if(VAR_14 & VAR_9)
        {
            FUNC_4(VAR_6, VAR_2, VAR_7->arrPasteEntries + VAR_12);
            VAR_10++;
        }
    }

    FUNC_0(FUNC_1(VAR_6, VAR_1), VAR_10 != 0);
    return VAR_10;
}
