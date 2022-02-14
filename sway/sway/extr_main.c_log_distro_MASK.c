
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int paths ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_4(void) {
 const char *VAR_1[] = {
  "/etc/lsb-release",
  "/etc/os-release",
  "/etc/debian_version",
  "/etc/redhat-release",
  "/etc/gentoo-release",
 };
 for (size_t VAR_2 = 0; VAR_2 < sizeof(VAR_1) / sizeof(char *); ++VAR_2) {
  FILE *VAR_3 = FUNC_1(VAR_1[VAR_2], "r");
  if (VAR_3) {
   FUNC_3(VAR_0, "Contents of %s:", VAR_1[VAR_2]);
   FUNC_2(VAR_3);
   FUNC_0(VAR_3);
  }
 }
}
