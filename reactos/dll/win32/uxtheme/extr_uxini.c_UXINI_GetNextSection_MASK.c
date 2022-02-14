
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PUXINI_FILE ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 char* FUNC_0 (int ,int*) ;

LPCWSTR FUNC_1(PUXINI_FILE VAR_0, DWORD *VAR_1)
{
    LPCWSTR VAR_2;
    while((VAR_2 = FUNC_0(VAR_0, VAR_1))) {

        if(VAR_2[0] == '[') {
            VAR_2++;
            *VAR_1 -= 2;
            break;
        }
    }
    return VAR_2;
}
