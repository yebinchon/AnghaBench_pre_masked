
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_workspace {TYPE_1__* tiling; int layout; } ;
struct sway_container {struct sway_container* parent; scalar_t__ height_fraction; scalar_t__ width_fraction; scalar_t__ height; scalar_t__ width; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_5__ {int seat; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;
struct TYPE_4__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct sway_container*,struct sway_container*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct sway_container* FUNC_2 (int ,struct sway_workspace*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_5 (struct sway_workspace*,struct sway_container*,int) ;

__attribute__((used)) static void FUNC_6(
  struct sway_container *VAR_4, struct sway_workspace *VAR_5,
  enum wlr_direction VAR_6) {
 VAR_4->width = VAR_4->height = 0;
 VAR_4->width_fraction = VAR_4->height_fraction = 0;

 if (FUNC_1(VAR_5->layout, VAR_6)) {
  FUNC_3(VAR_0, "Reparenting container (parallel)");
  int VAR_7 =
   VAR_6 == VAR_2 || VAR_6 == VAR_1 ?
   0 : VAR_5->tiling->length;
  FUNC_5(VAR_5, VAR_4, VAR_7);
  return;
 }

 FUNC_3(VAR_0, "Reparenting container (perpendicular)");
 struct sway_container *VAR_8 = FUNC_2(
   VAR_3->handler_context.seat, VAR_5);
 if (!VAR_8) {

  FUNC_4(VAR_5, VAR_4);
  return;
 }
 while (VAR_8->parent) {
  VAR_8 = VAR_8->parent;
 }
 FUNC_0(VAR_4, VAR_8,
   VAR_6);
}
