
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int HWND ;
typedef int * HGDIOBJ ;
typedef int HDC ;
typedef int * HBITMAP ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_6 (int ,int *) ;

__attribute__((used)) static HBITMAP
FUNC_7(HWND VAR_2, INT VAR_3, INT VAR_4)
{
    HBITMAP VAR_5 = ((void*)0);
    HDC VAR_6, VAR_7;
    HGDIOBJ VAR_8;

    VAR_6 = FUNC_3(VAR_2);
    if (!VAR_6)
        return ((void*)0);

    VAR_7 = FUNC_1(VAR_6);
    if (!VAR_7)
        goto earth;

    VAR_5 = FUNC_4(VAR_3, VAR_4);
    if (VAR_5)
    {
        VAR_8 = FUNC_6(VAR_7, VAR_5);
        FUNC_0(VAR_7, 0, 0, VAR_3, VAR_4, VAR_6, 0, 0, VAR_1 | VAR_0);
        FUNC_6(VAR_7, VAR_8);
    }

    FUNC_2(VAR_7);

earth:
    FUNC_5(VAR_2, VAR_6);

    return VAR_5;
}
