
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCREATESTRUCTA ;
typedef int HWND ;
typedef int HMENU ;
typedef int BOOL ;


 void* FUNC_0 (char*,char*,int,int,int,int,int,int ,int ,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static BOOL FUNC_1 (HWND VAR_11, LPCREATESTRUCTA VAR_12)
{
    VAR_9 = FUNC_0(
        "Static",
        "Contents of static control before DlgDirList.",
        VAR_5 | VAR_7,
        10, 10, 512, 32,
        VAR_11, (HMENU)VAR_1, ((void*)0), 0);
    if (!VAR_9) return VAR_0;
    VAR_10 = FUNC_0(
        "ListBox",
        "DlgDirList test",
        VAR_5 | VAR_7 | VAR_6 | VAR_4 | VAR_8,
        10, 60, 256, 256,
        VAR_11, (HMENU)VAR_2, ((void*)0), 0);
    if (!VAR_10) return VAR_0;

    return VAR_3;
}
