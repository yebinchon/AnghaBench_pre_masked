
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int,struct gc_arena*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0, int VAR_1, int VAR_2, struct gc_arena *VAR_3)
{
    char *VAR_4 = (char *) FUNC_0(FUNC_1(VAR_0) + 1, 1, VAR_3);
    char *VAR_5 = VAR_4;
    char VAR_6;

    do
    {
        VAR_6 = *VAR_0++;
        if (VAR_6 == VAR_1)
        {
            VAR_6 = VAR_2;
        }
        *VAR_5++ = VAR_6;
    }
    while (VAR_6);
    return VAR_4;
}
