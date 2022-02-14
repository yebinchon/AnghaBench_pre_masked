
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int dummy; } ;
struct wlr_box {int dummy; } ;
struct surface_iterator_data {int user_data; int rotation; int output; int (* user_iterator ) (int ,struct wlr_surface*,struct wlr_box*,int ,int ) ;} ;


 int FUNC_0 (struct surface_iterator_data*,struct wlr_surface*,int,int,struct wlr_box*) ;
 int FUNC_1 (int ,struct wlr_surface*,struct wlr_box*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wlr_surface *VAR_0,
  int VAR_1, int VAR_2, void *VAR_3) {
 struct surface_iterator_data *VAR_4 = VAR_3;

 struct wlr_box VAR_5;
 bool VAR_6 = FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2, &VAR_5);
 if (!VAR_6) {
  return;
 }

 VAR_4->user_iterator(VAR_4->output, VAR_0, &VAR_5, VAR_4->rotation,
  VAR_4->user_data);
}
