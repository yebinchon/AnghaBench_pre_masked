
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int calculated_number ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,char**) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(const char* VAR_0, int* VAR_1) {
    while(*VAR_0 && FUNC_1(*VAR_0)) VAR_0++;

    if(FUNC_4(!*VAR_0)) goto fallback;

    if(*VAR_0 == 'n' && !FUNC_3(VAR_0, "never")) {

        *VAR_1 = 0;
        return 1;
    }


    if(!(FUNC_0(*VAR_0) || *VAR_0 == '+' || *VAR_0 == '-')) goto fallback;

    char *VAR_2 = ((void*)0);
    calculated_number VAR_3 = FUNC_2(VAR_0, &VAR_2);
    if(VAR_2 && *VAR_2) {
        switch (*VAR_2) {
            case 'Y':
                *VAR_1 = (int) (VAR_3 * 31536000);
                break;
            case 'M':
                *VAR_1 = (int) (VAR_3 * 2592000);
                break;
            case 'w':
                *VAR_1 = (int) (VAR_3 * 604800);
                break;
            case 'd':
                *VAR_1 = (int) (VAR_3 * 86400);
                break;
            case 'h':
                *VAR_1 = (int) (VAR_3 * 3600);
                break;
            case 'm':
                *VAR_1 = (int) (VAR_3 * 60);
                break;
            case 's':
            default:
                *VAR_1 = (int) (VAR_3);
                break;
        }
    }
    else
        *VAR_1 = (int)(VAR_3);

    return 1;

    fallback:
    *VAR_1 = 0;
    return 0;
}
