
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct game_capture {TYPE_1__* global_hook_info; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct game_capture*) ;
 int FUNC_3 (struct game_capture*) ;

__attribute__((used)) static bool FUNC_4(struct game_capture *VAR_1)
{
 FUNC_0("Starting capture");

 if (VAR_1->global_hook_info->type == VAR_0) {
  if (!FUNC_2(VAR_1)) {
   return 0;
  }

  FUNC_1("memory capture successful");
 } else {
  if (!FUNC_3(VAR_1)) {
   return 0;
  }

  FUNC_1("shared texture capture successful");
 }

 return 1;
}
