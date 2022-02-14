
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int HMENU ;
typedef int CREATESTRUCTA ;
typedef int BOOL ;


 void* FUNC_0 (int ,char*,int,int,int,int,int,int ,int ,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static BOOL FUNC_1(HWND VAR_13, CREATESTRUCTA *VAR_14)
{
    VAR_11 = FUNC_0(VAR_5, "Contents of static control before DlgDirList.",
        VAR_7 | VAR_9, 10, 10, 512, 32, VAR_13, (HMENU)VAR_1, ((void*)0), 0);
    if (!VAR_11) return VAR_0;

    VAR_12 = FUNC_0(VAR_4, "DlgDirList test",
        VAR_7 | VAR_9 | VAR_8 | VAR_6 | VAR_10, 10, 60, 256, 256,
        VAR_13, (HMENU)VAR_2, ((void*)0), 0);
    if (!VAR_12) return VAR_0;

    return VAR_3;
}
