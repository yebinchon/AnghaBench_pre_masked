
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0, const char *VAR_1)
{

    const char *VAR_2 = "/";



    size_t VAR_3 = FUNC_3(VAR_0) + FUNC_3(VAR_2) + FUNC_3(VAR_1) + 1;
    char *VAR_4 = FUNC_2(VAR_3);

    if (VAR_4 != ((void*)0)) {
        FUNC_1(VAR_4, VAR_0, VAR_3);
        FUNC_0(VAR_4, VAR_2, VAR_3);
        FUNC_0(VAR_4, VAR_1, VAR_3);
    }

    return VAR_4;
}
