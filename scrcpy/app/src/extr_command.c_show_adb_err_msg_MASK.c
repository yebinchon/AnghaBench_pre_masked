
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum process_result { ____Placeholder_process_result } process_result ;
typedef int buf ;


 int FUNC_0 (char*,...) ;



 int FUNC_1 (char const* const*,char*,int) ;

__attribute__((used)) static void
FUNC_2(enum process_result VAR_0, const char *const VAR_1[]) {
    char VAR_2[512];
    switch (VAR_0) {
        case 130:
            FUNC_1(VAR_1, VAR_2, sizeof(VAR_2));
            FUNC_0("Failed to execute: %s", VAR_2);
            break;
        case 129:
            FUNC_1(VAR_1, VAR_2, sizeof(VAR_2));
            FUNC_0("Command not found: %s", VAR_2);
            FUNC_0("(make 'adb' accessible from your PATH or define its full"
                 "path in the ADB environment variable)");
            break;
        case 128:

            break;
    }
}
