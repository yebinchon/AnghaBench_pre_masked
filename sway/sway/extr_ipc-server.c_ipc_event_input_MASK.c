
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_input_device {int dummy; } ;
typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sway_input_device*) ;
 int FUNC_2 (char const*,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;

void FUNC_9(const char *VAR_2, struct sway_input_device *VAR_3) {
 if (!FUNC_0(VAR_0)) {
  return;
 }
 FUNC_8(VAR_1, "Sending input event");

 json_object *VAR_4 = FUNC_3();
 FUNC_5(VAR_4, "change", FUNC_4(VAR_2));
 FUNC_5(VAR_4, "input", FUNC_1(VAR_3));

 const char *VAR_5 = FUNC_7(VAR_4);
 FUNC_2(VAR_5, VAR_0);
 FUNC_6(VAR_4);
}
