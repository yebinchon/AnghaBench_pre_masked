
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; scalar_t__ rem; } ;
typedef TYPE_2__ xcb_screen_iterator_t ;
typedef int xcb_connection_t ;
typedef int int_fast32_t ;
struct TYPE_5__ {int height_in_pixels; int width_in_pixels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__ FUNC_2 (int ) ;

int FUNC_3(xcb_connection_t *VAR_0, int_fast32_t VAR_1, int_fast32_t *VAR_2,
     int_fast32_t *VAR_3)
{
 if (!VAR_0)
  goto fail;

 bool VAR_4 = 0;
 xcb_screen_iterator_t VAR_5;

 VAR_5 = FUNC_2(FUNC_0(VAR_0));
 for (; VAR_5.rem; --VAR_1, FUNC_1(&VAR_5)) {
  if (!VAR_1) {
   *VAR_2 = VAR_5.data->width_in_pixels;
   *VAR_3 = VAR_5.data->height_in_pixels;
   VAR_4 = 1;
  }
 }

 if (VAR_4)
  return 0;

fail:
 *VAR_2 = *VAR_3 = 0;
 return -1;
}
