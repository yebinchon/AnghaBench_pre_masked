
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct link_socket_info {struct link_socket_addr* lsa; } ;
struct TYPE_14__ {int s_addr; } ;
struct TYPE_13__ {TYPE_6__ sin_addr; } ;
struct TYPE_11__ {scalar_t__ sa_family; } ;
struct TYPE_15__ {TYPE_5__ in4; TYPE_3__ sa; } ;
struct TYPE_12__ {TYPE_7__ addr; } ;
struct TYPE_16__ {TYPE_4__ dest; } ;
struct link_socket_addr {TYPE_2__* current_remote; TYPE_8__ actual; } ;
typedef int in_addr_t ;
struct TYPE_10__ {scalar_t__ ai_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ) ;

in_addr_t
FUNC_2(const struct link_socket_info *VAR_2)
{
    const struct link_socket_addr *VAR_3 = VAR_2->lsa;
    if (VAR_3->actual.dest.addr.sa.sa_family != VAR_0)
    {
        return VAR_1;
    }

    if (FUNC_0(&VAR_3->actual))
    {
        return FUNC_1(VAR_3->actual.dest.addr.in4.sin_addr.s_addr);
    }
    else if (VAR_3->current_remote)
    {
        return FUNC_1(((struct sockaddr_in *)VAR_3->current_remote->ai_addr)
                     ->sin_addr.s_addr);
    }
    else
    {
        return 0;
    }
}
