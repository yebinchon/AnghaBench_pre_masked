
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static BOOL FUNC_3(LPCWSTR VAR_2, LPCWSTR VAR_3, LPCWSTR *VAR_4, LPWSTR VAR_5, DWORD VAR_6) {
    LPCWSTR VAR_7 = VAR_2;
    LPCWSTR VAR_8;
    LPCWSTR VAR_9;

    while(VAR_7 < VAR_3 && (FUNC_0(*VAR_7) || *VAR_7 == ',')) VAR_7++;
    if(VAR_7 >= VAR_3) {
        return VAR_0;
    }
    VAR_8 = VAR_7;
    while(VAR_7 < VAR_3 && *VAR_7 != '\n'&& *VAR_7 != ',') VAR_7++;
    VAR_9 = VAR_7;
    while(FUNC_0(*(VAR_9-1))) VAR_9--;

    FUNC_1(VAR_5, VAR_8, FUNC_2(VAR_6, VAR_9-VAR_8+1));

    if(VAR_4) *VAR_4 = VAR_7;
    return VAR_1;
}
