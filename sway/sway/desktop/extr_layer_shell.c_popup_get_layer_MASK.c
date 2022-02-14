
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_layer_surface {int dummy; } ;
struct sway_layer_popup {scalar_t__ parent_type; struct sway_layer_surface* parent_layer; struct sway_layer_popup* parent_popup; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct sway_layer_surface *FUNC_0(
  struct sway_layer_popup *VAR_1) {
 while (VAR_1->parent_type == VAR_0) {
  VAR_1 = VAR_1->parent_popup;
 }
 return VAR_1->parent_layer;
}
