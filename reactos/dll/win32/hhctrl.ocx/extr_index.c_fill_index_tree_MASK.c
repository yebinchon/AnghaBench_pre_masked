
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lvi ;
struct TYPE_6__ {struct TYPE_6__* next; scalar_t__ id; scalar_t__ keyword; int indentLevel; } ;
struct TYPE_5__ {int mask; scalar_t__ lParam; scalar_t__ pszText; scalar_t__ cchTextMax; int iIndent; int iItem; } ;
typedef TYPE_1__ LVITEMW ;
typedef scalar_t__ LPARAM ;
typedef TYPE_2__ IndexItem ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_6(HWND VAR_4, IndexItem *VAR_5)
{
    int VAR_6 = 0;
    LVITEMW VAR_7;

    while(VAR_5) {
        FUNC_2("tree debug: %s\n", FUNC_3(VAR_5->keyword));

        if(!VAR_5->keyword)
        {
            FUNC_0("HTML Help index item has no keyword.\n");
            VAR_5 = VAR_5->next;
            continue;
        }
        FUNC_5(&VAR_7, 0, sizeof(VAR_7));
        VAR_7.iItem = VAR_6++;
        VAR_7.mask = VAR_2|VAR_1|VAR_0;
        VAR_7.iIndent = VAR_5->indentLevel;
        VAR_7.cchTextMax = FUNC_4(VAR_5->keyword)+1;
        VAR_7.pszText = VAR_5->keyword;
        VAR_7.lParam = (LPARAM)VAR_5;
        VAR_5->id = (HTREEITEM)FUNC_1(VAR_4, VAR_3, 0, (LPARAM)&VAR_7);
        VAR_5 = VAR_5->next;
    }
}
