
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mime ;
typedef char WCHAR ;
typedef int LPBYTE ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*,int *) ;
 scalar_t__ FUNC_4 (int ,char const*,int *,int *,int ,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,scalar_t__) ;

HRESULT FUNC_8(const WCHAR *VAR_3, WCHAR **VAR_4)
{
    DWORD VAR_5, VAR_6;
    WCHAR VAR_7[64];
    HKEY VAR_8;

    static const WCHAR VAR_9[] = {'C','o','n','t','e','n','t',' ','T','y','p','e','\0'};

    VAR_5 = FUNC_3(VAR_1, VAR_3, &VAR_8);
    if(VAR_5 != VAR_0)
        return FUNC_1(VAR_5);

    VAR_6 = sizeof(VAR_7);
    VAR_5 = FUNC_4(VAR_8, VAR_9, ((void*)0), ((void*)0), (LPBYTE)VAR_7, &VAR_6);
    FUNC_2(VAR_8);
    if(VAR_5 != VAR_0)
        return FUNC_1(VAR_5);

    FUNC_5("found MIME %s\n", FUNC_6(VAR_7));

    *VAR_4 = FUNC_0(VAR_6);
    FUNC_7(*VAR_4, VAR_7, VAR_6);
    return VAR_2;
}
