
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hook_rate; } ;
struct game_capture {int wait_for_target_startup; float retry_interval; int next_window; TYPE_1__ config; int app_sid; int is_app; scalar_t__ process_id; } ;
typedef int HWND ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct game_capture*,int ) ;
 scalar_t__ FUNC_6 (int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct game_capture *VAR_2, HWND VAR_3)
{
 HANDLE VAR_4;
 HANDLE VAR_5;

 FUNC_1(VAR_3, &VAR_2->process_id);
 if (VAR_2->process_id) {
  VAR_5 = FUNC_6(VAR_1, 0,
           VAR_2->process_id);
  if (VAR_5) {
   VAR_2->is_app = FUNC_4(VAR_5);
   if (VAR_2->is_app) {
    VAR_2->app_sid = FUNC_2(VAR_5);
   }
   FUNC_0(VAR_5);
  }
 }


 VAR_4 = FUNC_5(VAR_2, VAR_0);
 if (VAR_4) {
  VAR_2->wait_for_target_startup = 0;
  FUNC_0(VAR_4);
 }






 if (VAR_2->wait_for_target_startup) {
  VAR_2->retry_interval =
   3.0f * FUNC_3(VAR_2->config.hook_rate);
  VAR_2->wait_for_target_startup = 0;
 } else {
  VAR_2->next_window = VAR_3;
 }
}
