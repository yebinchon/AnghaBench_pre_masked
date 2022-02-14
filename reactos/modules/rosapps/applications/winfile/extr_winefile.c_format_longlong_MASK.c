
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONGLONG ;
typedef int LPWSTR ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static void FUNC_1(LPWSTR VAR_0, ULONGLONG VAR_1)
{
    WCHAR VAR_2[65], *VAR_3 = &VAR_2[64];

    *VAR_3 = 0;
    do {
        *(--VAR_3) = '0' + VAR_1 % 10;
 VAR_1 /= 10;
    } while (VAR_1);
    FUNC_0( VAR_0, VAR_3 );
}
