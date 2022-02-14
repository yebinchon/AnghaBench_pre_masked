
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_print_t ;
typedef char byte ;


 int FUNC_0 (int const*,char*) ;
 int FUNC_1 (int const*,char*,char const) ;

void FUNC_2(const mp_print_t *VAR_0, const byte *VAR_1, size_t VAR_2, bool VAR_3) {

    bool VAR_4 = 0;
    bool VAR_5 = 0;
    for (const byte *VAR_6 = VAR_1, *VAR_7 = VAR_1 + VAR_2; !VAR_5 && VAR_6 < VAR_7; VAR_6++) {
        if (*VAR_6 == '\'') {
            VAR_4 = 1;
        } else if (*VAR_6 == '"') {
            VAR_5 = 1;
        }
    }
    int VAR_8 = '\'';
    if (VAR_4 && !VAR_5) {
        VAR_8 = '"';
    }
    FUNC_1(VAR_0, "%c", VAR_8);
    for (const byte *VAR_9 = VAR_1, *VAR_10 = VAR_1 + VAR_2; VAR_9 < VAR_10; VAR_9++) {
        if (*VAR_9 == VAR_8) {
            FUNC_1(VAR_0, "\\%c", VAR_8);
        } else if (*VAR_9 == '\\') {
            FUNC_0(VAR_0, "\\\\");
        } else if (*VAR_9 >= 0x20 && *VAR_9 != 0x7f && (!VAR_3 || *VAR_9 < 0x80)) {



            FUNC_1(VAR_0, "%c", *VAR_9);
        } else if (*VAR_9 == '\n') {
            FUNC_0(VAR_0, "\\n");
        } else if (*VAR_9 == '\r') {
            FUNC_0(VAR_0, "\\r");
        } else if (*VAR_9 == '\t') {
            FUNC_0(VAR_0, "\\t");
        } else {
            FUNC_1(VAR_0, "\\x%02x", *VAR_9);
        }
    }
    FUNC_1(VAR_0, "%c", VAR_8);
}
