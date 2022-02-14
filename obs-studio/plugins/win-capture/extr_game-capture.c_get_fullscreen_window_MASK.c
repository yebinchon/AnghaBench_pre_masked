
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct game_capture {int wait_for_target_startup; int * next_window; } ;
typedef int mi ;
struct TYPE_7__ {scalar_t__ left; scalar_t__ right; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_9__ {int cbSize; TYPE_1__ rcMonitor; int member_0; } ;
struct TYPE_8__ {scalar_t__ left; scalar_t__ right; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ MONITORINFO ;
typedef int HWND ;
typedef int HMONITOR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct game_capture*,int ) ;

__attribute__((used)) static void FUNC_6(struct game_capture *VAR_4)
{
 HWND VAR_5 = FUNC_0();
 MONITORINFO VAR_6 = {0};
 HMONITOR VAR_7;
 DWORD VAR_8;
 RECT VAR_9;

 VAR_4->next_window = ((void*)0);

 if (!VAR_5) {
  return;
 }
 if (!FUNC_3(VAR_5, &VAR_9)) {
  return;
 }


 VAR_8 = (DWORD)FUNC_2(VAR_5, VAR_0);
 if ((VAR_8 & VAR_3) != 0 && (VAR_8 & VAR_2) != 0) {
  return;
 }

 VAR_7 = FUNC_4(&VAR_9, VAR_1);
 if (!VAR_7) {
  return;
 }

 VAR_6.cbSize = sizeof(VAR_6);
 if (!FUNC_1(VAR_7, &VAR_6)) {
  return;
 }

 if (VAR_9.left == VAR_6.rcMonitor.left &&
     VAR_9.right == VAR_6.rcMonitor.right &&
     VAR_9.bottom == VAR_6.rcMonitor.bottom &&
     VAR_9.top == VAR_6.rcMonitor.top) {
  FUNC_5(VAR_4, VAR_5);
 } else {
  VAR_4->wait_for_target_startup = 1;
 }
}
