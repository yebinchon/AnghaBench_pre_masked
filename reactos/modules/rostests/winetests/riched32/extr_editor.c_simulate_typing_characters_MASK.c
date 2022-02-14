
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;


 int FUNC_0 (int ,int ,char const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,char const,int) ;

__attribute__((used)) static void FUNC_2(HWND VAR_3, const char* VAR_4)
{
    int VAR_5;

    while (*VAR_4 != '\0') {
        FUNC_0(VAR_3, VAR_1, *VAR_4, 1);
        VAR_5 = FUNC_0(VAR_3, VAR_0, *VAR_4, 1);
        FUNC_1(VAR_5 == 0, "WM_CHAR('%c') ret=%d\n", *VAR_4, VAR_5);
        FUNC_0(VAR_3, VAR_2, *VAR_4, 1);
        VAR_4++;
    }
}
