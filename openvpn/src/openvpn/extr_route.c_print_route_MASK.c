
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_ipv4 {int flags; } ;
struct gc_arena {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (struct route_ipv4 const*,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_4(const struct route_ipv4 *VAR_1, int VAR_2)
{
    struct gc_arena VAR_3 = FUNC_1();
    if (VAR_1->flags & VAR_0)
    {
        FUNC_2(VAR_2, "%s", FUNC_3(VAR_1, &VAR_3));
    }
    FUNC_0(&VAR_3);
}
