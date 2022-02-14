
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const char *VAR_2) {
    const char *VAR_3;
    const char *VAR_4;
    const char *VAR_5;

    if(&FUNC_3 == ((void*)0) && &FUNC_2 == ((void*)0))
        return 0;

    if(&FUNC_2 == ((void*)0) || VAR_0 == VAR_1)
        VAR_5 = FUNC_3();
    else
        VAR_5 = FUNC_2(VAR_0);

    if(VAR_5 == ((void*)0) || VAR_2 == ((void*)0))
        return 0;

    while(1) {
        VAR_4 = FUNC_1(VAR_5, VAR_2);
        if(VAR_4 == ((void*)0))
            break;

        VAR_3 = VAR_4 + FUNC_0(VAR_2);
        if((VAR_4 == VAR_5 || *(VAR_4 - 1) == ' ') &&
            (*VAR_3 == ' ' || *VAR_3 == '\0'))
        {
            return 1;
        }
        VAR_5 = VAR_3;
    }

    return 0;
}
