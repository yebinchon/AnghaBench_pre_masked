
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int destroy; } ;
struct TYPE_7__ {int destroying; TYPE_1__ events; } ;
struct sway_container {scalar_t__ fullscreen_mode; TYPE_2__* workspace; scalar_t__ parent; scalar_t__ scratchpad; TYPE_3__ node; scalar_t__ view; } ;
struct TYPE_6__ {int * fullscreen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct sway_container*) ;
 int FUNC_6 (int *,TYPE_3__*) ;

void FUNC_7(struct sway_container *VAR_2) {
 if (VAR_2->view) {
  FUNC_3(VAR_2, "close");
 }


 if (VAR_2->fullscreen_mode == VAR_1 && VAR_2->workspace) {
  VAR_2->workspace->fullscreen = ((void*)0);
 }
 if (VAR_2->scratchpad && VAR_2->fullscreen_mode == VAR_0) {
  FUNC_2(VAR_2);
 }

 FUNC_6(&VAR_2->node.events.destroy, &VAR_2->node);

 FUNC_1(VAR_2);

 VAR_2->node.destroying = 1;
 FUNC_4(&VAR_2->node);

 if (VAR_2->scratchpad) {
  FUNC_5(VAR_2);
 }

 if (VAR_2->fullscreen_mode == VAR_0) {
  FUNC_2(VAR_2);
 }

 if (VAR_2->parent || VAR_2->workspace) {
  FUNC_0(VAR_2);
 }
}
