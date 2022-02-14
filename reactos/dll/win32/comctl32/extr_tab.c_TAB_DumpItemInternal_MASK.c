
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int top; int left; } ;
struct TYPE_5__ {TYPE_1__ rect; int iImage; int pszText; int dwState; } ;
typedef TYPE_2__ TAB_ITEM ;
typedef int TAB_INFO ;


 TYPE_2__* FUNC_0 (int const*,int ) ;
 int FUNC_1 (char*,int ,int ,int ,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(const TAB_INFO *VAR_1, UINT VAR_2)
{
    if (FUNC_2(VAR_0)) {
 TAB_ITEM *VAR_3 = FUNC_0(VAR_1, VAR_2);

 FUNC_1("tab %d, dwState=0x%08x, pszText=%s, iImage=%d\n",
       VAR_2, VAR_3->dwState, FUNC_3(VAR_3->pszText), VAR_3->iImage);
 FUNC_1("tab %d, rect.left=%d, rect.top(row)=%d\n",
       VAR_2, VAR_3->rect.left, VAR_3->rect.top);
    }
}
