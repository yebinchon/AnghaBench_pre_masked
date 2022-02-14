
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_5(const WCHAR *VAR_1)
{
    char *VAR_2, *VAR_3;
    BOOL VAR_4;

    VAR_3 = FUNC_2(VAR_1);
    if(!VAR_3)
        return VAR_0;

    VAR_2 = FUNC_0("Gecko-Content-Viewers", VAR_3);

    VAR_4 = VAR_2 != ((void*)0) && !FUNC_4(VAR_2, "@mozilla.org/content/document-loader-factory;1");

    FUNC_1(VAR_3);
    FUNC_3(VAR_2);
    return VAR_4;
}
