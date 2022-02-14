
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,char) ;

__attribute__((used)) static void FUNC_4(HWND VAR_2)
{
    WCHAR VAR_3[VAR_0], *VAR_4;

    FUNC_1( VAR_2, VAR_1, VAR_3, FUNC_0(VAR_3));
    VAR_4 = FUNC_3(VAR_3, '\\');
    if (VAR_4 != ((void*)0)) {
 FUNC_2(VAR_3, VAR_4+1);
    }
    VAR_4 = FUNC_3(VAR_3, ':');
    if (VAR_4 != ((void*)0)) {
 FUNC_2(VAR_3, VAR_4+1);
    }

}
