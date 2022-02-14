
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RLang ;
typedef int FILE ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(RLang *VAR_0, const char *VAR_1, int VAR_2) {
 const char *VAR_3 = "_tmp.zig";
 FILE *VAR_4 = FUNC_5 (VAR_3, "w");
 if (VAR_4) {
  const char *VAR_5 = "extern fn puts(&const u8) void;\n" "extern fn r_core_cmd_str(&u8, &const u8) &u8;\n" "extern fn r_core_new() &u8;\n" "extern fn r_core_free(&u8) void;\n" "\n" "export fn entry(core: &u8) void {\n";






  const char *VAR_6 = "\n}\n" "pub fn r2cmd(core: &u8, cmd: u8) &u8 {\n" "  return r_core_cmd_str(core, cmd);\n" "}\n";




  FUNC_2 (VAR_5, VAR_4);
  FUNC_2 (VAR_1, VAR_4);
  FUNC_2 (VAR_6, VAR_4);
  FUNC_1 (VAR_4);
  FUNC_3 (VAR_0, VAR_3);
  FUNC_4 (VAR_3);
 } else {
  FUNC_0 ("Cannot open %s\n", VAR_3);
 }
 return 1;
}
