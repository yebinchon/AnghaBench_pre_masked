
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int executable; } ;
struct game_capture {int target_process; int app_sid; scalar_t__ is_app; int process_is_64bit; TYPE_1__ config; int process_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static inline bool FUNC_5(struct game_capture *VAR_2)
{
 VAR_2->target_process = FUNC_3(
  VAR_0 | VAR_1, 0, VAR_2->process_id);
 if (!VAR_2->target_process) {
  FUNC_4("could not open process: %s", VAR_2->config.executable);
  return 0;
 }

 VAR_2->process_is_64bit = FUNC_1(VAR_2->target_process);
 VAR_2->is_app = FUNC_2(VAR_2->target_process);
 if (VAR_2->is_app) {
  VAR_2->app_sid = FUNC_0(VAR_2->target_process);
 }
 return 1;
}
