
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_ipv6 {int flags; int gateway; int netbits; int network; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,int,...) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (int ,int ,struct gc_arena*) ;
 int FUNC_6 (struct env_set*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct env_set *VAR_1, const struct route_ipv6 *VAR_2, int VAR_3)
{
    struct gc_arena VAR_4 = FUNC_4();
    if (VAR_2->flags & VAR_0)
    {
        struct buffer VAR_5 = FUNC_1( 256, &VAR_4 );
        struct buffer VAR_6 = FUNC_1( 256, &VAR_4 );
        struct buffer VAR_7 = FUNC_1( 256, &VAR_4 );

        FUNC_2( &VAR_5, "route_ipv6_network_%d", VAR_3 );
        FUNC_2( &VAR_6, "%s/%d", FUNC_5( VAR_2->network, 0, &VAR_4 ),
                    VAR_2->netbits );
        FUNC_6( VAR_1, FUNC_0(&VAR_5), FUNC_0(&VAR_6) );

        FUNC_2( &VAR_7, "route_ipv6_gateway_%d", VAR_3 );
        FUNC_6( VAR_1, FUNC_0(&VAR_7), FUNC_5( VAR_2->gateway, 0, &VAR_4 ));
    }
    FUNC_3(&VAR_4);
}
