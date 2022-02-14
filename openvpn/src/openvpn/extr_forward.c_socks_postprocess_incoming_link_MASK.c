
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int from; int buf; TYPE_2__* link_socket; } ;
struct context {TYPE_3__ c2; } ;
struct TYPE_4__ {scalar_t__ proto; } ;
struct TYPE_5__ {TYPE_1__ info; scalar_t__ socks_proxy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct context *VAR_1)
{
    if (VAR_1->c2.link_socket->socks_proxy && VAR_1->c2.link_socket->info.proto == VAR_0)
    {
        FUNC_0(&VAR_1->c2.buf, &VAR_1->c2.from);
    }
}
