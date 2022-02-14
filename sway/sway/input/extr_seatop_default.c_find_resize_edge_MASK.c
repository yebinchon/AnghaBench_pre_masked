
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int dummy; } ;
struct sway_cursor {int dummy; } ;
struct sway_container {int dummy; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;


 int VAR_0 ;
 int FUNC_0 (struct sway_container*) ;
 scalar_t__ FUNC_1 (struct sway_container*,int) ;
 int FUNC_2 (struct sway_container*,struct wlr_surface*,struct sway_cursor*) ;

__attribute__((used)) static enum wlr_edges FUNC_3(struct sway_container *VAR_1,
  struct wlr_surface *VAR_2, struct sway_cursor *VAR_3) {
 enum wlr_edges VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 && !FUNC_0(VAR_1) && FUNC_1(VAR_1, VAR_4)) {
  return VAR_0;
 }
 return VAR_4;
}
