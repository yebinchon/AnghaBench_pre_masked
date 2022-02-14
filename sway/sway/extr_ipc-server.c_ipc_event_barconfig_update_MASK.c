
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_config {int dummy; } ;
typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct bar_config*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

void FUNC_6(struct bar_config *VAR_2) {
 if (!FUNC_0(VAR_0)) {
  return;
 }
 FUNC_5(VAR_1, "Sending barconfig_update event");
 json_object *VAR_3 = FUNC_1(VAR_2);

 const char *VAR_4 = FUNC_4(VAR_3);
 FUNC_2(VAR_4, VAR_0);
 FUNC_3(VAR_3);
}
