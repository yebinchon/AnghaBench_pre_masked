
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int LPARAM ;
typedef int HWND ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(HWND VAR_3, WPARAM VAR_4, BYTE VAR_5, BOOL VAR_6)
{
    LPARAM VAR_7 = 1 + (VAR_5 << 16) + (VAR_6 ? VAR_0 : 0);

    FUNC_0(VAR_3, VAR_1, VAR_4, VAR_7);
    FUNC_0(VAR_3, VAR_2 , VAR_4, VAR_7 | 0xc000000);
}
