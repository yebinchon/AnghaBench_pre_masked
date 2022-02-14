
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_xwayland_view {int dummy; } ;
struct sway_view {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static struct sway_xwayland_view *FUNC_1(
  struct sway_view *VAR_1) {
 if (!FUNC_0(VAR_1->type == VAR_0,
   "Expected xwayland view")) {
  return ((void*)0);
 }
 return (struct sway_xwayland_view *)VAR_1;
}
