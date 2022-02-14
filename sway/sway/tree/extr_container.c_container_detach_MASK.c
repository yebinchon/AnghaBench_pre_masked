
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int node; int * fullscreen; } ;
struct sway_container {scalar_t__ fullscreen_mode; int node; struct sway_workspace* workspace; struct sway_container* parent; } ;
typedef int list_t ;
struct TYPE_2__ {int * fullscreen_global; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sway_container*,int ,int *) ;
 int * FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct sway_container*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct sway_workspace*) ;

void FUNC_7(struct sway_container *VAR_4) {
 if (VAR_4->fullscreen_mode == VAR_1) {
  VAR_4->workspace->fullscreen = ((void*)0);
 }
 if (VAR_4->fullscreen_mode == VAR_0) {
  VAR_2->fullscreen_global = ((void*)0);
 }

 struct sway_container *VAR_5 = VAR_4->parent;
 struct sway_workspace *VAR_6 = VAR_4->workspace;
 list_t *VAR_7 = FUNC_1(VAR_4);
 if (VAR_7) {
  int VAR_8 = FUNC_4(VAR_7, VAR_4);
  if (VAR_8 != -1) {
   FUNC_3(VAR_7, VAR_8);
  }
 }
 VAR_4->parent = ((void*)0);
 VAR_4->workspace = ((void*)0);
 FUNC_0(VAR_4, VAR_3, ((void*)0));

 if (VAR_5) {
  FUNC_2(VAR_5);
  FUNC_5(&VAR_5->node);
 } else if (VAR_6) {
  FUNC_6(VAR_6);
  FUNC_5(&VAR_6->node);
 }
 FUNC_5(&VAR_4->node);
}
