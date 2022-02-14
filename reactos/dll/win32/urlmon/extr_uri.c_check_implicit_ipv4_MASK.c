
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONGLONG ;
typedef int UINT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static BOOL FUNC_1(const WCHAR **VAR_3, UINT *VAR_4) {
    const WCHAR *VAR_5 = *VAR_3;
    ULONGLONG VAR_6 = 0;
    *VAR_4 = 0;

    while(FUNC_0(**VAR_3)) {
        VAR_6 = VAR_6*10 + (**VAR_3 - '0');

        if(VAR_6 > VAR_2) {
            *VAR_3 = VAR_5;
            return VAR_0;
        }
        ++(*VAR_3);
    }

    if(*VAR_3 == VAR_5)
        return VAR_0;

    *VAR_4 = VAR_6;
    return VAR_1;
}
