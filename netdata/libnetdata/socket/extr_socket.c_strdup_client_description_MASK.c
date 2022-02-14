
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;





 int FUNC_0 (char*,int,char*,char const*,char const*,...) ;
 char* FUNC_1 (char*) ;

char *FUNC_2(int VAR_0, const char *VAR_1, const char *VAR_2, uint16_t VAR_3) {
    char VAR_4[100 + 1];

    switch(VAR_0) {
        case 130:
            FUNC_0(VAR_4, 100, "%s:%s:%d", VAR_1, VAR_2, VAR_3);
            break;

        case 129:
        default:
            FUNC_0(VAR_4, 100, "%s:[%s]:%d", VAR_1, VAR_2, VAR_3);
            break;

        case 128:
            FUNC_0(VAR_4, 100, "%s:%s", VAR_1, VAR_2);
            break;
    }

    return FUNC_1(VAR_4);
}
