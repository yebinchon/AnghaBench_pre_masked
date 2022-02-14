
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef int DWORD ;


 int * FUNC_0 (int ,int ,char*,int ,int,int,int,int,int *,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static HWND FUNC_3 (DWORD VAR_4, DWORD VAR_5)
{
    HWND VAR_6;

    VAR_6 = FUNC_0(VAR_5, VAR_1, "Text Text", VAR_4, 10, 10, 300, 300,
        ((void*)0), ((void*)0), VAR_2, ((void*)0));
    FUNC_2 (VAR_6 != ((void*)0), "CreateWindow EDIT Control failed\n");

    if (VAR_3)
 FUNC_1 (VAR_6, VAR_0);
    return VAR_6;
}
