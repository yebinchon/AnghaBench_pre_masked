
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef int DWORD ;


 int * FUNC_0 (int ,int ,int *,int ,int ,int ,int,int,int *,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static HWND FUNC_2(DWORD VAR_2, DWORD VAR_3)
{
    HWND VAR_4;


    VAR_4 = FUNC_0(VAR_3, VAR_0, ((void*)0), VAR_2,

        0, 0, 300, 20,

        ((void*)0), ((void*)0), VAR_1, ((void*)0));
    FUNC_1(VAR_4 != ((void*)0), "failed to create status wnd\n");
    return VAR_4;
}
