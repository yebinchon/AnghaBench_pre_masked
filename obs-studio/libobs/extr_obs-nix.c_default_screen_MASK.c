
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_screen_t ;
struct TYPE_6__ {int * data; scalar_t__ rem; } ;
typedef TYPE_1__ xcb_screen_iterator_t ;
typedef int xcb_connection_t ;
struct TYPE_7__ {int display; } ;
typedef TYPE_2__ obs_hotkeys_platform_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ FUNC_3 (int ) ;

__attribute__((used)) static xcb_screen_t *FUNC_4(obs_hotkeys_platform_t *VAR_0,
        xcb_connection_t *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->display);
 xcb_screen_iterator_t VAR_3;

 VAR_3 = FUNC_3(FUNC_1(VAR_1));
 while (VAR_3.rem) {
  if (VAR_2-- == 0)
   return VAR_3.data;

  FUNC_2(&VAR_3);
 }

 return ((void*)0);
}
