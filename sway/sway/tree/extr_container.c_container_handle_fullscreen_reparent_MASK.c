
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {scalar_t__ fullscreen_mode; TYPE_1__* workspace; } ;
struct TYPE_2__ {struct sway_container* fullscreen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sway_container*) ;

void FUNC_2(struct sway_container *VAR_1) {
 if (VAR_1->fullscreen_mode != VAR_0 || !VAR_1->workspace ||
   VAR_1->workspace->fullscreen == VAR_1) {
  return;
 }
 if (VAR_1->workspace->fullscreen) {
  FUNC_1(VAR_1->workspace->fullscreen);
 }
 VAR_1->workspace->fullscreen = VAR_1;

 FUNC_0(VAR_1->workspace);
}
