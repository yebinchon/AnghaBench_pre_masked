
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct gc_arena {int dummy; } ;
typedef int k ;


 int FUNC_0 (char const*,char*,char*,int,int,char const**) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char*,struct gc_arena*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0, const char *VAR_1, struct gc_arena *VAR_2)
{
    char VAR_3[64];
    char VAR_4[256];
    const char *VAR_5 = VAR_1;

    while (1)
    {
        const int VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4, sizeof(VAR_3), sizeof(VAR_4), &VAR_5);
        if (VAR_6)
        {
            if (!FUNC_2(VAR_0, VAR_3))
            {
                return FUNC_3(VAR_4, VAR_2);
            }
        }
        else
        {
            return ((void*)0);
        }


        if (*VAR_5 == ',')
        {
            ++VAR_5;
        }
        while (*VAR_5 && FUNC_1(*VAR_5))
        {
            ++VAR_5;
        }
    }
}
