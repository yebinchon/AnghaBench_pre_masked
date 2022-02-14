
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ,int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,int,char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int ) ;
 int FUNC_6 (char const*,char**,int) ;

uint32_t FUNC_7(const char *VAR_3, char **VAR_4) {

 VAR_2 = 0;
 char *VAR_5;
 int VAR_6 = FUNC_6(VAR_3, &VAR_5, 10);
 if (VAR_5 == VAR_3 && VAR_6 <= 0) {
  *VAR_4 = FUNC_3("Button event code must be a positive integer.");
  return 0;
 } else if (VAR_2 == VAR_0) {
  *VAR_4 = FUNC_3("Button event code out of range.");
  return 0;
 }
 const char *VAR_7 = FUNC_0(VAR_1, VAR_6);
 if (!VAR_7 || FUNC_5(VAR_7, "BTN_", FUNC_4("BTN_")) != 0) {
  size_t VAR_8 = FUNC_2(((void*)0), 0, "Event code %d (%s) is not a button",
    VAR_6, VAR_7) + 1;
  *VAR_4 = FUNC_1(VAR_8);
  if (*VAR_4) {
   FUNC_2(*VAR_4, VAR_8, "Event code %d (%s) is not a button",
     VAR_6, VAR_7);
  }
  return 0;
 }
 return VAR_6;
}
