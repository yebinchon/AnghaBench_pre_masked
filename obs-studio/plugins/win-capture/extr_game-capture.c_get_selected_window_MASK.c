
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {int array; } ;
struct TYPE_4__ {int array; } ;
struct TYPE_6__ {int array; } ;
struct game_capture {int wait_for_target_startup; TYPE_2__ executable; TYPE_1__ title; TYPE_3__ class; int priority; } ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (struct game_capture*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct game_capture *VAR_1)
{
 HWND VAR_2;

 if (FUNC_1(&VAR_1->class, "dwm") == 0) {
  wchar_t VAR_3[512];
  FUNC_3(VAR_1->class.array, 0, VAR_3, 512);
  VAR_2 = FUNC_0(VAR_3, ((void*)0));
 } else {
  VAR_2 = FUNC_2(VAR_0, VAR_1->priority,
         VAR_1->class.array, VAR_1->title.array,
         VAR_1->executable.array);
 }

 if (VAR_2) {
  FUNC_4(VAR_1, VAR_2);
 } else {
  VAR_1->wait_for_target_startup = 1;
 }
}
