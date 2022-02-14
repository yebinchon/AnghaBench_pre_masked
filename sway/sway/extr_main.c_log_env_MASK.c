
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int log_vars ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*,int ) ;

__attribute__((used)) static void FUNC_2(void) {
 const char *VAR_1[] = {
  "LD_LIBRARY_PATH",
  "LD_PRELOAD",
  "PATH",
  "SWAYSOCK",
 };
 for (size_t VAR_2 = 0; VAR_2 < sizeof(VAR_1) / sizeof(char *); ++VAR_2) {
  FUNC_1(VAR_0, "%s=%s", VAR_1[VAR_2], FUNC_0(VAR_1[VAR_2]));
 }
}
