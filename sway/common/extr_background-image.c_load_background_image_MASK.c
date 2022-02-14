
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cairo_surface_t ;
struct TYPE_3__ {int message; } ;
typedef int GdkPixbuf ;
typedef TYPE_1__ GError ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (char const*,TYPE_1__**) ;
 int FUNC_6 (int ,char*,...) ;

cairo_surface_t *FUNC_7(const char *VAR_2) {
 cairo_surface_t *VAR_3;
 VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3) {
  FUNC_6(VAR_1, "Failed to read background image.");
  return ((void*)0);
 }
 if (FUNC_2(VAR_3) != VAR_0) {
  FUNC_6(VAR_1, "Failed to read background image: %s."

    "\nSway was compiled without gdk_pixbuf support, so only"
    "\nPNG images can be loaded. This is the likely cause."

    , FUNC_1(FUNC_2(VAR_3)));
  return ((void*)0);
 }
 return VAR_3;
}
