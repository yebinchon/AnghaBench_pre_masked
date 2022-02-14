
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket {unsigned int rwflags_debug; int writes; int reads; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,...) ;
 int FUNC_3 (int *) ;

const char *
FUNC_4(const struct link_socket *VAR_2, unsigned int VAR_3, struct gc_arena *VAR_4)
{
    struct buffer VAR_5 = FUNC_1(64, VAR_4);
    if (VAR_2)
    {
        if (VAR_3 & VAR_0)
        {
            FUNC_2(&VAR_5, "S%s",
                       (VAR_2->rwflags_debug & VAR_0) ? "R" : "r");




        }
        if (VAR_3 & VAR_1)
        {
            FUNC_2(&VAR_5, "S%s",
                       (VAR_2->rwflags_debug & VAR_1) ? "W" : "w");




        }
    }
    else
    {
        FUNC_2(&VAR_5, "S?");
    }
    return FUNC_0(&VAR_5);
}
