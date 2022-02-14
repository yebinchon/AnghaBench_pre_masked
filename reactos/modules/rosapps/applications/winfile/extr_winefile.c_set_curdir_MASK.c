
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_12__ {TYPE_3__* cur; TYPE_3__* root; } ;
struct TYPE_11__ {TYPE_3__* cur; } ;
struct TYPE_14__ {scalar_t__ hwnd; int path; TYPE_2__ right; TYPE_1__ left; } ;
struct TYPE_13__ {int scanned; struct TYPE_13__* down; } ;
typedef int HWND ;
typedef TYPE_3__ Entry ;
typedef TYPE_4__ ChildWnd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(ChildWnd* VAR_1, Entry* VAR_2, int VAR_3, HWND VAR_4)
{
 WCHAR VAR_5[VAR_0];

 if (!VAR_2)
  return;

 VAR_5[0] = '\0';

 VAR_1->left.cur = VAR_2;

 VAR_1->right.root = VAR_2->down? VAR_2->down: VAR_2;
 VAR_1->right.cur = VAR_2;

 if (!VAR_2->scanned)
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_4(VAR_1);

 FUNC_2(VAR_2, VAR_5);
 FUNC_3(VAR_1->path, VAR_5);

 if (VAR_1->hwnd)
  FUNC_1(VAR_1->hwnd, VAR_5);

 if (VAR_5[0])
  if (FUNC_0(VAR_5))
   FUNC_6();
}
