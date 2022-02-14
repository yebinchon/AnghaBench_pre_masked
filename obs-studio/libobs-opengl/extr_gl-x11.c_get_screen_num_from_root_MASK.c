
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;
typedef int xcb_screen_t ;
typedef int xcb_connection_t ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline int FUNC_2(xcb_connection_t *VAR_0,
        xcb_window_t VAR_1)
{
 xcb_screen_t *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  return -1;

 return FUNC_1(VAR_0, VAR_2);
}
