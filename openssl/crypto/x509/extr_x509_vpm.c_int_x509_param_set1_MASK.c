
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(char **VAR_0, size_t *VAR_1,
                               const char *VAR_2, size_t VAR_3)
{
    void *VAR_4;
    if (VAR_2) {
        if (VAR_3 == 0)
            VAR_3 = FUNC_2(VAR_2);

        VAR_4 = FUNC_1(VAR_2, VAR_3);
        if (VAR_4 == ((void*)0))
            return 0;
    } else {
        VAR_4 = ((void*)0);
        VAR_3 = 0;
    }
    FUNC_0(*VAR_0);
    *VAR_0 = VAR_4;
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_3;
    return 1;
}
