
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef scalar_t__ HMENU ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,char*,int,int ,int ,int,int,int *,scalar_t__,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static HWND FUNC_3(DWORD VAR_5, HWND VAR_6)
{
    HMENU VAR_7 = 0;
    HWND VAR_8;

    if (VAR_6)
    {
        VAR_5 |= VAR_3|VAR_0;
        VAR_7 = (HMENU)VAR_1;
    }
    VAR_8 = FUNC_0(0, VAR_2, "test", VAR_5, 0, 0, 50, 14, VAR_6, VAR_7, 0, ((void*)0));
    FUNC_1(VAR_8 != ((void*)0), "failed to create a button, 0x%08x, %p\n", VAR_5, VAR_6);
    FUNC_2(VAR_8, VAR_4, 0, 0);
    return VAR_8;
}
