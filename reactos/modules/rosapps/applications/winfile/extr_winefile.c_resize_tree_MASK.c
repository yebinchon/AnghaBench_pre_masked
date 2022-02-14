
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int x; int flags; int cx; scalar_t__ cy; scalar_t__ y; int hwndInsertAfter; } ;
typedef TYPE_3__ WINDOWPOS ;
struct TYPE_9__ {int hwnd; int hwndHeader; } ;
struct TYPE_8__ {int hwnd; int hwndHeader; } ;
struct TYPE_13__ {int split_pos; TYPE_2__ right; TYPE_1__ left; } ;
struct TYPE_12__ {TYPE_3__* pwpos; TYPE_4__* prc; } ;
struct TYPE_11__ {int left; int right; int bottom; scalar_t__ top; } ;
typedef TYPE_4__ RECT ;
typedef int LPARAM ;
typedef TYPE_5__ HD_LAYOUT ;
typedef int HDWP ;
typedef TYPE_6__ ChildWnd ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,scalar_t__,int,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(ChildWnd* VAR_4, int VAR_5, int VAR_6)
{
 HDWP VAR_7 = FUNC_0(4);
 RECT VAR_8;
        WINDOWPOS VAR_9;
        HD_LAYOUT VAR_10;

 VAR_8.left = 0;
 VAR_8.top = 0;
 VAR_8.right = VAR_5;
 VAR_8.bottom = VAR_6;

 VAR_5 = VAR_4->split_pos + VAR_1/2;
        VAR_10.prc = &VAR_8;
        VAR_10.pwpos = &VAR_9;

        FUNC_3(VAR_4->left.hwndHeader, VAR_0, 0, (LPARAM)&VAR_10);

        FUNC_1(VAR_7, VAR_4->left.hwndHeader, VAR_9.hwndInsertAfter,
                       VAR_9.x-1, VAR_9.y, VAR_4->split_pos-VAR_1/2+1, VAR_9.cy, VAR_9.flags);
        FUNC_1(VAR_7, VAR_4->right.hwndHeader, VAR_9.hwndInsertAfter,
                       VAR_8.left+VAR_5+1, VAR_9.y, VAR_9.cx-VAR_5+2, VAR_9.cy, VAR_9.flags);
 FUNC_1(VAR_7, VAR_4->left.hwnd, 0, VAR_8.left, VAR_8.top, VAR_4->split_pos-VAR_1/2-VAR_8.left, VAR_8.bottom-VAR_8.top, VAR_3|VAR_2);
 FUNC_1(VAR_7, VAR_4->right.hwnd, 0, VAR_8.left+VAR_5+1, VAR_8.top, VAR_8.right-VAR_5, VAR_8.bottom-VAR_8.top, VAR_3|VAR_2);

 FUNC_2(VAR_7);
}
