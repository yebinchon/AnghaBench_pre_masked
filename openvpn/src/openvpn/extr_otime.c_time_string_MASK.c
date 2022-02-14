
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,long) ;
 int FUNC_3 (struct buffer*,char) ;
 long FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct timeval*,int *) ;

const char *
FUNC_6(time_t VAR_0, int VAR_1, bool VAR_2, struct gc_arena *VAR_3)
{
    struct buffer VAR_4 = FUNC_1(64, VAR_3);
    struct timeval VAR_5;

    if (VAR_0)
    {
        VAR_5.tv_sec = VAR_0;
        VAR_5.tv_usec = VAR_1;
    }
    else
    {
        FUNC_5(&VAR_5, ((void*)0));
    }

    VAR_0 = VAR_5.tv_sec;
    FUNC_2(&VAR_4, "%s", FUNC_4(&VAR_0));
    FUNC_3(&VAR_4, '\n');

    if (VAR_2 && VAR_5.tv_usec)
    {
        FUNC_2(&VAR_4, " us=%ld", (long)VAR_5.tv_usec);
    }

    return FUNC_0(&VAR_4);
}
