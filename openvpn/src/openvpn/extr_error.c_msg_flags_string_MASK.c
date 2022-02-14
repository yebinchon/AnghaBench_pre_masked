
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*) ;

const char *
FUNC_3(const unsigned int VAR_5, struct gc_arena *VAR_6)
{
    struct buffer VAR_7 = FUNC_1(16, VAR_6);
    if (VAR_5 == VAR_2)
    {
        FUNC_2(&VAR_7, "I");
    }
    if (VAR_5 & VAR_1)
    {
        FUNC_2(&VAR_7, "F");
    }
    if (VAR_5 & VAR_3)
    {
        FUNC_2(&VAR_7, "N");
    }
    if (VAR_5 & VAR_4)
    {
        FUNC_2(&VAR_7, "W");
    }
    if (VAR_5 & VAR_0)
    {
        FUNC_2(&VAR_7, "D");
    }
    return FUNC_0(&VAR_7);
}
