
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {int target_process; int window; int dwm_capture; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct game_capture *VAR_0)
{
 if (!VAR_0->dwm_capture && !FUNC_0(VAR_0->window))
  return 0;

 return !FUNC_1(VAR_0->target_process);
}
