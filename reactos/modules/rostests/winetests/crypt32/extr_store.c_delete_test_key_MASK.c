
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,char const*,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_6(void)
{
    HKEY VAR_2, VAR_3;
    static const WCHAR VAR_4[] = {'S','o','f','t','w','a','r','e','\\','M','i','c','r','o','s','o','f','t','\\',
        'S','y','s','t','e','m','C','e','r','t','i','f','i','c','a','t','e','s',0};
    static const WCHAR VAR_5[] = {'W','i','n','e','T','e','s','t',0};
    WCHAR VAR_6[32];
    DWORD VAR_7, VAR_8;
    int VAR_9;

    if (FUNC_4(VAR_0, VAR_4, 0, VAR_1, &VAR_2))
        return;
    if (FUNC_4(VAR_2, VAR_5, 0, VAR_1, &VAR_3))
    {
        FUNC_1(VAR_2);
        return;
    }
    FUNC_5(VAR_3, ((void*)0), ((void*)0), ((void*)0), &VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    for (VAR_9 = VAR_7; VAR_9-- > 0;)
    {
        VAR_8 = FUNC_0(VAR_6);
        FUNC_3(VAR_3, VAR_9, VAR_6, &VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        FUNC_2(VAR_3, VAR_6);
    }
    FUNC_1(VAR_3);
    FUNC_2(VAR_2, VAR_5);
    FUNC_1(VAR_2);
}
