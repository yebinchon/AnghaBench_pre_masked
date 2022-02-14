
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int * HRSRC ;
typedef int DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char const*,int ) ;
 char* FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,char const*,int ,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*,char const*) ;
 int VAR_2 ;
 char const* VAR_3 ;

__attribute__((used)) static BSTR FUNC_6(const char *VAR_4)
{
    const char *VAR_5;
    DWORD VAR_6, VAR_7;
    BSTR VAR_8;
    HRSRC VAR_9;

    VAR_2 = VAR_1;
    VAR_3 = VAR_4;

    VAR_9 = FUNC_0(((void*)0), VAR_4, (LPCSTR)40);
    FUNC_5(VAR_9 != ((void*)0), "Could not find resource %s\n", VAR_4);

    VAR_6 = FUNC_3(((void*)0), VAR_9);
    VAR_5 = FUNC_1(((void*)0), VAR_9);

    VAR_7 = FUNC_2(VAR_0, 0, VAR_5, VAR_6, ((void*)0), 0);
    VAR_8 = FUNC_4(((void*)0), VAR_7);
    FUNC_2(VAR_0, 0, VAR_5, VAR_6, VAR_8, VAR_7);

    return VAR_8;
}
