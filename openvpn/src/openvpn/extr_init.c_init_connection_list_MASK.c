
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ remote_random; struct connection_list* connection_list; } ;
struct context {TYPE_1__ options; } ;
struct connection_list {int current; int len; struct connection_entry** array; } ;
struct connection_entry {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct context *VAR_0)
{
    struct connection_list *VAR_1 = VAR_0->options.connection_list;

    VAR_1->current = -1;
    if (VAR_0->options.remote_random)
    {
        int VAR_2;
        for (VAR_2 = 0; VAR_2 < VAR_1->len; ++VAR_2)
        {
            const int VAR_3 = FUNC_0() % VAR_1->len;
            if (VAR_2 != VAR_3)
            {
                struct connection_entry *VAR_4;
                VAR_4 = VAR_1->array[VAR_2];
                VAR_1->array[VAR_2] = VAR_1->array[VAR_3];
                VAR_1->array[VAR_3] = VAR_4;
            }
        }
    }
}
