
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int **) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,...) ;

__attribute__((used)) static void FUNC_5(json_object *VAR_0) {
 json_object *VAR_1, *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 FUNC_2(VAR_0, "identifier", &VAR_1);
 FUNC_2(VAR_0, "name", &VAR_2);
 FUNC_2(VAR_0, "type", &VAR_3);
 FUNC_2(VAR_0, "product", &VAR_4);
 FUNC_2(VAR_0, "vendor", &VAR_5);

 const char *VAR_8 =
  "Input device: %s\n"
  "  Type: %s\n"
  "  Identifier: %s\n"
  "  Product ID: %d\n"
  "  Vendor ID: %d\n";


 FUNC_4(VAR_8, FUNC_1(VAR_2),
  FUNC_3(FUNC_1(VAR_3)),
  FUNC_1(VAR_1),
  FUNC_0(VAR_4),
  FUNC_0(VAR_5));

 if (FUNC_2(VAR_0, "xkb_active_layout_name", &VAR_6)) {
  const char *VAR_9 = FUNC_1(VAR_6);
  FUNC_4("  Active Keyboard Layout: %s\n", VAR_9 ? VAR_9 : "(unnamed)");
 }

 if (FUNC_2(VAR_0, "libinput", &VAR_7)) {
  json_object *VAR_10;
  if (FUNC_2(VAR_7, "send_events", &VAR_10)) {
   FUNC_4("  Libinput Send Events: %s\n",
     FUNC_1(VAR_10));
  }
 }

 FUNC_4("\n");
}
