
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 size_t FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_0, size_t VAR_1, char VAR_2) {
    size_t VAR_3 = 0;

    switch(VAR_2) {
    case '\\':
    case '"':
        VAR_3 = FUNC_1(VAR_0,VAR_1,"\"\\%c\"",VAR_2);
        break;
    case '\n': VAR_3 = FUNC_1(VAR_0,VAR_1,"\"\\n\""); break;
    case '\r': VAR_3 = FUNC_1(VAR_0,VAR_1,"\"\\r\""); break;
    case '\t': VAR_3 = FUNC_1(VAR_0,VAR_1,"\"\\t\""); break;
    case '\a': VAR_3 = FUNC_1(VAR_0,VAR_1,"\"\\a\""); break;
    case '\b': VAR_3 = FUNC_1(VAR_0,VAR_1,"\"\\b\""); break;
    default:
        if (FUNC_0(VAR_2))
            VAR_3 = FUNC_1(VAR_0,VAR_1,"\"%c\"",VAR_2);
        else
            VAR_3 = FUNC_1(VAR_0,VAR_1,"\"\\x%02x\"",(unsigned char)VAR_2);
        break;
    }

    return VAR_3;
}
