
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {struct sway_container* container; } ;
struct sway_container {struct sway_container* parent; } ;
struct TYPE_3__ {int length; } ;
typedef TYPE_1__ list_t ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;

bool FUNC_2(struct sway_view *VAR_2) {
 bool VAR_3 = 1;
 struct sway_container *VAR_4 = VAR_2->container;
 while (VAR_4) {
  enum sway_container_layout VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 != VAR_1 && VAR_5 != VAR_0) {
   list_t *VAR_6 = FUNC_0(VAR_4);
   if (VAR_6 && VAR_6->length > 1) {
    VAR_3 = 0;
    break;
   }
  }
  VAR_4 = VAR_4->parent;
 }
 return VAR_3;
}
