
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const**) ;

__attribute__((used)) static BOOL FUNC_1(const WCHAR **VAR_2, BOOL VAR_3) {
    const WCHAR *VAR_4 = *VAR_2;

    if(!FUNC_0(VAR_2)) {
        *VAR_2 = VAR_4;
        return VAR_0;
    }

    if(**VAR_2 != '.') {
        *VAR_2 = VAR_4;
        return VAR_0;
    }

    ++(*VAR_2);
    if(!FUNC_0(VAR_2)) {
        *VAR_2 = VAR_4;
        return VAR_0;
    }

    if(**VAR_2 != '.') {
        if(VAR_3) {
            *VAR_2 = VAR_4;
            return VAR_0;
        } else
            return VAR_1;
    }

    ++(*VAR_2);
    if(!FUNC_0(VAR_2)) {
        *VAR_2 = VAR_4;
        return VAR_0;
    }

    if(**VAR_2 != '.') {
        if(VAR_3) {
            *VAR_2 = VAR_4;
            return VAR_0;
        } else
            return VAR_1;
    }

    ++(*VAR_2);
    if(!FUNC_0(VAR_2)) {
        *VAR_2 = VAR_4;
        return VAR_0;
    }


    return VAR_1;
}
