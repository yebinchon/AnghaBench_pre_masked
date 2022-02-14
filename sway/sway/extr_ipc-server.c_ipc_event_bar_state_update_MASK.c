
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_config {int visible_by_modifier; int id; } ;
typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;

void FUNC_9(struct bar_config *VAR_2) {
 if (!FUNC_0(VAR_0)) {
  return;
 }
 FUNC_8(VAR_1, "Sending bar_state_update event");

 json_object *VAR_3 = FUNC_3();
 FUNC_5(VAR_3, "id", FUNC_4(VAR_2->id));
 FUNC_5(VAR_3, "visible_by_modifier",
   FUNC_2(VAR_2->visible_by_modifier));

 const char *VAR_4 = FUNC_7(VAR_3);
 FUNC_1(VAR_4, VAR_0);
 FUNC_6(VAR_3);
}
