
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef scalar_t__ ULONG_PTR ;
typedef size_t UINT ;
struct TYPE_7__ {int tymed; int lindex; int dwAspect; int ptd; int cfFormat; } ;
struct TYPE_9__ {int dwFlags; scalar_t__ lpstrResultText; scalar_t__ lpstrFormatName; TYPE_2__ fmtetc; } ;
struct TYPE_6__ {int cy; int cx; } ;
struct TYPE_8__ {size_t cPasteEntries; size_t cLinkTypes; size_t cClsidExclude; int * lpClsidExclude; int * arrLinkTypes; TYPE_5__* arrPasteEntries; TYPE_1__ sizel; int hMetaPict; int fLink; int nSelectedIndex; int lpSrcDataObj; int hResource; scalar_t__ lpszTemplate; int hInstance; int lCustData; int lpfnHook; scalar_t__ lpszCaption; int hWndOwner; int dwFlags; } ;
typedef TYPE_3__ OLEUIPASTESPECIALW ;
typedef size_t INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,size_t,TYPE_5__*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const OLEUIPASTESPECIALW *VAR_0)
{
    INT VAR_1;
    UINT VAR_2;

    FUNC_4(VAR_0->dwFlags);
    FUNC_1("hwnd %p caption %s hook %p custdata %lx\n",
          VAR_0->hWndOwner, FUNC_3(VAR_0->lpszCaption), VAR_0->lpfnHook, VAR_0->lCustData);
    if(FUNC_0(VAR_0->lpszTemplate))
        FUNC_1("hinst %p template %04x hresource %p\n", VAR_0->hInstance, (WORD)(ULONG_PTR)VAR_0->lpszTemplate, VAR_0->hResource);
    else
        FUNC_1("hinst %p template %s hresource %p\n", VAR_0->hInstance, FUNC_3(VAR_0->lpszTemplate), VAR_0->hResource);
    FUNC_1("dataobj %p arrpasteent %p cpasteent %d arrlinktype %p clinktype %d\n",
          VAR_0->lpSrcDataObj, VAR_0->arrPasteEntries, VAR_0->cPasteEntries,
          VAR_0->arrLinkTypes, VAR_0->cLinkTypes);
    FUNC_1("cclsidex %d lpclsidex %p nselect %d flink %d hmetapict %p size(%d,%d)\n",
          VAR_0->cClsidExclude, VAR_0->lpClsidExclude, VAR_0->nSelectedIndex, VAR_0->fLink,
          VAR_0->hMetaPict, VAR_0->sizel.cx, VAR_0->sizel.cy);
    for(VAR_1 = 0; VAR_1 < VAR_0->cPasteEntries; VAR_1++)
    {
        FUNC_1("arrPasteEntries[%d]: cFormat %08x pTargetDevice %p dwAspect %d lindex %d tymed %d\n",
              VAR_1, VAR_0->arrPasteEntries[VAR_1].fmtetc.cfFormat, VAR_0->arrPasteEntries[VAR_1].fmtetc.ptd,
              VAR_0->arrPasteEntries[VAR_1].fmtetc.dwAspect, VAR_0->arrPasteEntries[VAR_1].fmtetc.lindex,
              VAR_0->arrPasteEntries[VAR_1].fmtetc.tymed);
        FUNC_1("\tformat name %s result text %s flags %04x\n", FUNC_3(VAR_0->arrPasteEntries[VAR_1].lpstrFormatName),
              FUNC_3(VAR_0->arrPasteEntries[VAR_1].lpstrResultText), VAR_0->arrPasteEntries[VAR_1].dwFlags);
    }
    for(VAR_1 = 0; VAR_1 < VAR_0->cLinkTypes; VAR_1++)
        FUNC_1("arrLinkTypes[%d] %08x\n", VAR_1, VAR_0->arrLinkTypes[VAR_1]);
    for(VAR_2 = 0; VAR_2 < VAR_0->cClsidExclude; VAR_2++)
        FUNC_1("lpClsidExclude[%u] %s\n", VAR_2, FUNC_2(&VAR_0->lpClsidExclude[VAR_2]));

}
