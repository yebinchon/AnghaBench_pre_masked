
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pagesetup_data ;
typedef int LONG ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static inline LONG FUNC_1(const pagesetup_data *VAR_0, LONG VAR_1)
{
    if (FUNC_0(VAR_0))
        return 10 * VAR_1;
    else
        return 10 * VAR_1 * 100 / 254;
}
