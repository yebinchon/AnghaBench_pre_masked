
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int LPWSTR ;
typedef int * LPWORD ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*,int ,int ,void*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (void*,char const*,void**,int *) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (char*,char const*,int ,int ) ;

__attribute__((used)) static BOOL FUNC_8(void)
{
    DWORD VAR_1, VAR_2;
    LPWSTR VAR_3;
    UINT VAR_4;
    void* VAR_5;
    BOOL VAR_6 = VAR_0;
    LPWORD VAR_7;

    static const WCHAR VAR_8[] = {'b','r','o','w','s','e','u','i','.','d','l','l',0};
    static const WCHAR VAR_9[] = {'W','i','n','e',0};
    static const WCHAR VAR_10[] =
        {'\\','V','a','r','F','i','l','e','I','n','f','o',
         '\\','T','r','a','n','s','l','a','t','i','o','n',0};
    static const WCHAR VAR_11[] =
        {'\\','S','t','r','i','n','g','F','i','l','e','I','n','f','o',
         '\\','%','0','4','x','%','0','4','x',
         '\\','F','i','l','e','D','e','s','c','r','i','p','t','i','o','n',0};
    WCHAR VAR_12[48];

    VAR_2 = FUNC_0(VAR_8, &VAR_1);
    if(!VAR_2)
        return VAR_0;

    VAR_5 = FUNC_3(FUNC_2(), 0, VAR_2);
    FUNC_1(VAR_8, 0, VAR_2,VAR_5);
    if (FUNC_5(VAR_5, VAR_10, (void **)&VAR_7, &VAR_4))
    {
        FUNC_7(VAR_12, VAR_11, VAR_7[0], VAR_7[1]);
        VAR_6 = !FUNC_5(VAR_5, VAR_12, (void**)&VAR_3, &VAR_4) || !FUNC_6(VAR_3, VAR_9);
    }

    FUNC_4(FUNC_2(), 0, VAR_5);
    return VAR_6;
}
