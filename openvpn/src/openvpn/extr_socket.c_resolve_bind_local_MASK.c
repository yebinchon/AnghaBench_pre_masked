
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* lsa; int proto; } ;
struct link_socket {int local_port; int local_host; TYPE_2__ info; int dns_cache; } ;
struct gc_arena {int dummy; } ;
typedef int sa_family_t ;
struct TYPE_3__ {int bind_local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int const,int,int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (int,int ,int ,int ,int *,int const,int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct link_socket *VAR_6, const sa_family_t VAR_7)
{
    struct gc_arena VAR_8 = FUNC_2();


    if (!VAR_6->info.lsa->bind_local)
    {
        int VAR_9 = VAR_3 | VAR_4
                    |VAR_1 | VAR_2;
        int VAR_10;

        if (FUNC_6(VAR_6->info.proto))
        {
            VAR_9 |= VAR_0;
        }


        VAR_10 = FUNC_3(VAR_6->dns_cache,
                                      VAR_6->local_host,
                                      VAR_6->local_port,
                                      VAR_7,
                                      VAR_9,
                                      &VAR_6->info.lsa->bind_local);

        if (VAR_10)
        {
            VAR_10 = FUNC_5(VAR_9, VAR_6->local_host, VAR_6->local_port, 0,
                                         ((void*)0), VAR_7, &VAR_6->info.lsa->bind_local);
        }

        if (VAR_10 !=0)
        {
            FUNC_4(VAR_5, "getaddrinfo() failed for local \"%s:%s\": %s",
                VAR_6->local_host, VAR_6->local_port,
                FUNC_0(VAR_10));
        }
    }

    FUNC_1(&VAR_8);
}
