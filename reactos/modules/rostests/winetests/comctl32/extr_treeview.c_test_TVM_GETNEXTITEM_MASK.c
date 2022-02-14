
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int HWND ;
typedef int * HTREEITEM ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_4 (int,char*,int *,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    HTREEITEM VAR_7;
    HWND VAR_8;

    VAR_8 = FUNC_2(0);
    FUNC_3(VAR_8);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_2, 0);
    FUNC_4(VAR_7 == VAR_6, "got %p, expected %p\n", VAR_7, VAR_6);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_2, (LPARAM)VAR_3);
    FUNC_4(VAR_7 == VAR_6, "got %p, expected %p\n", VAR_7, VAR_6);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_2, (LPARAM)VAR_6);
    FUNC_4(VAR_7 == VAR_6, "got %p, expected %p\n", VAR_7, VAR_6);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_2, (LPARAM)VAR_5);
    FUNC_4(VAR_7 == VAR_6, "got %p, expected %p\n", VAR_7, VAR_6);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_0, 0);
    FUNC_4(VAR_7 == VAR_6, "got %p, expected %p\n", VAR_7, VAR_6);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_0, (LPARAM)VAR_6);
    FUNC_4(VAR_7 == VAR_5, "got %p, expected %p\n", VAR_7, VAR_5);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_0, (LPARAM)VAR_3);
    FUNC_4(VAR_7 == VAR_6, "got %p, expected %p\n", VAR_7, VAR_6);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_1, 0);
    FUNC_4(VAR_7 == ((void*)0), "got %p\n", VAR_7);

    VAR_7 = (HTREEITEM)FUNC_1(VAR_8, VAR_4, VAR_1, (LPARAM)VAR_5);
    FUNC_4(VAR_7 == VAR_6, "got %p, expected %p\n", VAR_7, VAR_6);

    FUNC_0(VAR_8);
}
