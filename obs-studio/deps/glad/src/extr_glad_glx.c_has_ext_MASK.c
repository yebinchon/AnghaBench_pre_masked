
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3) {
    const char *VAR_4;
    const char *VAR_5;
    const char *VAR_6;

    if(!VAR_2)
        return 0;

    VAR_6 = FUNC_0(VAR_0, VAR_1);

    if(VAR_6 == ((void*)0) || VAR_3 == ((void*)0))
        return 0;

    while(1) {
        VAR_5 = FUNC_2(VAR_6, VAR_3);
        if(VAR_5 == ((void*)0))
            break;

        VAR_4 = VAR_5 + FUNC_1(VAR_3);
        if((VAR_5 == VAR_6 || *(VAR_5 - 1) == ' ') &&
            (*VAR_4 == ' ' || *VAR_4 == '\0'))
        {
            return 1;
        }
        VAR_6 = VAR_4;
    }

    return 0;
}
