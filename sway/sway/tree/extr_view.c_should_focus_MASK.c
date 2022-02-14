
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sway_workspace {TYPE_2__* floating; TYPE_1__* tiling; } ;
struct sway_view {TYPE_3__* container; } ;
struct sway_seat {int dummy; } ;
struct sway_container {int dummy; } ;
struct TYPE_10__ {size_t length; } ;
typedef TYPE_4__ list_t ;
struct TYPE_9__ {scalar_t__ fullscreen_mode; struct sway_workspace* workspace; int parent; } ;
struct TYPE_8__ {size_t length; } ;
struct TYPE_7__ {size_t length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (struct sway_view*,int ) ;
 struct sway_seat* FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;
 struct sway_container* FUNC_3 (struct sway_seat*) ;
 struct sway_workspace* FUNC_4 (struct sway_seat*) ;

__attribute__((used)) static bool FUNC_5(struct sway_view *VAR_2) {
 struct sway_seat *VAR_3 = FUNC_1();
 struct sway_container *VAR_4 = FUNC_3(VAR_3);
 struct sway_workspace *VAR_5 = FUNC_4(VAR_3);
 struct sway_workspace *VAR_6 = VAR_2->container->workspace;

 if (VAR_2->container->fullscreen_mode == VAR_1) {
  return 1;
 }


 if (VAR_5 != VAR_6) {
  return 0;
 }



 if (!VAR_2->container->parent && !VAR_4) {
  size_t VAR_7 = VAR_2->container->workspace->tiling->length +
   VAR_2->container->workspace->floating->length;
  if (VAR_7 == 1) {
   return 1;
  }
 }


 list_t *VAR_8 = FUNC_0(VAR_2, VAR_0);
 size_t VAR_9 = VAR_8->length;
 FUNC_2(VAR_8);
 return VAR_9 == 0;
}
