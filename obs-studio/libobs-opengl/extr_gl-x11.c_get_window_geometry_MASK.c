
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_get_geometry_reply_t ;
typedef int xcb_get_geometry_cookie_t ;
typedef int xcb_generic_error_t ;
typedef int xcb_drawable_t ;
typedef int xcb_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,int **) ;

__attribute__((used)) static xcb_get_geometry_reply_t *FUNC_4(xcb_connection_t *VAR_1,
           xcb_drawable_t VAR_2)
{
 xcb_get_geometry_cookie_t VAR_3;
 xcb_generic_error_t *VAR_4;
 xcb_get_geometry_reply_t *VAR_5;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 VAR_5 = FUNC_3(VAR_1, VAR_3, &VAR_4);

 if (VAR_4) {
  FUNC_0(VAR_0, "Failed to fetch parent window geometry!");
  FUNC_1(VAR_4);
  FUNC_1(VAR_5);
  return 0;
 }

 FUNC_1(VAR_4);
 return VAR_5;
}
