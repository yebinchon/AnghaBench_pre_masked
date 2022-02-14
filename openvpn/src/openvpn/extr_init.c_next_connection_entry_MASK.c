
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection_entry {int flags; } ;
struct TYPE_8__ {int no_advance; int unsuccessful_attempts; int connect_retry_max; struct connection_entry ce; int persist_remote_ip; struct connection_list* connection_list; } ;
struct TYPE_6__ {TYPE_1__* remote_list; TYPE_1__* current_remote; } ;
struct TYPE_7__ {TYPE_2__ link_socket_addr; } ;
struct context {TYPE_4__ options; TYPE_3__ c1; } ;
struct connection_list {size_t current; size_t len; struct connection_entry** array; } ;
struct TYPE_5__ {struct TYPE_5__* ai_next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct context*) ;
 int VAR_1 ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (struct context*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_8(struct context *VAR_3)
{
    struct connection_list *VAR_4 = VAR_3->options.connection_list;
    bool VAR_5;
    struct connection_entry *VAR_6;
    int VAR_7 = 0;

    do
    {
        VAR_5 = 1;
        if (VAR_3->options.no_advance && VAR_4->current >= 0)
        {
            VAR_3->options.no_advance = 0;
        }
        else
        {


            if (VAR_3->c1.link_socket_addr.current_remote
                && VAR_3->c1.link_socket_addr.current_remote->ai_next)
            {
                VAR_3->c1.link_socket_addr.current_remote =
                    VAR_3->c1.link_socket_addr.current_remote->ai_next;
            }
            else
            {




                if (!VAR_3->options.persist_remote_ip)
                {

                    FUNC_0(VAR_3->c1.link_socket_addr.current_remote == ((void*)0));
                    FUNC_0(VAR_3->c1.link_socket_addr.remote_list == ((void*)0));
                }
                else
                {
                    VAR_3->c1.link_socket_addr.current_remote =
                        VAR_3->c1.link_socket_addr.remote_list;
                }







                VAR_3->options.unsuccessful_attempts++;

                if (++VAR_4->current >= VAR_4->len)
                {

                    VAR_4->current = 0;
                    if (++VAR_7 >= 2)
                    {
                        FUNC_6(VAR_1, "No usable connection profiles are present");
                    }
                }
            }
        }

        VAR_6 = VAR_4->array[VAR_4->current];

        if (VAR_6->flags & VAR_0)
        {
            VAR_5 = 0;
        }

        VAR_3->options.ce = *VAR_6;
    } while (!VAR_5);


    if (VAR_3->options.connect_retry_max > 0
        && VAR_3->options.unsuccessful_attempts > (VAR_4->len * VAR_3->options.connect_retry_max))
    {
        FUNC_6(VAR_1, "All connections have been connect-retry-max (%d) times unsuccessful, exiting",
            VAR_3->options.connect_retry_max);
    }
    FUNC_7(&VAR_3->options);
}
