
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;


 char* FUNC_0 (char const*,struct gc_arena*) ;
 int FUNC_1 (char*,unsigned int const,unsigned int const,char const) ;

const char *
FUNC_2(const char *VAR_0,
                 const unsigned int VAR_1,
                 const unsigned int VAR_2,
                 const char VAR_3,
                 struct gc_arena *VAR_4)
{
    if (VAR_0)
    {
        char *VAR_5 = FUNC_0(VAR_0, VAR_4);
        FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);
        return VAR_5;
    }
    else
    {
        return ((void*)0);
    }
}
