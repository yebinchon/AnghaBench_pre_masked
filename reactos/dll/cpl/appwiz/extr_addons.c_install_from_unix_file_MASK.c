
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum install_res { ____Placeholder_install_res } install_res ;
typedef int WCHAR ;
typedef int UINT ;
typedef char* LPWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static enum install_res FUNC_12(const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
    LPWSTR VAR_7;
    char *VAR_8;
    int VAR_9, VAR_10;
    enum install_res VAR_11;
    UINT VAR_12;

    VAR_10 = FUNC_11(VAR_4);
    VAR_8 = FUNC_6(VAR_10+FUNC_11(VAR_5)+FUNC_11(VAR_6)+3);
    if(!VAR_8)
        return VAR_1;

    FUNC_9(VAR_8, VAR_4, VAR_10);
    if(VAR_10 && VAR_8[VAR_10-1] != '/' && VAR_8[VAR_10-1] != '\\')
        VAR_8[VAR_10++] = '/';
    if(*VAR_5) {
        FUNC_10(VAR_8+VAR_10, VAR_5);
        VAR_10 += FUNC_11(VAR_5);
        VAR_8[VAR_10++] = '/';
    }
    FUNC_10(VAR_8+VAR_10, VAR_6);

    VAR_9 = FUNC_4(VAR_8, VAR_3);
    if(VAR_9 == -1) {
        FUNC_1("%s not found\n", FUNC_5(VAR_8));
        FUNC_7(VAR_8);
        return VAR_2;
    }

    FUNC_3(VAR_9);

    FUNC_2("Could not get wine_get_dos_file_name function, calling install_cab directly.\n");
    VAR_12 = FUNC_0( VAR_0, 0, VAR_8, -1, 0, 0);
    VAR_7 = FUNC_6 (VAR_12*sizeof(WCHAR));
    FUNC_0( VAR_0, 0, VAR_8, -1, VAR_7, VAR_12);

    FUNC_7(VAR_8);

    VAR_11 = FUNC_8(VAR_7);

    FUNC_7(VAR_7);
    return VAR_11;
}
