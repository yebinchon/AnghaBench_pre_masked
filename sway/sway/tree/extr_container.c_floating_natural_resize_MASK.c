
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_view {void* natural_height; void* natural_width; } ;
struct sway_container {void* content_height; void* content_width; struct sway_view* view; void* height; void* width; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (int*,int*,int*,int*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int) ;

__attribute__((used)) static void FUNC_4(struct sway_container *VAR_0) {
 int VAR_1, VAR_2, VAR_3, VAR_4;
 FUNC_1(&VAR_1, &VAR_2,
   &VAR_3, &VAR_4);
 if (!VAR_0->view) {
  VAR_0->width = FUNC_2(VAR_1, FUNC_3(VAR_0->width, VAR_2));
  VAR_0->height = FUNC_2(VAR_3, FUNC_3(VAR_0->height, VAR_4));
 } else {
  struct sway_view *VAR_5 = VAR_0->view;
  VAR_0->content_width =
   FUNC_2(VAR_1, FUNC_3(VAR_5->natural_width, VAR_2));
  VAR_0->content_height =
   FUNC_2(VAR_3, FUNC_3(VAR_5->natural_height, VAR_4));
  FUNC_0(VAR_0);
 }
}
