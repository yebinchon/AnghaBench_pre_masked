
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 struct buffer FUNC_0 (scalar_t__,struct gc_arena*) ;
 int FUNC_1 (struct buffer*,char const*,scalar_t__) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*) ;

struct buffer
FUNC_5(const char *VAR_0, struct gc_arena *VAR_1)
{
    FUNC_2(VAR_0);

    const char *VAR_2 = (const char *) FUNC_3();
    struct buffer VAR_3 = FUNC_0(FUNC_4(VAR_2) + 1, VAR_1);
    FUNC_1(&VAR_3, VAR_2, FUNC_4(VAR_2) + 1);

    return VAR_3;
}
