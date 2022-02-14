
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int FUNC_0 (char*,...) ;
 long FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_0, uint16_t *VAR_1) {
    char *VAR_2;
    if (*VAR_0 == '\0') {
        FUNC_0("Max size parameter is empty");
        return 0;
    }
    long VAR_3 = FUNC_1(VAR_0, &VAR_2, 0);
    if (*VAR_2 != '\0') {
        FUNC_0("Invalid max size: %s", VAR_0);
        return 0;
    }
    if (VAR_3 & ~0xffff) {
        FUNC_0("Max size must be between 0 and 65535: %ld", VAR_3);
        return 0;
    }

    *VAR_1 = (uint16_t) VAR_3;
    return 1;
}
