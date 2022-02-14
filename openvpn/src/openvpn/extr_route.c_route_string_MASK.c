
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_ipv4 {int flags; int metric; int gateway; int netmask; int network; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,int ,...) ;
 int FUNC_3 (int ,int ,struct gc_arena*) ;

__attribute__((used)) static const char *
FUNC_4(const struct route_ipv4 *VAR_1, struct gc_arena *VAR_2)
{
    struct buffer VAR_3 = FUNC_1(256, VAR_2);
    FUNC_2(&VAR_3, "ROUTE network %s netmask %s gateway %s",
               FUNC_3(VAR_1->network, 0, VAR_2),
               FUNC_3(VAR_1->netmask, 0, VAR_2),
               FUNC_3(VAR_1->gateway, 0, VAR_2)
               );
    if (VAR_1->flags & VAR_0)
    {
        FUNC_2(&VAR_3, " metric %d", VAR_1->metric);
    }
    return FUNC_0(&VAR_3);
}
