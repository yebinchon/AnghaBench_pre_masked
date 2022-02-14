
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;
typedef int in_addr_t ;


 int FUNC_0 (struct buffer*) ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,char const*,...) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (int const,int ,struct gc_arena*) ;
 int FUNC_6 (struct env_set*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct env_set *VAR_0, const char *VAR_1, const in_addr_t VAR_2, int VAR_3)
{
    struct gc_arena VAR_4 = FUNC_4();
    struct buffer VAR_5 = FUNC_1(256, &VAR_4);
    if (VAR_3 >= 0)
    {
        FUNC_2(&VAR_5, "route_%s_%d", VAR_1, VAR_3);
    }
    else
    {
        FUNC_2(&VAR_5, "route_%s", VAR_1);
    }
    FUNC_6(VAR_0, FUNC_0(&VAR_5), FUNC_5(VAR_2, 0, &VAR_4));
    FUNC_3(&VAR_4);
}
