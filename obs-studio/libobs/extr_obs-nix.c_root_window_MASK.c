
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_3__ {int root; } ;
typedef TYPE_1__ xcb_screen_t ;
typedef int xcb_connection_t ;
typedef int obs_hotkeys_platform_t ;


 TYPE_1__* FUNC_0 (int *,int *) ;

__attribute__((used)) static inline xcb_window_t FUNC_1(obs_hotkeys_platform_t *VAR_0,
           xcb_connection_t *VAR_1)
{
 xcb_screen_t *VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2->root;
 return 0;
}
