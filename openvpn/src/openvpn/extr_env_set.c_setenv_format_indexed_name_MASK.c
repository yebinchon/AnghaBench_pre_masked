
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 struct buffer FUNC_1 (scalar_t__,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,char const*,...) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static const char *
FUNC_4(const char *VAR_0, const int VAR_1, struct gc_arena *VAR_2)
{
    struct buffer VAR_3 = FUNC_1(FUNC_3(VAR_0) + 16, VAR_2);
    if (VAR_1 >= 0)
    {
        FUNC_2(&VAR_3, "%s_%d", VAR_0, VAR_1);
    }
    else
    {
        FUNC_2(&VAR_3, "%s", VAR_0);
    }
    return FUNC_0(&VAR_3);
}
