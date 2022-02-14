
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lParam; int ptAction; int uChanged; int uOldState; int uNewState; int iSubItem; int iItem; } ;
typedef TYPE_1__ NMLISTVIEW ;


 char const* FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const char* FUNC_2(const NMLISTVIEW *VAR_0)
{
    if (!VAR_0) return "(null)";
    return FUNC_0("iItem=%d, iSubItem=%d, uNewState=0x%x,"
          " uOldState=0x%x, uChanged=0x%x, ptAction=%s, lParam=%ld",
          VAR_0->iItem, VAR_0->iSubItem, VAR_0->uNewState, VAR_0->uOldState,
   VAR_0->uChanged, FUNC_1(&VAR_0->ptAction), VAR_0->lParam);
}
