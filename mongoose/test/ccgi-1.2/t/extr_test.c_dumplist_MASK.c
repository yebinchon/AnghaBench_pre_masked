
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGI_varlist ;
typedef scalar_t__ CGI_value ;


 char* FUNC_0 (int *) ;
 scalar_t__* FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(CGI_varlist *VAR_0) {
    const char *VAR_1;
    CGI_value *VAR_2;
    int VAR_3;

    for (VAR_1 = FUNC_0(VAR_0); VAR_1 != 0;
        VAR_1 = FUNC_2(VAR_0))
    {
        VAR_2 = FUNC_1(VAR_0, 0);
        for (VAR_3 = 0; VAR_2[VAR_3] != 0; VAR_3++) {
            FUNC_3("%s [%d] >>%s<<\n", VAR_1, VAR_3, VAR_2[VAR_3]);
        }
    }
}
