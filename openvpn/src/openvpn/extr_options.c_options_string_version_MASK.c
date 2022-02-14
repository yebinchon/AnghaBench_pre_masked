
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer*) ;
 char const* FUNC_1 (struct buffer*) ;
 struct buffer FUNC_2 (int,struct gc_arena*) ;
 int FUNC_3 (char*,char const*,int) ;

const char *
FUNC_4(const char *VAR_0, struct gc_arena *VAR_1)
{
    struct buffer VAR_2 = FUNC_2(4, VAR_1);
    FUNC_3((char *) FUNC_0(&VAR_2), VAR_0, 3);
    return FUNC_1(&VAR_2);
}
