
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol { ____Placeholder_protocol } protocol ;






__attribute__((used)) static const char *FUNC_0(enum protocol VAR_0) {
    char *VAR_1 = "unknown";
    switch(VAR_0) {
        case 130:
            VAR_1 = "ascii";
            break;
        case 129:
            VAR_1 = "binary";
            break;
        case 128:
            VAR_1 = "auto-negotiate";
            break;
    }
    return VAR_1;
}
