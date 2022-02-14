
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RLang ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(RLang *VAR_0, const char *VAR_1, int VAR_2) {
 FILE *VAR_3 = FUNC_5 ("_tmp.rs", "w");
 if (VAR_3) {
  const char *VAR_4 = "use std::ffi::CStr;\n" "extern {\n" "        pub fn r_core_cmd_str(core: *const u8, s: *const u8) -> *const u8;\n" "        pub fn free (ptr: *const u8);\n" "}\n" "\n" "pub struct R2;\n" "\n" "#[allow(dead_code)]\n" "impl R2 {\n" "        fn cmdstr(&self, c: *const u8, str: &str) -> String {\n" "                unsafe {\n" "                        let ptr = r_core_cmd_str(c, str.as_ptr()) as *const i8;\n" "                        let c_str = CStr::from_ptr(ptr).to_string_lossy().into_owned();\n" "                        free (ptr as *const u8);\n" "                        String::from (c_str)\n" "                }\n" "        }\n" "}\n" "\n" "#[no_mangle]\n" "#[allow(unused_variables)]\n" "#[allow(unused_unsafe)]\n" "pub extern fn entry(core: *const u8) {\n" "        let r2 = R2;\n" "        unsafe { /* because core is external */\n";
  const char *VAR_5 = "        }\n" "}\n";


  FUNC_2 (VAR_4, VAR_3);
  FUNC_2 (VAR_1, VAR_3);
  FUNC_2 (VAR_5, VAR_3);
  FUNC_1 (VAR_3);
  FUNC_3 (VAR_0, "_tmp.rs");
  FUNC_4 ("_tmp.rs");
 } else FUNC_0 ("Cannot open _tmp.rs\n");
 return 1;
}
