
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int*,int const*,int) ;

__attribute__((used)) static inline void FUNC_3(const WCHAR* VAR_0,
    WCHAR* VAR_1)
{
    int VAR_2;

    for (VAR_2 = FUNC_1(VAR_0) - 1; (VAR_2 > 0) && (!FUNC_0(VAR_0[VAR_2])); VAR_2--);

    FUNC_2(VAR_1, VAR_0, VAR_2);
    VAR_1[VAR_2] = L'\0';
}
