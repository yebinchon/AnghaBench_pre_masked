
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


struct TYPE_11__ {scalar_t__ af; scalar_t__ proto; TYPE_4__* lsa; } ;
struct signal_info {int signal_received; char* remote_host; int sd; TYPE_5__ info; scalar_t__ socks_proxy; scalar_t__ bind_local; scalar_t__ inetd; scalar_t__ resolve_retry_seconds; } ;
struct link_socket {int signal_received; char* remote_host; int sd; TYPE_5__ info; scalar_t__ socks_proxy; scalar_t__ bind_local; scalar_t__ inetd; scalar_t__ resolve_retry_seconds; } ;
struct frame {int dummy; } ;
struct TYPE_12__ {scalar_t__ ai_family; } ;
struct TYPE_7__ {int sa; } ;
struct TYPE_8__ {TYPE_1__ addr; } ;
struct TYPE_9__ {TYPE_2__ dest; } ;
struct TYPE_10__ {TYPE_3__ actual; TYPE_6__* bind_local; TYPE_6__* current_remote; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct signal_info*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct signal_info*,TYPE_6__*) ;
 int FUNC_3 (struct signal_info*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct signal_info*,struct frame const*,char const*,int*) ;
 int FUNC_6 (struct signal_info*) ;
 int FUNC_7 (struct signal_info*,struct signal_info*) ;
 int FUNC_8 (struct signal_info*,struct signal_info*) ;
 int FUNC_9 (struct signal_info*,char const*,int*) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (struct signal_info*,int,char const**,int*) ;
 int FUNC_12 (struct frame const*,struct signal_info*) ;

void
FUNC_13(struct link_socket *VAR_7,
                        const struct frame *VAR_8,
                        struct signal_info *VAR_9)
{
    const char *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    FUNC_0(VAR_7);
    FUNC_0(VAR_9);

    if (VAR_9->signal_received)
    {
        VAR_11 = VAR_9->signal_received;
        VAR_9->signal_received = 0;
    }


    FUNC_12(VAR_8, VAR_7);






    if (VAR_7->resolve_retry_seconds)
    {
        VAR_10 = VAR_7->remote_host;
    }


    if (VAR_7->inetd)
    {
        FUNC_5(VAR_7, VAR_8, VAR_10, &VAR_9->signal_received);
        if (VAR_9->signal_received)
        {
            goto done;
        }

    }
    else
    {

        FUNC_11(VAR_7, 2, &VAR_10, &VAR_9->signal_received);


        if (VAR_7->info.lsa->current_remote)
        {
            FUNC_2(VAR_7, VAR_7->info.lsa->current_remote);
        }


        if (VAR_7->sd == VAR_6)
        {



            if (VAR_7->bind_local && !VAR_7->remote_host && VAR_7->info.lsa->bind_local)
            {


                if (VAR_7->info.af == VAR_0)
                {
                    FUNC_4(VAR_1, "Could not determine IPv4/IPv6 protocol. Using %s",
                        FUNC_1(VAR_7->info.lsa->bind_local->ai_family));
                    VAR_7->info.af = VAR_7->info.lsa->bind_local->ai_family;
                }

                FUNC_2(VAR_7, VAR_7->info.lsa->bind_local);
            }
        }


        if (VAR_7->sd == VAR_6)
        {
            FUNC_4(VAR_1, "Could not determine IPv4/IPv6 protocol");
            VAR_9->signal_received = VAR_5;
            goto done;
        }

        if (VAR_9->signal_received)
        {
            goto done;
        }

        if (VAR_7->info.proto == VAR_3)
        {
            FUNC_9(VAR_7, VAR_10,
                              &VAR_9->signal_received);
        }
        else if (VAR_7->info.proto == VAR_2)
        {
            FUNC_8(VAR_7, VAR_9);

        }
        else if (VAR_7->info.proto == VAR_4 && VAR_7->socks_proxy)
        {
            FUNC_7(VAR_7, VAR_9);
        }






        if (VAR_9->signal_received)
        {
            goto done;
        }
    }

    FUNC_6(VAR_7);
    FUNC_3(VAR_7);

done:
    if (VAR_11)
    {
        if (!VAR_9->signal_received)
        {
            VAR_9->signal_received = VAR_11;
        }
    }
}
