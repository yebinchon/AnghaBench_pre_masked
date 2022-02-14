
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (char const*,long*) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (char const*) ;
 unsigned char* FUNC_7 (char const*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_0, unsigned char **VAR_1, size_t *VAR_2)
{
    long VAR_3;


    if (FUNC_5(VAR_0, "NULL") == 0) {
        *VAR_1 = ((void*)0);
        *VAR_2 = 0;
        return 1;
    }


    if (*VAR_0 == '\0') {





        *VAR_1 = FUNC_1(1);
        if (*VAR_1 == ((void*)0))
            return 0;
        **VAR_1 = 0;
        *VAR_2 = 0;
        return 1;
    }


    if (VAR_0[0] == '"') {
        size_t VAR_4 = FUNC_6(++VAR_0);

        if (VAR_4 == 0 || VAR_0[VAR_4 - 1] != '"')
            return 0;
        VAR_4--;
        *VAR_1 = FUNC_7(VAR_0, VAR_4, VAR_2);
        return *VAR_1 == ((void*)0) ? 0 : 1;
    }


    if (!FUNC_4(*VAR_1 = FUNC_0(VAR_0, &VAR_3))) {
        FUNC_2("Can't convert %s", VAR_0);
        FUNC_3();
        return -1;
    }

    *VAR_2 = VAR_3;
    return 1;
}
