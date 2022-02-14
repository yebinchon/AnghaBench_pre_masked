
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef int DWORD ;


 int * FUNC_0 (int ,char*,char*,int ,int,int,int,int,int *,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static HWND FUNC_4 (DWORD VAR_3, DWORD VAR_4)
{
    HWND VAR_5;

    VAR_5 = FUNC_0(VAR_4,
     "EDIT",
     "Test Text",
     VAR_3,
     10, 10, 300, 300,
     ((void*)0), ((void*)0), VAR_1, ((void*)0));
    FUNC_3 (VAR_5 != ((void*)0), "CreateWindow EDIT Control failed\n");
    FUNC_2 (VAR_5);
    if (VAR_2)
 FUNC_1 (VAR_5, VAR_0);
    return VAR_5;
}
