
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cfFormat; } ;
struct TYPE_11__ {size_t dwScratchSpace; TYPE_1__ fmtetc; } ;
struct TYPE_10__ {scalar_t__ cfFormat; } ;
struct TYPE_9__ {size_t cPasteEntries; TYPE_5__* arrPasteEntries; int lpSrcDataObj; } ;
typedef TYPE_2__ OLEUIPASTESPECIALW ;
typedef int IEnumFORMATETC ;
typedef int HWND ;
typedef int HRESULT ;
typedef TYPE_3__ FORMATETC ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (int *,int ,TYPE_3__*,size_t*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,TYPE_5__*) ;

__attribute__((used)) static DWORD FUNC_11(HWND VAR_3, OLEUIPASTESPECIALW *VAR_4)
{
    IEnumFORMATETC *VAR_5;
    HRESULT VAR_6;
    FORMATETC VAR_7[20];
    DWORD VAR_8, VAR_9 = 0;

    VAR_6 = FUNC_4(VAR_4->lpSrcDataObj, VAR_0, &VAR_5);
    if(FUNC_2(VAR_6))
    {
        FUNC_9("Unable to create IEnumFORMATETC\n");
        return 0;
    }


    VAR_6 = FUNC_5(VAR_5, FUNC_0(VAR_7), VAR_7, &VAR_8);
    FUNC_8("got %d formats hr %08x\n", VAR_8, VAR_6);

    if(FUNC_7(VAR_6))
    {
        DWORD VAR_10, VAR_11;
        for(VAR_11 = 0; VAR_11 < VAR_4->cPasteEntries; VAR_11++)
        {

            VAR_4->arrPasteEntries[VAR_11].dwScratchSpace = VAR_11;
            FUNC_8("req_fmt %x\n", VAR_4->arrPasteEntries[VAR_11].fmtetc.cfFormat);
            for(VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
            {
                FUNC_8("\tenum'ed fmt %x\n", VAR_7[VAR_10].cfFormat);
                if(VAR_4->arrPasteEntries[VAR_11].fmtetc.cfFormat == VAR_7[VAR_10].cfFormat)
                {
                    FUNC_10(VAR_3, VAR_2, VAR_4->arrPasteEntries + VAR_11);
                    VAR_9++;
                    break;
                }
            }
        }
    }

    FUNC_6(VAR_5);
    FUNC_1(FUNC_3(VAR_3, VAR_1), VAR_9 != 0);
    return VAR_9;
}
