
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint32_t ;







 int VAR_0 ;




 int FUNC_0 (int ,char const*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,char const*) ;
 char* FUNC_3 (char*) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,size_t) ;
 scalar_t__ FUNC_6 (char const*,char*,size_t) ;

uint32_t FUNC_7(const char *VAR_1, char **VAR_2) {
 if (FUNC_5(VAR_1, "button", FUNC_4("button")) == 0) {

  int VAR_3 = VAR_1[FUNC_4("button")] - '0';
  if (VAR_3 < 1 || VAR_3 > 9 || FUNC_4(VAR_1) > FUNC_4("button0")) {
   *VAR_2 = FUNC_3("Only buttons 1-9 are supported. For other mouse "
     "buttons, use the name of the event code.");
   return 0;
  }
  static const uint32_t VAR_4[] = {135, 134, 133,
   128, 131, 130,
   129, 132, 136};
  return VAR_4[VAR_3 - 1];
 } else if (FUNC_6(VAR_1, "BTN_", FUNC_4("BTN_")) == 0) {

  int VAR_5 = FUNC_0(VAR_0, VAR_1);
  if (VAR_5 == -1) {
   size_t VAR_6 = FUNC_2(((void*)0), 0, "Unknown event %s", VAR_1) + 1;
   *VAR_2 = FUNC_1(VAR_6);
   if (*VAR_2) {
    FUNC_2(*VAR_2, VAR_6, "Unknown event %s", VAR_1);
   }
   return 0;
  }
  return VAR_5;
 }
 return 0;
}
