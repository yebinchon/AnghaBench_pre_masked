
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {char* locked_username; } ;


 scalar_t__ FUNC_0 (char const*) ;

const char *
FUNC_1(const struct tls_multi *VAR_0, const bool VAR_1)
{
    const char *VAR_2 = ((void*)0);
    if (VAR_0)
    {
        VAR_2 = VAR_0->locked_username;
    }
    if (VAR_2 && FUNC_0(VAR_2))
    {
        return VAR_2;
    }
    else if (VAR_1)
    {
        return ((void*)0);
    }
    else
    {
        return "UNDEF";
    }
}
