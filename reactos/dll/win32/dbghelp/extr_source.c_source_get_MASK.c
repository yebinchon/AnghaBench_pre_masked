
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {char const* sources; } ;


 int FUNC_0 (char const*) ;

const char* FUNC_1(const struct module* VAR_0, unsigned VAR_1)
{
    if (VAR_1 == -1) return "";
    FUNC_0(VAR_0->sources);
    return VAR_0->sources + VAR_1;
}
