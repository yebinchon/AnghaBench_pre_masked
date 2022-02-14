
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct addrinfo {int ai_addr; } ;
typedef int socket_descriptor_t ;


 int FUNC_0 (struct addrinfo const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,struct gc_arena*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(socket_descriptor_t VAR_2,
                 const struct addrinfo *VAR_3,
                 bool VAR_4,
                 bool VAR_5)
{
    struct gc_arena VAR_6 = FUNC_2();
    if (VAR_4)
    {
        FUNC_0(VAR_3);
        FUNC_4(VAR_1, "Listening for incoming TCP connection on %s",
            FUNC_5(VAR_3->ai_addr, &VAR_6));
        if (FUNC_3(VAR_2, 32))
        {
            FUNC_4(VAR_0, "TCP: listen() failed");
        }
    }


    if (VAR_5)
    {
        FUNC_6(VAR_2);
    }

    FUNC_1(&VAR_6);
}
