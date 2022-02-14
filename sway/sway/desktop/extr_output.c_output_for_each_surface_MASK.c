
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sway_surface_iterator_func_t ;
struct TYPE_5__ {TYPE_1__* floating; struct sway_container* fullscreen; } ;
struct sway_workspace {TYPE_2__ current; } ;
struct sway_output {int * layers; } ;
struct sway_container {int dummy; } ;
struct surface_iterator_data {void* user_data; struct sway_output* output; int user_iterator; } ;
struct TYPE_6__ {int drag_icons; int xwayland_unmanaged; struct sway_container* fullscreen_global; } ;
struct TYPE_4__ {int length; struct sway_container** items; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sway_container*,int (*) (struct sway_container*,struct surface_iterator_data*),struct surface_iterator_data*) ;
 scalar_t__ FUNC_1 (struct sway_container*,struct sway_container*) ;
 int FUNC_2 (struct sway_container*,struct surface_iterator_data*) ;
 int FUNC_3 (struct sway_output*,int *,int ,void*) ;
 struct sway_workspace* FUNC_4 (struct sway_output*) ;
 scalar_t__ FUNC_5 (struct sway_output*) ;
 int FUNC_6 (struct sway_output*,int *,int ,void*) ;
 int FUNC_7 (struct sway_output*,int *,int ,void*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_8 (struct sway_workspace*,int (*) (struct sway_container*,struct surface_iterator_data*),struct surface_iterator_data*) ;

__attribute__((used)) static void FUNC_9(struct sway_output *VAR_5,
  sway_surface_iterator_func_t VAR_6, void *VAR_7) {
 if (FUNC_5(VAR_5)) {
  goto overlay;
 }

 struct surface_iterator_data VAR_8 = {
  .user_iterator = VAR_6,
  .user_data = VAR_7,
  .output = VAR_5,
 };

 struct sway_workspace *VAR_9 = FUNC_4(VAR_5);
 struct sway_container *VAR_10 = VAR_4->fullscreen_global;
 if (!VAR_10) {
  if (!VAR_9) {
   return;
  }
  VAR_10 = VAR_9->current.fullscreen;
 }
 if (VAR_10) {
  FUNC_2(VAR_10, &VAR_8);
  FUNC_0(VAR_10,
   FUNC_2, &VAR_8);


  if (VAR_10 == VAR_9->current.fullscreen) {
   for (int VAR_11 = 0; VAR_11 < VAR_9->current.floating->length; ++VAR_11) {
    struct sway_container *VAR_12 =
     VAR_9->current.floating->items[VAR_11];
    if (FUNC_1(VAR_12, VAR_10)) {
     FUNC_2(VAR_12, &VAR_8);
    }
   }
  }




 } else {
  FUNC_6(VAR_5,
   &VAR_5->layers[VAR_0],
   VAR_6, VAR_7);
  FUNC_6(VAR_5,
   &VAR_5->layers[VAR_1],
   VAR_6, VAR_7);

  FUNC_8(VAR_9,
   FUNC_2, &VAR_8);





  FUNC_6(VAR_5,
   &VAR_5->layers[VAR_3],
   VAR_6, VAR_7);
 }

overlay:
 FUNC_6(VAR_5,
  &VAR_5->layers[VAR_2],
  VAR_6, VAR_7);
 FUNC_3(VAR_5, &VAR_4->drag_icons,
  VAR_6, VAR_7);
}
