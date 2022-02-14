
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGI_varlist ;
typedef scalar_t__ CGI_value ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 scalar_t__* FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char const*,int,scalar_t__) ;
 int VAR_0 ;

int
FUNC_7(int VAR_1, char **VAR_2, char **VAR_3) {
    CGI_varlist *VAR_4;
    const char *VAR_5;
    CGI_value *VAR_6;
    int VAR_7;

    FUNC_5("Content-type: text/plain\r\n\r\n", VAR_0);
    FUNC_5("Environment:\r\n", VAR_0);
    for (VAR_7 = 0; VAR_3[VAR_7] != 0; VAR_7++) {
        FUNC_5(VAR_3[VAR_7], VAR_0);
        FUNC_5("\r\n", VAR_0);
    }

    if ((VAR_4 = FUNC_2("/tmp/cgi-upload-XXXXXX")) == 0) {
        FUNC_5("CGI_get_all() failed\r\n", VAR_0);
        return 0;
    }
    FUNC_5("\r\nCGI Variables:\r\n", VAR_0);

    for (VAR_5 = FUNC_0(VAR_4); VAR_5 != 0;
        VAR_5 = FUNC_4(VAR_4))
    {
        VAR_6 = FUNC_3(VAR_4, 0);
        for (VAR_7 = 0; VAR_6[VAR_7] != 0; VAR_7++) {
            FUNC_6("%s [%d] >>%s<<\r\n", VAR_5, VAR_7, VAR_6[VAR_7]);
        }
    }
    FUNC_1(VAR_4);
    return 0;
}
