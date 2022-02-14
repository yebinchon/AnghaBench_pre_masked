
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct game_capture {TYPE_1__* global_hook_info; int cursor_data; int window; } ;
struct TYPE_5__ {int y; int x; int member_0; } ;
struct TYPE_4__ {scalar_t__ base_cy; scalar_t__ base_cx; scalar_t__ cy; scalar_t__ cx; scalar_t__ window; } ;
typedef TYPE_2__ POINT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ,float,float,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct game_capture *VAR_0)
{
 POINT VAR_1 = {0};
 HWND VAR_2;

 if (!VAR_0->global_hook_info->base_cx || !VAR_0->global_hook_info->base_cy)
  return;

 VAR_2 = !!VAR_0->global_hook_info->window
    ? (HWND)(uintptr_t)VAR_0->global_hook_info->window
    : VAR_0->window;

 FUNC_0(VAR_2, &VAR_1);

 float VAR_3 = (float)VAR_0->global_hook_info->cx /
   (float)VAR_0->global_hook_info->base_cx;
 float VAR_4 = (float)VAR_0->global_hook_info->cy /
   (float)VAR_0->global_hook_info->base_cy;

 FUNC_1(&VAR_0->cursor_data, -VAR_1.x, -VAR_1.y, VAR_3, VAR_4,
      VAR_0->global_hook_info->base_cx,
      VAR_0->global_hook_info->base_cy);
}
