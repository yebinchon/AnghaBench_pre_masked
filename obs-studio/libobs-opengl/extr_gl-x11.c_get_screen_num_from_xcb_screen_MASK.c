
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_screen_t ;
struct TYPE_4__ {int * data; scalar_t__ rem; } ;
typedef TYPE_1__ xcb_screen_iterator_t ;
typedef int xcb_connection_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(xcb_connection_t *VAR_0,
       xcb_screen_t *VAR_1)
{
 xcb_screen_iterator_t VAR_2 =
  FUNC_2(FUNC_0(VAR_0));
 int VAR_3 = 0;

 for (; VAR_2.rem; FUNC_1(&VAR_2), ++VAR_3)
  if (VAR_2.data == VAR_1)
   return VAR_3;

 return -1;
}
