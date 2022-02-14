
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {int process_is_64bit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct game_capture*,char*,char*) ;
 int FUNC_2 (struct game_capture*,char*,char const*) ;
 int FUNC_3 (struct game_capture*,char*) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (struct game_capture*) ;

__attribute__((used)) static inline bool FUNC_7(struct game_capture *VAR_0)
{
 bool VAR_1;
 bool VAR_2 = 0;
 const char *VAR_3;
 char *VAR_4;
 char *VAR_5;

 if (VAR_0->process_is_64bit) {
  VAR_3 = "graphics-hook64.dll";
  VAR_4 = FUNC_5("inject-helper64.exe");
 } else {
  VAR_3 = "graphics-hook32.dll";
  VAR_4 = FUNC_5("inject-helper32.exe");
 }

 VAR_5 = FUNC_5(VAR_3);

 if (!FUNC_1(VAR_0, VAR_4, "inject helper")) {
  goto cleanup;
 }
 if (!FUNC_1(VAR_0, VAR_5, "graphics hook")) {
  goto cleanup;
 }




 VAR_1 = !VAR_0->process_is_64bit;


 if (VAR_1 && !FUNC_6(VAR_0)) {
  FUNC_4("using direct hook");
  VAR_2 = FUNC_3(VAR_0, VAR_5);
 } else {
  FUNC_4("using helper (%s hook)",
       FUNC_6(VAR_0) ? "compatibility" : "direct");
  VAR_2 = FUNC_2(VAR_0, VAR_4, VAR_3);
 }

cleanup:
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 return VAR_2;
}
