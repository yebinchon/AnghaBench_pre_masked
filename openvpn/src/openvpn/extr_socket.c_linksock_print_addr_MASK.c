
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* lsa; int af; int proto; } ;
struct link_socket {scalar_t__ mode; TYPE_5__ info; scalar_t__ bind_local; scalar_t__ inetd; } ;
struct gc_arena {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addr; struct addrinfo* ai_next; } ;
typedef scalar_t__ sa_family_t ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
struct TYPE_8__ {TYPE_1__ sa; } ;
struct TYPE_9__ {TYPE_2__ addr; } ;
struct TYPE_12__ {TYPE_3__ dest; } ;
struct TYPE_10__ {TYPE_6__ actual; struct addrinfo* bind_local; } ;


 int FUNC_0 (struct addrinfo*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 int FUNC_3 (int const,char*,int ,...) ;
 int FUNC_4 (TYPE_6__*,char*,int ,struct gc_arena*) ;
 int FUNC_5 (int ,struct gc_arena*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct link_socket *VAR_4)
{
    struct gc_arena VAR_5 = FUNC_2();
    const int VAR_6 = (VAR_4->mode == VAR_1) ? VAR_0 : VAR_2;


    if (VAR_4->inetd)
    {
        FUNC_3(VAR_6, "%s link local: [inetd]", FUNC_6(VAR_4->info.proto, VAR_4->info.af, 1));
    }
    else if (VAR_4->bind_local)
    {
        sa_family_t VAR_7 = VAR_4->info.lsa->actual.dest.addr.sa.sa_family;



        struct addrinfo *VAR_8;
        for (VAR_8 = VAR_4->info.lsa->bind_local; VAR_8; VAR_8 = VAR_8->ai_next)
        {
            if (!VAR_7 || VAR_7 == VAR_8->ai_family)
            {
                break;
            }
        }
        FUNC_0(VAR_8);
        FUNC_3(VAR_6, "%s link local (bound): %s",
            FUNC_6(VAR_4->info.proto, VAR_4->info.af, 1),
            FUNC_5(VAR_8->ai_addr,&VAR_5));
    }
    else
    {
        FUNC_3(VAR_6, "%s link local: (not bound)",
            FUNC_6(VAR_4->info.proto, VAR_4->info.af, 1));
    }


    FUNC_3(VAR_6, "%s link remote: %s",
        FUNC_6(VAR_4->info.proto, VAR_4->info.af, 1),
        FUNC_4(&VAR_4->info.lsa->actual,
                                    ":",
                                    VAR_3,
                                    &VAR_5));
    FUNC_1(&VAR_5);
}
