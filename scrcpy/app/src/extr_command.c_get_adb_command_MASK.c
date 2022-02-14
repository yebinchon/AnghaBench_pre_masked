
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static inline const char *
FUNC_1(void) {
    if (!VAR_0) {
        VAR_0 = FUNC_0("ADB");
        if (!VAR_0)
            VAR_0 = "adb";
    }
    return VAR_0;
}
