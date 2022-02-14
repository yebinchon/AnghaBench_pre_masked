
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_binding {int command; int input; } ;
typedef int list_t ;


 int VAR_0 ;
 struct sway_binding* FUNC_0 (struct sway_binding*,int *) ;
 int FUNC_1 (struct sway_binding*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

void FUNC_3(struct sway_binding *VAR_1,
  list_t *VAR_2) {
 struct sway_binding *VAR_3 =
  FUNC_0(VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_2(VAR_0, "Overwriting binding for device '%s' "
    "to `%s` from `%s`", VAR_1->input,
    VAR_1->command, VAR_3->command);
  FUNC_1(VAR_3);
 }
}
