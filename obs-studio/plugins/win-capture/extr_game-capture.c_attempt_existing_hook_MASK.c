
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int executable; } ;
struct game_capture {scalar_t__ hook_restart; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct game_capture*,int ) ;

__attribute__((used)) static inline bool FUNC_3(struct game_capture *VAR_1)
{
 VAR_1->hook_restart = FUNC_2(VAR_1, VAR_0);
 if (VAR_1->hook_restart) {
  FUNC_1("existing hook found, signaling process: %s",
        VAR_1->config.executable);
  FUNC_0(VAR_1->hook_restart);
  return 1;
 }

 return 0;
}
