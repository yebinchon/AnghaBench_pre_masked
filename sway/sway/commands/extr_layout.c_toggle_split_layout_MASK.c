
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_output {scalar_t__ height; scalar_t__ width; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_2__ {int default_orientation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static enum sway_container_layout FUNC_0(
  enum sway_container_layout VAR_4,
  enum sway_container_layout VAR_5,
  struct sway_output *VAR_6) {
 if (VAR_4 == VAR_0) {
  return VAR_2;
 } else if (VAR_4 == VAR_2) {
  return VAR_0;
 } else if (VAR_5 != VAR_1) {
  return VAR_5;
 } else if (VAR_3->default_orientation != VAR_1) {
  return VAR_3->default_orientation;
 } else if (VAR_6->height > VAR_6->width) {
  return VAR_2;
 }
 return VAR_0;
}
