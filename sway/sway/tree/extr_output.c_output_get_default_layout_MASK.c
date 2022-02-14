
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_output {scalar_t__ height; scalar_t__ width; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_2__ {scalar_t__ default_layout; scalar_t__ default_orientation; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

enum sway_container_layout FUNC_0(
  struct sway_output *VAR_4) {
 if (VAR_3->default_layout != VAR_1) {
  return VAR_3->default_layout;
 }
 if (VAR_3->default_orientation != VAR_1) {
  return VAR_3->default_orientation;
 }
 if (VAR_4->height > VAR_4->width) {
  return VAR_2;
 }
 return VAR_0;
}
