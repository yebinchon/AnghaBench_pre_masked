
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VARIANT ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int const*) ;
 int ** FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static inline WCHAR *FUNC_3(const VARIANT *VAR_1)
{
    if (FUNC_2(VAR_1) == VAR_0)
        return FUNC_0(VAR_1);

    if (FUNC_1(VAR_1))
        return *FUNC_1(VAR_1);

    return ((void*)0);
}
