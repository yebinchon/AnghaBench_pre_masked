
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct link_socket_actual {int dummy; } ;
struct TYPE_6__ {TYPE_2__* link_socket; int to_link_addr; int to_link; } ;
struct context {TYPE_3__ c2; } ;
struct TYPE_4__ {scalar_t__ proto; } ;
struct TYPE_5__ {struct link_socket_actual socks_relay; TYPE_1__ info; scalar_t__ socks_proxy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct context *VAR_1,
                               struct link_socket_actual **VAR_2,
                               int *VAR_3)
{
    if (VAR_1->c2.link_socket->socks_proxy && VAR_1->c2.link_socket->info.proto == VAR_0)
    {
        *VAR_3 += FUNC_0(&VAR_1->c2.to_link, VAR_1->c2.to_link_addr);
        *VAR_2 = &VAR_1->c2.link_socket->socks_relay;
    }
}
