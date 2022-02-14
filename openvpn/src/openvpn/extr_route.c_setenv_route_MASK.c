
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_ipv4 {int flags; int metric; int gateway; int netmask; int network; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,int) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (struct env_set*,int ,int ) ;
 int FUNC_6 (struct env_set*,char*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct env_set *VAR_2, const struct route_ipv4 *VAR_3, int VAR_4)
{
    struct gc_arena VAR_5 = FUNC_4();
    if (VAR_3->flags & VAR_0)
    {
        FUNC_6(VAR_2, "network", VAR_3->network, VAR_4);
        FUNC_6(VAR_2, "netmask", VAR_3->netmask, VAR_4);
        FUNC_6(VAR_2, "gateway", VAR_3->gateway, VAR_4);

        if (VAR_3->flags & VAR_1)
        {
            struct buffer VAR_6 = FUNC_1(256, &VAR_5);
            FUNC_2(&VAR_6, "route_metric_%d", VAR_4);
            FUNC_5(VAR_2, FUNC_0(&VAR_6), VAR_3->metric);
        }
    }
    FUNC_3(&VAR_5);
}
