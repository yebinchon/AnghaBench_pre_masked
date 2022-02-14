
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bstr ;


 int FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(bstr VAR_0, const char *const *VAR_1)
{
    for (int VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
        if (FUNC_1(FUNC_0(VAR_1[VAR_2]), VAR_0) == 0)
            return 1;
    }
    return 0;
}
