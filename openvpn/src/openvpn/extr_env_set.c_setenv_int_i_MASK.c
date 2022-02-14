
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;


 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 char* FUNC_2 (char const*,int const,struct gc_arena*) ;
 int FUNC_3 (struct env_set*,char const*,int const) ;

void
FUNC_4(struct env_set *VAR_0, const char *VAR_1, const int VAR_2, const int VAR_3)
{
    struct gc_arena VAR_4 = FUNC_1();
    const char *VAR_5 = FUNC_2(VAR_1, VAR_3, &VAR_4);
    FUNC_3(VAR_0, VAR_5, VAR_2);
    FUNC_0(&VAR_4);
}
