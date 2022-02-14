
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
 Display *VAR_1 = FUNC_5(((void*)0));
 if (!VAR_1) {
  FUNC_6(VAR_0, "Unable to open X display");
  return;
 }

 int VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_3(VAR_1);
 const char *VAR_5 = FUNC_2(VAR_1);

 if (FUNC_7(VAR_5, "X.Org")) {
  FUNC_6(VAR_0,
       "Window System: X%d.%d, Vendor: %s, Version: %d"
       ".%d.%d",
       VAR_2, VAR_3, VAR_5,
       VAR_4 / 10000000, (VAR_4 / 100000) % 100,
       (VAR_4 / 1000) % 100);
 } else {
  FUNC_6(VAR_0,
       "Window System: X%d.%d - vendor string: %s - "
       "vendor release: %d",
       VAR_2, VAR_3, VAR_5,
       VAR_4);
 }

 FUNC_4(VAR_1);
}
