
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static BOOL FUNC_1(const WCHAR **VAR_2) {
    const WCHAR *VAR_3 = *VAR_2;

    if(**VAR_2 != '%')
        return VAR_0;

    ++(*VAR_2);
    if(!FUNC_0(**VAR_2)) {
        *VAR_2 = VAR_3;
        return VAR_0;
    }

    ++(*VAR_2);
    if(!FUNC_0(**VAR_2)) {
        *VAR_2 = VAR_3;
        return VAR_0;
    }

    ++(*VAR_2);
    return VAR_1;
}
