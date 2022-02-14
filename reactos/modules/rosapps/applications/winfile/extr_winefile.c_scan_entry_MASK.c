
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_15__ {int hwnd; } ;
struct TYPE_12__ {int hwnd; } ;
struct TYPE_14__ {int header_wdths_ok; TYPE_4__ right; int filter_flags; int filter_pattern; int sortOrder; TYPE_1__ left; } ;
struct TYPE_13__ {scalar_t__ level; scalar_t__ etype; int down; } ;
typedef scalar_t__ LRESULT ;
typedef int LPCWSTR ;
typedef int HWND ;
typedef int HCURSOR ;
typedef TYPE_2__ Entry ;
typedef TYPE_3__ ChildWnd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,int) ;
 int FUNC_7 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_9(ChildWnd* VAR_8, Entry* VAR_9, int VAR_10, HWND VAR_11)
{
 WCHAR VAR_12[VAR_7];
 HCURSOR VAR_13 = FUNC_2(FUNC_0(0, (LPCWSTR)VAR_2));


 for(;;) {
  LRESULT VAR_14 = FUNC_1(VAR_8->left.hwnd, VAR_5, VAR_10+1, 0);
  Entry* VAR_15 = (Entry*) VAR_14;

  if (VAR_14==VAR_4 || !VAR_15 || VAR_15->level<=VAR_9->level)
   break;

  FUNC_1(VAR_8->left.hwnd, VAR_3, VAR_10+1, 0);
 }


 FUNC_1(VAR_8->right.hwnd, VAR_6, 0, 0);


 FUNC_4(VAR_9);


 if (VAR_9->etype == VAR_0)
 {
  FUNC_7(VAR_9, ((void*)0), VAR_8->sortOrder, VAR_11);
 }
 else
 {
  FUNC_5(VAR_9, VAR_12);
  FUNC_7(VAR_9, VAR_12, VAR_8->sortOrder, VAR_11);
 }


 FUNC_6(&VAR_8->right, VAR_9->down, VAR_8->filter_pattern, VAR_8->filter_flags, -1);
 FUNC_3(&VAR_8->right, VAR_1);
 FUNC_8(&VAR_8->right);

 VAR_8->header_wdths_ok = VAR_1;

 FUNC_2(VAR_13);
}
