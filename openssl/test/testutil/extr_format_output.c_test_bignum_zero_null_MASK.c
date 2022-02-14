
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static const char *FUNC_1(const BIGNUM *VAR_0)
{
    if (VAR_0 != ((void*)0))
        return FUNC_0(VAR_0) ? "-0" : "0";
    return "NULL";
}
