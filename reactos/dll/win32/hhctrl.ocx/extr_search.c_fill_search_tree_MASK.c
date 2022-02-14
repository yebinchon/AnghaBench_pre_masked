
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lvi ;
struct TYPE_6__ {int mask; scalar_t__ lParam; int pszText; scalar_t__ cchTextMax; int iItem; } ;
struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ id; int title; int filename; } ;
typedef TYPE_1__ SearchItem ;
typedef TYPE_2__ LVITEMW ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_5(HWND VAR_4, SearchItem *VAR_5)
{
    int VAR_6 = 0;
    LVITEMW VAR_7;

    FUNC_0(VAR_4, VAR_2, 0, 0);
    while(VAR_5) {
        FUNC_1("list debug: %s\n", FUNC_2(VAR_5->filename));

        FUNC_4(&VAR_7, 0, sizeof(VAR_7));
        VAR_7.iItem = VAR_6++;
        VAR_7.mask = VAR_1|VAR_0;
        VAR_7.cchTextMax = FUNC_3(VAR_5->title)+1;
        VAR_7.pszText = VAR_5->title;
        VAR_7.lParam = (LPARAM)VAR_5;
        VAR_5->id = (HTREEITEM)FUNC_0(VAR_4, VAR_3, 0, (LPARAM)&VAR_7);
        VAR_5 = VAR_5->next;
    }
}
