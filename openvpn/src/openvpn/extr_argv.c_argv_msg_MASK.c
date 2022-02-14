
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct argv {int dummy; } ;


 int FUNC_0 (struct argv const*,struct gc_arena*,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 int FUNC_3 (int const,char*,int ) ;

void
FUNC_4(const int VAR_0, const struct argv *VAR_1)
{
    struct gc_arena VAR_2 = FUNC_2();
    FUNC_3(VAR_0, "%s", FUNC_0(VAR_1, &VAR_2, 0));
    FUNC_1(&VAR_2);
}
