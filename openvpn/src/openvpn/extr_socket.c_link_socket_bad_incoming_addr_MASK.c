
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct link_socket_info {TYPE_5__* lsa; } ;
struct TYPE_6__ {int sa_family; } ;
struct TYPE_7__ {TYPE_1__ sa; } ;
struct TYPE_8__ {TYPE_2__ addr; } ;
struct link_socket_actual {TYPE_3__ dest; } ;
struct gc_arena {int dummy; } ;
struct buffer {scalar_t__ len; } ;
struct addrinfo {int ai_addr; struct addrinfo* ai_next; } ;
struct TYPE_10__ {TYPE_4__* remote_list; } ;
struct TYPE_9__ {struct addrinfo* ai_next; int ai_addr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (struct link_socket_actual const*,struct gc_arena*) ;
 int FUNC_4 (int ,char*,int ,struct gc_arena*) ;

void
FUNC_5(struct buffer *VAR_2,
                              const struct link_socket_info *VAR_3,
                              const struct link_socket_actual *VAR_4)
{
    struct gc_arena VAR_5 = FUNC_1();
    struct addrinfo *VAR_6;

    switch (VAR_4->dest.addr.sa.sa_family)
    {
        case 129:
        case 128:
            FUNC_2(VAR_0,
                "TCP/UDP: Incoming packet rejected from %s[%d], expected peer address: %s (allow this incoming source address/port by removing --remote or adding --float)",
                FUNC_3(VAR_4, &VAR_5),
                (int)VAR_4->dest.addr.sa.sa_family,
                FUNC_4(VAR_3->lsa->remote_list->ai_addr,":",VAR_1, &VAR_5));

            for (VAR_6 = VAR_3->lsa->remote_list->ai_next; VAR_6; VAR_6 = VAR_6->ai_next)
            {
                FUNC_2(VAR_0,"or from peer address: %s",
                    FUNC_4(VAR_6->ai_addr,":",VAR_1, &VAR_5));
            }
            break;
    }
    VAR_2->len = 0;
    FUNC_0(&VAR_5);
}
