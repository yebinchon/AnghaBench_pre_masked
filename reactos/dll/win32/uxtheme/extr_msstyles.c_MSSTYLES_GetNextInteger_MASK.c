
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(LPCWSTR VAR_2, LPCWSTR VAR_3, LPCWSTR *VAR_4, int *VAR_5)
{
    LPCWSTR VAR_6 = VAR_2;
    int VAR_7 = 0;
    BOOL VAR_8 = VAR_0;

    while(VAR_6 < VAR_3 && ((*VAR_6 < '0' || *VAR_6 > '9') && *VAR_6 != '-')) VAR_6++;
    if(VAR_6 >= VAR_3) {
        return VAR_0;
    }
    if(*VAR_6 == '-') {
        VAR_6++;
        VAR_8 = VAR_1;
    }
    while(VAR_6 < VAR_3 && (*VAR_6 >= '0' && *VAR_6 <= '9')) {
        VAR_7 = VAR_7 * 10 + (*VAR_6 - '0');
        VAR_6++;
    }
    if(VAR_8) VAR_7 = -VAR_7;
    *VAR_5 = VAR_7;
    if(VAR_4) *VAR_4 = VAR_6;
    return VAR_1;
}
