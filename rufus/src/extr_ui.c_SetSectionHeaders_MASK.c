
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wtmp ;
typedef int wchar_t ;
typedef int WPARAM ;
struct TYPE_6__ {int top; int left; } ;
struct TYPE_5__ {int cy; int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ RECT ;
typedef int POINT ;
typedef int HWND ;
typedef scalar_t__ HFONT ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,int*,int) ;
 int VAR_3 ;
 int FUNC_8 (int *,int ,int *,int) ;
 int FUNC_9 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int,int ,int ,int ) ;
 int FUNC_11 (int ,int *,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int*,int ,int) ;
 int* VAR_9 ;
 size_t FUNC_14 (int*) ;

void FUNC_15(HWND VAR_10)
{
 RECT VAR_11;
 HWND VAR_12;
 SIZE VAR_13;
 HFONT VAR_14;
 wchar_t VAR_15[128];
 size_t VAR_16;
 int VAR_17;


 VAR_14 = FUNC_1(-FUNC_9(14, FUNC_3(FUNC_2(VAR_8), VAR_3), 72), 0, 0, 0,
  VAR_2, VAR_1, VAR_1, VAR_1, VAR_0, 0, 0, VAR_4, 0, "Segoe UI");

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_9); VAR_17++) {
  FUNC_10(VAR_10, VAR_9[VAR_17], VAR_7, (WPARAM)VAR_14, VAR_6);
  VAR_12 = FUNC_4(VAR_10, VAR_9[VAR_17]);
  FUNC_13(VAR_15, 0, sizeof(VAR_15));
  FUNC_7(VAR_12, VAR_15, FUNC_0(VAR_15));
  VAR_16 = FUNC_14(VAR_15);
  VAR_15[VAR_16++] = L' ';
  VAR_15[VAR_16++] = L' ';
  FUNC_12(VAR_12, VAR_15);
  FUNC_6(VAR_12, &VAR_11);
  FUNC_8(((void*)0), VAR_10, (POINT*)&VAR_11, 2);
  VAR_13 = FUNC_5(VAR_12, ((void*)0));
  FUNC_11(VAR_12, ((void*)0), VAR_11.left, VAR_11.top, VAR_13.cx, VAR_13.cy, VAR_5);
 }
}
