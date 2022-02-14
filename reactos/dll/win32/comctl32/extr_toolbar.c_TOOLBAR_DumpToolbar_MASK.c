
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nNumButtons; char* dwStyle; size_t himlDef; int * buttons; scalar_t__ bDoRedraw; int himlDis; int himlHot; int himlInt; int hwndSelf; int nNumStrings; int nNumBitmaps; int dwExStyle; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef size_t INT ;


 int FUNC_0 (TYPE_1__ const*,int *,size_t) ;
 int FUNC_1 (char*,int ,size_t,int ,size_t,int ,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(const TOOLBAR_INFO *VAR_1, INT VAR_2)
{
    if (FUNC_2(VAR_0)) {
 INT VAR_3;

 FUNC_1("toolbar %p at line %d, exStyle=%08x, buttons=%d, bitmaps=%d, strings=%d, style=%08x\n",
       VAR_1->hwndSelf, VAR_2,
       VAR_1->dwExStyle, VAR_1->nNumButtons, VAR_1->nNumBitmaps,
       VAR_1->nNumStrings, VAR_1->dwStyle);
 FUNC_1("toolbar %p at line %d, himlInt=%p, himlDef=%p, himlHot=%p, himlDis=%p, redrawable=%s\n",
       VAR_1->hwndSelf, VAR_2,
       VAR_1->himlInt, VAR_1->himlDef, VAR_1->himlHot, VAR_1->himlDis,
       (VAR_1->bDoRedraw) ? "TRUE" : "FALSE");
  for(VAR_3=0; VAR_3<VAR_1->nNumButtons; VAR_3++) {
            FUNC_0(VAR_1, &VAR_1->buttons[VAR_3], VAR_3);
 }
    }
}
