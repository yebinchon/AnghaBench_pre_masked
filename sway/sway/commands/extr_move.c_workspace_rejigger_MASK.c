
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {void* layout; TYPE_1__* tiling; } ;
struct sway_container {scalar_t__ height; scalar_t__ width; int parent; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_2__ {int length; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_workspace*,struct sway_container*,int) ;
 int FUNC_3 (struct sway_workspace*) ;
 struct sway_container* FUNC_4 (struct sway_workspace*) ;

__attribute__((used)) static void FUNC_5(struct sway_workspace *VAR_5,
  struct sway_container *VAR_6, enum wlr_direction VAR_7) {
 if (!VAR_6->parent && VAR_5->tiling->length == 1) {
  VAR_5->layout =
   VAR_7 == VAR_2 || VAR_7 == VAR_3 ?
   VAR_0 : VAR_1;
  FUNC_3(VAR_5);
  return;
 }
 FUNC_0(VAR_6);
 struct sway_container *VAR_8 = FUNC_4(VAR_5);

 int VAR_9 =
  VAR_7 == VAR_2 || VAR_7 == VAR_4 ? 0 : 1;
 FUNC_2(VAR_5, VAR_6, VAR_9);
 FUNC_1(VAR_8);
 VAR_5->layout =
  VAR_7 == VAR_2 || VAR_7 == VAR_3 ?
  VAR_0 : VAR_1;
 FUNC_3(VAR_5);
 VAR_6->width = VAR_6->height = 0;
}
