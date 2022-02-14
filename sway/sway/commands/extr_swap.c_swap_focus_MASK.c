
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_container {int node; struct sway_workspace* workspace; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_4__ {TYPE_1__* fullscreen_global; } ;
struct TYPE_3__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sway_container*) ;
 TYPE_2__* VAR_2 ;
 int * FUNC_1 (struct sway_seat*,int *) ;
 int FUNC_2 (struct sway_seat*,int *) ;
 int FUNC_3 (struct sway_seat*,struct sway_container*) ;
 scalar_t__ FUNC_4 (struct sway_workspace*) ;

__attribute__((used)) static void FUNC_5(struct sway_container *VAR_3,
  struct sway_container *VAR_4, struct sway_seat *VAR_5,
  struct sway_container *VAR_6) {
 if (VAR_6 == VAR_3 || VAR_6 == VAR_4) {
  struct sway_workspace *VAR_7 = VAR_3->workspace;
  struct sway_workspace *VAR_8 = VAR_4->workspace;
  enum sway_container_layout VAR_9 = FUNC_0(VAR_3);
  enum sway_container_layout VAR_10 = FUNC_0(VAR_4);
  if (VAR_6 == VAR_3 && (VAR_10 == VAR_1 || VAR_10 == VAR_0)) {
   if (FUNC_4(VAR_8)) {
    FUNC_2(VAR_5, &VAR_4->node);
   }
   FUNC_3(VAR_5, VAR_7 != VAR_8 ? VAR_4 : VAR_3);
  } else if (VAR_6 == VAR_4 && (VAR_9 == VAR_1
     || VAR_9 == VAR_0)) {
   if (FUNC_4(VAR_7)) {
    FUNC_2(VAR_5, &VAR_3->node);
   }
   FUNC_3(VAR_5, VAR_7 != VAR_8 ? VAR_3 : VAR_4);
  } else if (VAR_7 != VAR_8) {
   FUNC_3(VAR_5, VAR_6 == VAR_3 ? VAR_4 : VAR_3);
  } else {
   FUNC_3(VAR_5, VAR_6);
  }
 } else {
  FUNC_3(VAR_5, VAR_6);
 }

 if (VAR_2->fullscreen_global) {
  FUNC_2(VAR_5,
    FUNC_1(VAR_5, &VAR_2->fullscreen_global->node));
 }
}
