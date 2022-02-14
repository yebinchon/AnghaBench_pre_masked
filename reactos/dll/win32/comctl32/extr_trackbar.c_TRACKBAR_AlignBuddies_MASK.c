
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int right; int left; int top; int bottom; } ;
struct TYPE_6__ {int right; int left; int bottom; int top; } ;
struct TYPE_7__ {int dwStyle; scalar_t__ hwndBuddyRB; TYPE_1__ rcChannel; scalar_t__ hwndBuddyLA; scalar_t__ hwndSelf; } ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef TYPE_3__ RECT ;
typedef int LPPOINT ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,int,int,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (const TRACKBAR_INFO *VAR_4)
{
    HWND VAR_5 = FUNC_0 (VAR_4->hwndSelf);
    RECT VAR_6, VAR_7;
    INT VAR_8, VAR_9;

    FUNC_1 (VAR_4->hwndSelf, &VAR_6);
    FUNC_2 (VAR_0, VAR_5, (LPPOINT)&VAR_6, 2);


    if (VAR_4->hwndBuddyLA) {
 FUNC_1 (VAR_4->hwndBuddyLA, &VAR_7);
 FUNC_2 (VAR_0, VAR_5, (LPPOINT)&VAR_7, 2);

 if (VAR_4->dwStyle & VAR_3) {
     VAR_8 = (VAR_4->rcChannel.right + VAR_4->rcChannel.left) / 2 -
  (VAR_7.right - VAR_7.left) / 2 + VAR_6.left;
     VAR_9 = VAR_6.top - (VAR_7.bottom - VAR_7.top);
 }
 else {
     VAR_8 = VAR_6.left - (VAR_7.right - VAR_7.left);
     VAR_9 = (VAR_4->rcChannel.bottom + VAR_4->rcChannel.top) / 2 -
  (VAR_7.bottom - VAR_7.top) / 2 + VAR_6.top;
 }

 FUNC_3 (VAR_4->hwndBuddyLA, 0, VAR_8, VAR_9, 0, 0,
                      VAR_2 | VAR_1);
    }



    if (VAR_4->hwndBuddyRB) {
 FUNC_1 (VAR_4->hwndBuddyRB, &VAR_7);
 FUNC_2 (VAR_0, VAR_5, (LPPOINT)&VAR_7, 2);

 if (VAR_4->dwStyle & VAR_3) {
     VAR_8 = (VAR_4->rcChannel.right + VAR_4->rcChannel.left) / 2 -
  (VAR_7.right - VAR_7.left) / 2 + VAR_6.left;
     VAR_9 = VAR_6.bottom;
 }
 else {
     VAR_8 = VAR_6.right;
     VAR_9 = (VAR_4->rcChannel.bottom + VAR_4->rcChannel.top) / 2 -
  (VAR_7.bottom - VAR_7.top) / 2 + VAR_6.top;
 }
 FUNC_3 (VAR_4->hwndBuddyRB, 0, VAR_8, VAR_9, 0, 0,
                      VAR_2 | VAR_1);
    }
}
