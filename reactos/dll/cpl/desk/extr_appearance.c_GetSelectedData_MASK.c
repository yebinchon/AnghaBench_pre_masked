
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int * PVOID ;
typedef scalar_t__ INT ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static PVOID
FUNC_2(HWND VAR_3, int VAR_4)
{
    HWND VAR_5;
    INT VAR_6;

    VAR_5 = FUNC_0(VAR_3, VAR_4);
    VAR_6 = FUNC_1(VAR_5, VAR_1, 0, 0);
    if (VAR_6 == VAR_0)
        return ((void*)0);
    return (PVOID)FUNC_1(VAR_5, VAR_2, (WPARAM)VAR_6, 0);
}
