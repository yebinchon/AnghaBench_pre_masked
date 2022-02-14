
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct argv {scalar_t__ argv; } ;


 char const* FUNC_0 (char const**,struct gc_arena*,unsigned int const) ;

const char *
FUNC_1(const struct argv *VAR_0, struct gc_arena *VAR_1, const unsigned int VAR_2)
{
    if (VAR_0->argv)
    {
        return FUNC_0((const char **)VAR_0->argv, VAR_1, VAR_2);
    }
    else
    {
        return "";
    }
}
