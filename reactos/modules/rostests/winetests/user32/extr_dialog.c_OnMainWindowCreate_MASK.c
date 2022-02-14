
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCREATESTRUCTA ;
typedef int HWND ;
typedef int HMENU ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,char*,int,int,int,int,int,int ,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static BOOL FUNC_1(HWND VAR_13, LPCREATESTRUCTA VAR_14)
{
    VAR_10 = FUNC_0("button", "Button &1",
            VAR_6 | VAR_8 | VAR_7 | VAR_0 | VAR_2,
            10, 10, 80, 80, VAR_13, (HMENU)100, VAR_9, 0);
    if (!VAR_10) return VAR_3;

    VAR_11 = FUNC_0("button", "Button &2",
            VAR_6 | VAR_8 | VAR_1 | VAR_2,
            110, 10, 80, 80, VAR_13, (HMENU)200, VAR_9, 0);
    if (!VAR_11) return VAR_3;

    VAR_12 = FUNC_0("button", "Cancel",
            VAR_6 | VAR_8 | VAR_7 | VAR_1 | VAR_2,
            210, 10, 80, 80, VAR_13, (HMENU)VAR_4, VAR_9, 0);
    if (!VAR_12) return VAR_3;

    return VAR_5;
}
