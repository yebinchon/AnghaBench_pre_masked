
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int CLSID ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char const*,int *) ;
 scalar_t__ FUNC_4 (int ,int *,char*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL FUNC_9(const WCHAR *VAR_3, CLSID *VAR_4)
{
    WCHAR VAR_5[64], VAR_6[64];
    DWORD VAR_7;
    LONG VAR_8;
    HKEY VAR_9;
    HRESULT VAR_10;

    static const WCHAR VAR_11[] =
        {'\\','S','c','r','i','p','t','E','n','g','i','n','e',0};

    VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_9);
    if(VAR_7 != VAR_0)
        return VAR_1;

    VAR_8 = FUNC_0(VAR_5);
    VAR_7 = FUNC_4(VAR_9, ((void*)0), VAR_5, &VAR_8);
    FUNC_2(VAR_9);
    if(VAR_7 != VAR_0)
        return VAR_1;

    FUNC_6("fileid is %s\n", FUNC_8(VAR_5));

    FUNC_7(VAR_5, VAR_11);
    VAR_7 = FUNC_3(VAR_2, VAR_5, &VAR_9);
    if(VAR_7 != VAR_0)
        return VAR_1;

    VAR_8 = FUNC_0(VAR_6);
    VAR_7 = FUNC_4(VAR_9, ((void*)0), VAR_6, &VAR_8);
    FUNC_2(VAR_9);
    if(VAR_7 != VAR_0)
        return VAR_1;

    FUNC_6("ProgID is %s\n", FUNC_8(VAR_6));

    VAR_10 = FUNC_1(VAR_6, VAR_4);
    return FUNC_5(VAR_10);
}
