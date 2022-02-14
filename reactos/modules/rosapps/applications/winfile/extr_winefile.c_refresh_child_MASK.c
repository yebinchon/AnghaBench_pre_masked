
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int WCHAR ;
struct TYPE_13__ {int hwnd; scalar_t__ cur; } ;
struct TYPE_15__ {scalar_t__ etype; int down; } ;
struct TYPE_12__ {TYPE_2__ entry; } ;
struct TYPE_14__ {int * root; } ;
struct TYPE_16__ {TYPE_11__ left; int hwnd; TYPE_10__ root; int sortOrder; TYPE_1__ right; } ;
typedef int * LPITEMIDLIST ;
typedef int LPARAM ;
typedef TYPE_2__ Entry ;
typedef TYPE_3__ ChildWnd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_11__*,int ,int *,int ,int ) ;
 TYPE_2__* FUNC_5 (TYPE_10__*,int *,int *,int *,int ,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_8(ChildWnd* VAR_6)
{
 WCHAR VAR_7[VAR_3], VAR_8[VAR_5+1];
 Entry* VAR_9;
 int VAR_10;

 FUNC_2(VAR_6->left.cur, VAR_7);
 FUNC_1(VAR_7, VAR_8, ((void*)0), ((void*)0), ((void*)0));

 VAR_6->right.root = ((void*)0);

 FUNC_6(VAR_6, &VAR_6->root.entry, 0, VAR_6->hwnd);

 if (VAR_6->root.entry.etype == VAR_0)
 {
  LPITEMIDLIST VAR_11 = FUNC_3(VAR_7,VAR_6->hwnd);
  if (VAR_11)
   VAR_9 = FUNC_5(&VAR_6->root, ((void*)0), VAR_11 , VAR_8, VAR_6->sortOrder, VAR_6->hwnd);
  else
   VAR_9 = ((void*)0);
 }
 else
  VAR_9 = FUNC_5(&VAR_6->root, VAR_7, ((void*)0), VAR_8, VAR_6->sortOrder, VAR_6->hwnd);

 if (!VAR_9)
  VAR_9 = &VAR_6->root.entry;

 FUNC_4(&VAR_6->left, VAR_6->root.entry.down, ((void*)0), VAR_4, 0);

 FUNC_7(VAR_6, VAR_9, 0, VAR_6->hwnd);

 VAR_10 = FUNC_0(VAR_6->left.hwnd, VAR_1, 0, (LPARAM)VAR_6->left.cur);
 FUNC_0(VAR_6->left.hwnd, VAR_2, VAR_10, 0);
}
