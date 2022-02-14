
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PUXINI_FILE ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;

BOOL FUNC_2(PUXINI_FILE VAR_5, LPCWSTR VAR_6)
{
    LPCWSTR VAR_7;
    DWORD VAR_8;
    while((VAR_7 = FUNC_1(VAR_5, &VAR_8))) {
        if(FUNC_0(VAR_2, VAR_3, VAR_7, VAR_8, VAR_6, -1) == VAR_0) {
            return VAR_4;
        }
    }
    return VAR_1;
}
