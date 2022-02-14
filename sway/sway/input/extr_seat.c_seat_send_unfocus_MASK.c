
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {int wlr_seat; int cursor; } ;
struct sway_node {scalar_t__ type; int sway_container; int sway_workspace; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int (*) (int ,struct sway_seat*),struct sway_seat*) ;
 int FUNC_1 (int ,struct sway_seat*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int (*) (int ,struct sway_seat*),struct sway_seat*) ;

__attribute__((used)) static void FUNC_5(struct sway_node *VAR_1, struct sway_seat *VAR_2) {
 FUNC_2(VAR_2->cursor, ((void*)0));
 FUNC_3(VAR_2->wlr_seat);
 if (VAR_1->type == VAR_0) {
  FUNC_4(VAR_1->sway_workspace, FUNC_1, VAR_2);
 } else {
  FUNC_1(VAR_1->sway_container, VAR_2);
  FUNC_0(VAR_1->sway_container, FUNC_1, VAR_2);
 }
}
