
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGI_varlist ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,int,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (int *,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

CGI_varlist *
FUNC_8(CGI_varlist *VAR_1, const char *VAR_2) {
    const char *VAR_3;
    char *VAR_4;
    int VAR_5;

    if ((VAR_3 = FUNC_4("CONTENT_TYPE")) != 0 &&
        FUNC_7(VAR_3, "application/x-www-form-urlencoded", 33) == 0 &&
        (VAR_3 = FUNC_4("CONTENT_LENGTH")) != 0 &&
        (VAR_5 = FUNC_1(VAR_3)) > 0)
    {
        VAR_4 = (char *) FUNC_5(VAR_5 + 1);
        if (FUNC_2(VAR_4, 1, VAR_5, VAR_0) == VAR_5) {
            VAR_4[VAR_5] = 0;
            VAR_1 = FUNC_0(VAR_1, VAR_4);
        }
        FUNC_3(VAR_4);
    }
    else {
        VAR_1 = FUNC_6(VAR_1, VAR_2);
    }
    return VAR_1;
}
