
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bottom; int top; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_10__ {TYPE_1__ rcNormalPosition; } ;
typedef TYPE_2__ WINDOWPLACEMENT ;
struct TYPE_12__ {int hstatusbar; int hdrivebar; int htoolbar; } ;
struct TYPE_11__ {int left; int top; int bottom; scalar_t__ right; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_3__* PRECT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(HWND VAR_7, PRECT VAR_8)
{
 RECT VAR_9;

 if (!FUNC_3(VAR_7))
  FUNC_0(VAR_7, VAR_8);
 else {
  WINDOWPLACEMENT VAR_10;

  FUNC_2(VAR_7, &VAR_10);

  VAR_8->left = VAR_8->top = 0;
  VAR_8->right = VAR_10.rcNormalPosition.right-VAR_10.rcNormalPosition.left-
      2*(FUNC_1(VAR_2)+FUNC_1(VAR_1));
  VAR_8->bottom = VAR_10.rcNormalPosition.bottom-VAR_10.rcNormalPosition.top-
      2*(FUNC_1(VAR_6)+FUNC_1(VAR_4))-
      FUNC_1(VAR_3)-FUNC_1(VAR_5);
 }

 if (FUNC_4(VAR_0.htoolbar)) {
  FUNC_0(VAR_0.htoolbar, &VAR_9);
  VAR_8->top += VAR_9.bottom+2;
 }

 if (FUNC_4(VAR_0.hdrivebar)) {
  FUNC_0(VAR_0.hdrivebar, &VAR_9);
  VAR_8->top += VAR_9.bottom+2;
 }

 if (FUNC_4(VAR_0.hstatusbar)) {
  FUNC_0(VAR_0.hstatusbar, &VAR_9);
  VAR_8->bottom -= VAR_9.bottom;
 }
}
