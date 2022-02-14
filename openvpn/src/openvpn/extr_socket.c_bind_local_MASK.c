
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ proto; int bind_ipv6_only; TYPE_1__* lsa; } ;
struct link_socket {TYPE_2__ info; int sd; int ctrl_sd; scalar_t__ socks_proxy; scalar_t__ bind_local; } ;
typedef int sa_family_t ;
struct TYPE_3__ {int bind_local; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int const,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct link_socket *VAR_1, const sa_family_t VAR_2)
{

    if (VAR_1->bind_local)
    {
        if (VAR_1->socks_proxy && VAR_1->info.proto == VAR_0)
        {
            FUNC_0(VAR_1->ctrl_sd, VAR_1->info.lsa->bind_local,
                        VAR_2, "SOCKS", 0);
        }
        else
        {
            FUNC_0(VAR_1->sd, VAR_1->info.lsa->bind_local,
                        VAR_2,
                        "TCP/UDP", VAR_1->info.bind_ipv6_only);
        }
    }
}
