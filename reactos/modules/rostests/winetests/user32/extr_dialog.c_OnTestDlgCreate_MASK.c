
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
 void* FUNC_0 (int,char*,char*,int,int,int,int,int,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;

__attribute__((used)) static BOOL FUNC_1 (HWND VAR_19, LPCREATESTRUCTA VAR_20)
{
    VAR_18 = FUNC_0( VAR_9 | VAR_10 |
            VAR_12 | VAR_11 | VAR_8,
            "Edit", "Edit",
            VAR_7 | VAR_14 | VAR_13 | VAR_3 | VAR_2,
            16,33,184,24, VAR_19, (HMENU)101, VAR_15, 0);
    if (!VAR_18) return VAR_4;

    VAR_16 = FUNC_0( VAR_9 | VAR_10 | VAR_12
            | VAR_11,
            "button", "Button &1",
            VAR_7 | VAR_14 | VAR_13 | VAR_0 | VAR_1,
            204,33,30,24, VAR_19, (HMENU)201, VAR_15, 0);
    if (!VAR_16) return VAR_4;

    VAR_17 = FUNC_0( VAR_9 | VAR_10 | VAR_12
            | VAR_11, "button",
            "Button &2",
            VAR_7 | VAR_14 | VAR_13 | VAR_0 | VAR_1,
            90,102,80,24, VAR_19, (HMENU)VAR_5, VAR_15, 0);
    if (!VAR_17) return VAR_4;

    return VAR_6;
}
