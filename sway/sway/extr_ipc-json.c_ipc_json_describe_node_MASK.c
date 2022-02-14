
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {size_t y; size_t height; int member_3; int member_2; int member_1; int member_0; } ;
struct sway_seat {int dummy; } ;
struct sway_node {int type; int sway_workspace; int sway_container; int sway_output; scalar_t__ id; } ;
struct focus_inactive_data {int * object; struct sway_node* node; } ;
typedef int json_object ;
struct TYPE_2__ {size_t length; } ;


 scalar_t__ VAR_0 ;




 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct wlr_box*) ;
 struct sway_seat* FUNC_3 () ;
 int * FUNC_4 (int,char*,int,int *,struct wlr_box*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (struct sway_node*,struct wlr_box*) ;
 char* FUNC_11 (struct sway_node*) ;
 int VAR_2 ;
 int FUNC_12 (struct sway_seat*,int ,struct focus_inactive_data*) ;
 struct sway_node* FUNC_13 (struct sway_seat*) ;

json_object *FUNC_14(struct sway_node *VAR_3) {
 struct sway_seat *VAR_4 = FUNC_3();
 bool VAR_5 = FUNC_13(VAR_4) == VAR_3;
 char *VAR_6 = FUNC_11(VAR_3);

 struct wlr_box VAR_7;
 FUNC_10(VAR_3, &VAR_7);
 if (VAR_3->type == 131) {
  struct wlr_box VAR_8 = {0, 0, 0, 0};
  FUNC_2(VAR_3->sway_container, &VAR_8);
  size_t VAR_9 = 1;
  if (FUNC_1(VAR_3->sway_container) == VAR_0) {
   VAR_9 = FUNC_0(VAR_3->sway_container)->length;
  }
  VAR_7.y += VAR_8.height * VAR_9;
  VAR_7.height -= VAR_8.height * VAR_9;
 }

 json_object *VAR_10 = FUNC_9();
 struct focus_inactive_data VAR_11 = {
  .node = VAR_3,
  .object = VAR_10,
 };
 FUNC_12(VAR_4, VAR_1, &VAR_11);

 json_object *VAR_12 = FUNC_4(
    (int)VAR_3->id, VAR_6, VAR_5, VAR_10, &VAR_7);

 switch (VAR_3->type) {
 case 129:
  FUNC_7(VAR_2, VAR_12);
  break;
 case 130:
  FUNC_6(VAR_3->sway_output, VAR_12);
  break;
 case 131:
  FUNC_5(VAR_3->sway_container, VAR_12);
  break;
 case 128:
  FUNC_8(VAR_3->sway_workspace, VAR_12);
  break;
 }

 return VAR_12;
}
