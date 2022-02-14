
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ xcb_window_t ;
struct TYPE_6__ {scalar_t__ root; } ;
typedef TYPE_1__ xcb_screen_t ;
struct TYPE_7__ {TYPE_1__* data; scalar_t__ rem; } ;
typedef TYPE_2__ xcb_screen_iterator_t ;
typedef int xcb_connection_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__ FUNC_2 (int ) ;

__attribute__((used)) static xcb_screen_t *FUNC_3(xcb_connection_t *VAR_0,
       xcb_window_t VAR_1)
{
 xcb_screen_iterator_t VAR_2 =
  FUNC_2(FUNC_0(VAR_0));

 while (VAR_2.rem) {
  if (VAR_2.data->root == VAR_1)
   return VAR_2.data;

  FUNC_1(&VAR_2);
 }

 return 0;
}
