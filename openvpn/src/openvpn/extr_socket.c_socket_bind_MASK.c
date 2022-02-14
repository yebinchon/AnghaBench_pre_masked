
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v6only ;
struct gc_arena {int dummy; } ;
struct addrinfo {int ai_family; int ai_addr; int ai_addrlen; struct addrinfo* ai_next; } ;
typedef int socket_descriptor_t ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ,char*,int ,struct gc_arena*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,void*,int) ;

void
FUNC_8(socket_descriptor_t VAR_8,
            struct addrinfo *VAR_9,
            int VAR_10,
            const char *VAR_11,
            bool VAR_12)
{
    struct gc_arena VAR_13 = FUNC_4();
    struct addrinfo *VAR_14;

    FUNC_0(VAR_9);



    for (VAR_14 = VAR_9; VAR_14; VAR_14 = VAR_14->ai_next)
    {
        if (VAR_14->ai_family == VAR_10)
        {
            break;
        }
    }
    if (!VAR_14)
    {
        FUNC_5(VAR_4, "%s: Socket bind failed: Addr to bind has no %s record",
            VAR_11, FUNC_1(VAR_10));
    }

    if (VAR_10 == VAR_0)
    {
        int VAR_15 = VAR_12 ? 1 : 0;

        FUNC_5(VAR_5, "setsockopt(IPV6_V6ONLY=%d)", VAR_15);
        if (FUNC_7(VAR_8, VAR_1, VAR_2, (void *) &VAR_15, sizeof(VAR_15)))
        {
            FUNC_5(VAR_6|VAR_3, "Setting IPV6_V6ONLY=%d failed", VAR_15);
        }
    }
    if (FUNC_2(VAR_8, VAR_14->ai_addr, VAR_14->ai_addrlen))
    {
        FUNC_5(VAR_4 | VAR_3, "%s: Socket bind failed on local address %s",
            VAR_11,
            FUNC_6(VAR_9->ai_addr, ":", VAR_7, &VAR_13));
    }
    FUNC_3(&VAR_13);
}
