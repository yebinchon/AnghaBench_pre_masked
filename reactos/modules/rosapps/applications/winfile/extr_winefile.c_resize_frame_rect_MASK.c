
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hmdiclient; int hstatusbar; int hdrivebar; int htoolbar; } ;
struct TYPE_7__ {int top; int bottom; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_6__ {int bottom; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* PRECT ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int,scalar_t__,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(HWND VAR_4, PRECT VAR_5)
{
 int VAR_6;
 RECT VAR_7;

 if (FUNC_1(VAR_0.htoolbar)) {
  FUNC_3(VAR_0.htoolbar, VAR_3, 0, 0);
  FUNC_0(VAR_0.htoolbar, &VAR_7);
  VAR_5->top = VAR_7.bottom+3;
  VAR_5->bottom -= VAR_7.bottom+3;
 }

 if (FUNC_1(VAR_0.hdrivebar)) {
  FUNC_3(VAR_0.hdrivebar, VAR_3, 0, 0);
  FUNC_0(VAR_0.hdrivebar, &VAR_7);
  VAR_6 = --VAR_5->top + VAR_7.bottom+3;
  FUNC_2(VAR_0.hdrivebar, 0, VAR_5->top, VAR_7.right, VAR_6, VAR_2);
  VAR_5->top = VAR_6;
  VAR_5->bottom -= VAR_7.bottom+2;
 }

 if (FUNC_1(VAR_0.hstatusbar)) {
  int VAR_8[] = {300, 500};

  FUNC_3(VAR_0.hstatusbar, VAR_3, 0, 0);
  FUNC_3(VAR_0.hstatusbar, VAR_1, 2, (LPARAM)&VAR_8);
  FUNC_0(VAR_0.hstatusbar, &VAR_7);
  VAR_5->bottom -= VAR_7.bottom;
 }

 FUNC_2(VAR_0.hmdiclient, VAR_5->left-1,VAR_5->top-1,VAR_5->right+2,VAR_5->bottom+1, VAR_2);
}
