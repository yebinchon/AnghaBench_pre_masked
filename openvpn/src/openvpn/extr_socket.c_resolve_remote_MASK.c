
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* lsa; int af; int proto; } ;
struct link_socket {int resolve_retry_seconds; TYPE_2__ info; int remote_port; scalar_t__ remote_host; int dns_cache; int sockflags; } ;
struct gc_arena {int dummy; } ;
struct addrinfo {int dummy; } ;
struct TYPE_3__ {struct addrinfo* current_remote; int actual; struct addrinfo* remote_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,unsigned int,int,int,int volatile,int) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__,int ,int ,unsigned int,struct addrinfo**) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (unsigned int,scalar_t__,int ,int,int volatile*,int ,struct addrinfo**) ;
 int FUNC_9 (int *,struct gc_arena*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,struct addrinfo*) ;
 unsigned int FUNC_12 (int,int ) ;

__attribute__((used)) static void
FUNC_13(struct link_socket *VAR_10,
               int VAR_11,
               const char **VAR_12,
               volatile int *VAR_13)
{
    struct gc_arena VAR_14 = FUNC_4();


    if (!VAR_10->info.lsa->remote_list)
    {
        if (VAR_10->remote_host)
        {
            unsigned int VAR_15 = FUNC_12(VAR_4|VAR_6, VAR_10->sockflags);
            int VAR_16 = 0;
            int VAR_17 = -1;
            struct addrinfo *VAR_18;
            if (FUNC_10(VAR_10->info.proto))
            {
                VAR_15 |= VAR_1;
            }

            if (VAR_10->resolve_retry_seconds == VAR_8)
            {
                if (VAR_11 == 2)
                {
                    VAR_15 |= (VAR_5 | VAR_2);
                }
                VAR_16 = 0;
            }
            else if (VAR_11 == 1)
            {
                if (VAR_10->resolve_retry_seconds)
                {
                    VAR_16 = 0;
                }
                else
                {
                    VAR_15 |= (VAR_2 | VAR_3);
                    VAR_16 = 0;
                }
            }
            else if (VAR_11 == 2)
            {
                if (VAR_10->resolve_retry_seconds)
                {
                    VAR_15 |= VAR_2;
                    VAR_16 = VAR_10->resolve_retry_seconds;
                }
                else
                {
                    FUNC_0(0);
                }
            }
            else
            {
                FUNC_0(0);
            }


            VAR_17 = FUNC_5(VAR_10->dns_cache,
                                          VAR_10->remote_host,
                                          VAR_10->remote_port,
                                          VAR_10->info.af,
                                          VAR_15, &VAR_18);
            if (VAR_17)
            {
                VAR_17 = FUNC_8(VAR_15, VAR_10->remote_host, VAR_10->remote_port,
                                             VAR_16, VAR_13, VAR_10->info.af, &VAR_18);
            }

            if (VAR_17 == 0)
            {
                VAR_10->info.lsa->remote_list = VAR_18;
                VAR_10->info.lsa->current_remote = VAR_18;

                FUNC_2(VAR_0, "RESOLVE_REMOTE flags=0x%04x phase=%d rrs=%d sig=%d status=%d",
                     VAR_15,
                     VAR_11,
                     VAR_16,
                     VAR_13 ? *VAR_13 : -1,
                     VAR_17);
            }
            if (VAR_13)
            {
                if (*VAR_13)
                {
                    goto done;
                }
            }
            if (VAR_17!=0)
            {
                if (VAR_13)
                {
                    *VAR_13 = VAR_9;
                }
                goto done;
            }
        }
    }


    if (FUNC_6(&VAR_10->info.lsa->actual))
    {
        FUNC_7(VAR_7, "TCP/UDP: Preserving recently used remote address: %s",
            FUNC_9(&VAR_10->info.lsa->actual, &VAR_14));
        if (VAR_12)
        {
            *VAR_12 = ((void*)0);
        }
    }
    else
    {
        FUNC_1(VAR_10->info.lsa->actual);
        if (VAR_10->info.lsa->current_remote)
        {
            FUNC_11(&VAR_10->info.lsa->actual,
                               VAR_10->info.lsa->current_remote);
        }
    }

done:
    FUNC_3(&VAR_14);
}
