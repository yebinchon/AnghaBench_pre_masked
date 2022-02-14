
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int ce; struct connection_list* connection_list; } ;
struct connection_list {int len; int ** array; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(const struct options *VAR_1)
{
    if (VAR_1->connection_list)
    {
        const struct connection_list *VAR_2 = VAR_1->connection_list;
        int VAR_3;
        for (VAR_3 = 0; VAR_3 < VAR_2->len; ++VAR_3)
        {
            FUNC_0(VAR_0, "Connection profiles [%d]:", VAR_3);
            FUNC_1(VAR_2->array[VAR_3]);
        }
    }
    else
    {
        FUNC_0(VAR_0, "Connection profiles [default]:");
        FUNC_1(&VAR_1->ce);
    }
    FUNC_0(VAR_0, "Connection profiles END");
}
