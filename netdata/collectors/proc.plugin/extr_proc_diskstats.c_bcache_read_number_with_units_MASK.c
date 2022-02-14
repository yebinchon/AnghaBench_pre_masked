
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 long double FUNC_2 (char*,char**) ;

__attribute__((used)) static unsigned long long int FUNC_3(const char *VAR_0) {
    char VAR_1[50 + 1];
    if(FUNC_1(VAR_0, VAR_1, 50) == 0) {
        static int VAR_2 = 10;

        char *VAR_3 = ((void*)0);
        long double VAR_4 = FUNC_2(VAR_1, &VAR_3);
        if(VAR_3 && *VAR_3) {
            if(*VAR_3 == 'k')
                return (unsigned long long int)(VAR_4 * 1024.0);
            else if(*VAR_3 == 'M')
                return (unsigned long long int)(VAR_4 * 1024.0 * 1024.0);
            else if(*VAR_3 == 'G')
                return (unsigned long long int)(VAR_4 * 1024.0 * 1024.0 * 1024.0);
            else if(*VAR_3 == 'T')
                return (unsigned long long int)(VAR_4 * 1024.0 * 1024.0 * 1024.0 * 1024.0);
            else if(VAR_2 > 0) {
                FUNC_0("bcache file '%s' provides value '%s' with unknown units '%s'", VAR_0, VAR_1, VAR_3);
                VAR_2--;
            }
        }

        return (unsigned long long int)VAR_4;
    }

    return 0;
}
