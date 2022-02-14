
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGI_varlist ;


 int * FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 char* FUNC_4 (char*,char**) ;
 char* FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

CGI_varlist *
FUNC_7(CGI_varlist *VAR_0) {
    const char *VAR_1;
    char *VAR_2, *VAR_3, *VAR_4[2];

    if ((VAR_1 = FUNC_2("HTTP_COOKIE")) == 0) {
        return VAR_0;
    }
    VAR_2 = (char *) FUNC_3(FUNC_6(VAR_1) + 1);
    VAR_3 = FUNC_5(VAR_2, VAR_1);
    while ((VAR_3 = FUNC_4(VAR_3, VAR_4)) != 0) {
        VAR_0 = FUNC_0(VAR_0, VAR_4[0], VAR_4[1]);
    }
    FUNC_1(VAR_2);
    return VAR_0;
}
