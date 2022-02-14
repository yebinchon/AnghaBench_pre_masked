
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int hwnd; int treePane; TYPE_3__* cur; } ;
struct TYPE_22__ {int hwnd; TYPE_2__ left; } ;
struct TYPE_19__ {int dwFileAttributes; char* cFileName; } ;
struct TYPE_21__ {int scanned; scalar_t__ expanded; struct TYPE_21__* up; TYPE_1__ data; } ;
typedef TYPE_2__ Pane ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_3__ Entry ;
typedef TYPE_4__ ChildWnd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_10(ChildWnd* VAR_7, Pane* VAR_8, HWND VAR_9)
{
 Entry* VAR_10 = VAR_8->cur;

 if (!VAR_10)
  return;

 if (VAR_10->data.dwFileAttributes & VAR_1) {
  int VAR_11 = VAR_10->scanned;

  if (!VAR_11)
  {
   int VAR_12 = FUNC_1(VAR_7->left.hwnd, VAR_3, 0, 0);
   FUNC_6(VAR_7, VAR_10, VAR_12, VAR_9);
  }

  if (VAR_10->data.cFileName[0]=='.' && VAR_10->data.cFileName[1]=='\0')
   return;

  if (VAR_10->data.cFileName[0]=='.' && VAR_10->data.cFileName[1]=='.' && VAR_10->data.cFileName[2]=='\0') {
   VAR_10 = VAR_7->left.cur->up;
   FUNC_3(&VAR_7->left, VAR_10);
   goto focus_entry;
  } else if (VAR_10->expanded)
   FUNC_3(VAR_8, VAR_7->left.cur);
  else {
   FUNC_4(VAR_7, VAR_7->left.cur);

   if (!VAR_8->treePane) focus_entry: {
    int VAR_13 = FUNC_1(VAR_7->left.hwnd, VAR_3, 0, 0);
    int VAR_14 = FUNC_1(VAR_7->left.hwnd, VAR_2, VAR_13, (LPARAM)VAR_10);
    FUNC_1(VAR_7->left.hwnd, VAR_4, VAR_14, 0);
    FUNC_7(VAR_7, VAR_10, VAR_14, VAR_9);
   }
  }

  if (!VAR_11) {
   FUNC_2(VAR_8, VAR_0);

   FUNC_8(VAR_8);
  }
 } else {
  if (FUNC_0(VAR_6) < 0)
   FUNC_9(VAR_10, VAR_7->hwnd);
  else
   FUNC_5(VAR_10, VAR_7->hwnd, VAR_5);
 }
}
