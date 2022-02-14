
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char* FUNC_0 (struct buffer*) ;
 unsigned int const VAR_0 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,...) ;

char *
FUNC_3(const char **VAR_1, struct gc_arena *VAR_2, const unsigned int VAR_3)
{
    struct buffer VAR_4 = FUNC_1(256, VAR_2);
    int VAR_5 = 0;
    for (;; )
    {
        const char *VAR_6 = *VAR_1++;
        if (!VAR_6)
        {
            break;
        }
        if (VAR_5)
        {
            FUNC_2(&VAR_4, " ");
        }
        if (VAR_3 & VAR_0)
        {
            FUNC_2(&VAR_4, "[%s]", VAR_6);
        }
        else
        {
            FUNC_2(&VAR_4, "%s", VAR_6);
        }
        ++VAR_5;
    }
    return FUNC_0(&VAR_4);
}
