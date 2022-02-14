
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int FUNC_0 (char**,char*,...) ;
 int FUNC_1 (double) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*) ;

char *FUNC_4(const char *VAR_1, double VAR_2)
{
    if (VAR_2 == VAR_0)
        return FUNC_3(((void*)0), "unknown");
    char *VAR_3 = VAR_2 < 0 ? "-" : "";
    VAR_2 = VAR_2 < 0 ? -VAR_2 : VAR_2;
    long long int VAR_4 = VAR_2;
    long long int VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9 = FUNC_1((VAR_2 - VAR_4) * 1000);
    if (VAR_9 >= 1000) {
        VAR_9 -= 1000;
        VAR_4 += 1;
    }
    VAR_8 = VAR_4;
    VAR_7 = VAR_8 / 60;
    VAR_5 = VAR_8 / 3600;
    VAR_8 -= VAR_5 * 3600;
    VAR_6 = VAR_8 / 60;
    VAR_8 -= VAR_6 * 60;
    char *VAR_10 = FUNC_3(((void*)0), "");
    while (*VAR_1) {
        if (VAR_1[0] == '%') {
            VAR_1++;
            switch (VAR_1[0]) {
            case 'h': FUNC_0(&VAR_10, "%s%lld", VAR_3, VAR_5); break;
            case 'H': FUNC_0(&VAR_10, "%s%02lld", VAR_3, VAR_5); break;
            case 'm': FUNC_0(&VAR_10, "%s%lld", VAR_3, VAR_7); break;
            case 'M': FUNC_0(&VAR_10, "%02lld", VAR_6); break;
            case 's': FUNC_0(&VAR_10, "%s%lld", VAR_3, VAR_4); break;
            case 'S': FUNC_0(&VAR_10, "%02lld", VAR_8); break;
            case 'T': FUNC_0(&VAR_10, "%03d", VAR_9); break;
            case 'f': FUNC_0(&VAR_10, "%f", VAR_2); break;
            case '%': FUNC_0(&VAR_10, "%s", "%"); break;
            default: goto error;
            }
            VAR_1++;
        } else {
            FUNC_0(&VAR_10, "%c", *VAR_1);
            VAR_1++;
        }
    }
    return VAR_10;
error:
    FUNC_2(VAR_10);
    return ((void*)0);
}
