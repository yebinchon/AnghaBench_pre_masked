
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 int * FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int **) ;
 int FUNC_5 (char const*,...) ;

__attribute__((used)) static void FUNC_6(json_object *VAR_0) {
 json_object *VAR_1, *VAR_2, *VAR_3;
 FUNC_4(VAR_0, "name", &VAR_1);
 FUNC_4(VAR_0, "capabilities", &VAR_2);
 FUNC_4(VAR_0, "devices", &VAR_3);

 const char *VAR_4 =
  "Seat: %s\n"
  "  Capabilities: %d\n";

 FUNC_5(VAR_4, FUNC_3(VAR_1),
  FUNC_2(VAR_2));

 size_t VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 > 0) {
  FUNC_5("  Devices:\n");
  for (size_t VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   json_object *VAR_7 = FUNC_0(VAR_3, VAR_6);

   json_object *VAR_8;
   FUNC_4(VAR_7, "name", &VAR_8);

   FUNC_5("    %s\n", FUNC_3(VAR_8));
  }
 }

 FUNC_5("\n");
}
