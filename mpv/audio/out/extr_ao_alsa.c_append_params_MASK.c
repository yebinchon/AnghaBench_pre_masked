
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (void*,char*,...) ;
 char* FUNC_4 (void*,char const*) ;

__attribute__((used)) static char *FUNC_5(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    if (!VAR_2 || !VAR_2[0])
        return FUNC_4(VAR_0, VAR_1);

    int VAR_3 = FUNC_2(VAR_1);
    char *VAR_4 = FUNC_1(VAR_1, ':');
    if (!VAR_4) {

        return FUNC_3(VAR_0, "%s:%s", VAR_1, VAR_2);
    } else if (VAR_4[1] == '\0') {

        return FUNC_3(VAR_0, "%s%s", VAR_1, VAR_2);
    } else if (VAR_4[1] == '{' && VAR_1[VAR_3 - 1] == '}') {

        return FUNC_3(VAR_0, "%.*s %s}", VAR_3 - 1, VAR_1, VAR_2);
    } else {

        return FUNC_3(VAR_0, "%s,%s", VAR_1, VAR_2);
    }
    FUNC_0();
}
