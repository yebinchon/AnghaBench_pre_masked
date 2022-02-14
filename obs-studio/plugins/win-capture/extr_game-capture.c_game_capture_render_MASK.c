
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursor; scalar_t__ allow_transparency; } ;
struct game_capture {int cursor_hidden; TYPE_2__ config; TYPE_1__* global_hook_info; int texture; int active; } ;
typedef int gs_effect_t ;
struct TYPE_3__ {int flip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct game_capture*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, gs_effect_t *VAR_3)
{
 struct game_capture *VAR_4 = VAR_2;
 if (!VAR_4->texture || !VAR_4->active)
  return;

 VAR_3 = FUNC_2(VAR_4->config.allow_transparency
          ? VAR_0
          : VAR_1);

 while (FUNC_1(VAR_3, "Draw")) {
  FUNC_3(VAR_4->texture, 0, 0, 0, 0,
    VAR_4->global_hook_info->flip);

  if (VAR_4->config.allow_transparency && VAR_4->config.cursor &&
      !VAR_4->cursor_hidden) {
   FUNC_0(VAR_4);
  }
 }

 if (!VAR_4->config.allow_transparency && VAR_4->config.cursor &&
     !VAR_4->cursor_hidden) {
  VAR_3 = FUNC_2(VAR_0);

  while (FUNC_1(VAR_3, "Draw")) {
   FUNC_0(VAR_4);
  }
 }
}
