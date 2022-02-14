
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int INT ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static WCHAR FUNC_2(const WCHAR *VAR_0) {
    WCHAR VAR_1 = '\0';

    if(*VAR_0 == '%' && FUNC_1(*(VAR_0 + 1)) && FUNC_1(*(VAR_0 + 2))) {
        INT VAR_2 = FUNC_0(*(VAR_0 + 1));
        INT VAR_3 = FUNC_0(*(VAR_0 + 2));

        VAR_1 = VAR_2 << 4;
        VAR_1 += VAR_3;
    }

    return VAR_1;
}
