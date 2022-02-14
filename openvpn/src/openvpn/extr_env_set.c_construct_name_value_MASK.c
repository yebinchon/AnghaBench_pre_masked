
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (struct buffer*) ;
 struct buffer FUNC_2 (scalar_t__,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0, const char *VAR_1, struct gc_arena *VAR_2)
{
    struct buffer VAR_3;

    FUNC_0(VAR_0);
    if (!VAR_1)
    {
        VAR_1 = "";
    }
    VAR_3 = FUNC_2(FUNC_4(VAR_0) + FUNC_4(VAR_1) + 2, VAR_2);
    FUNC_3(&VAR_3, "%s=%s", VAR_0, VAR_1);
    return FUNC_1(&VAR_3);
}
