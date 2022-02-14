
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * HWND ;
typedef int DWORD ;


 int * FUNC_0 (int ,char const*,char const*,int ,int,int,int,int,int *,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static HWND FUNC_2(DWORD VAR_1, DWORD VAR_2)
{
    static const WCHAR VAR_3[] = {'T','e','s','t',' ','t','e','x','t',0};
    static const WCHAR VAR_4[] = {'E','d','i','t',0};
    HWND VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3, VAR_1, 10, 10, 300, 300,
        ((void*)0), ((void*)0), VAR_0, ((void*)0));
    FUNC_1(VAR_5 != ((void*)0), "Failed to create Edit control.\n");
    return VAR_5;
}
