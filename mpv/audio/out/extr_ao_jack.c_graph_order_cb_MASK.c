
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int graph_latency_max; int * ports; } ;
struct ao {struct priv* priv; } ;
struct TYPE_3__ {int max; } ;
typedef TYPE_1__ jack_latency_range_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
    struct ao *VAR_2 = VAR_1;
    struct priv *VAR_3 = VAR_2->priv;

    jack_latency_range_t VAR_4;
    FUNC_1(VAR_3->ports[0], VAR_0,
                                &VAR_4);
    FUNC_0(&VAR_3->graph_latency_max, VAR_4.max);

    return 0;
}
