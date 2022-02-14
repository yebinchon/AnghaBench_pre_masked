
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct options {int ce; TYPE_1__* connection_list; } ;
struct TYPE_2__ {int len; int ** array; } ;


 int FUNC_0 (struct options const*,int *) ;

__attribute__((used)) static void
FUNC_1(const struct options *VAR_0)
{
    if (VAR_0->connection_list)
    {
        int VAR_1;
        for (VAR_1 = 0; VAR_1 < VAR_0->connection_list->len; ++VAR_1)
        {
            FUNC_0(VAR_0, VAR_0->connection_list->array[VAR_1]);
        }
    }
    else
    {
        FUNC_0(VAR_0, &VAR_0->ce);
    }
}
