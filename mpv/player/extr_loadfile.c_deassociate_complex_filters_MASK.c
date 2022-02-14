
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct MPContext {int num_tracks; int lavfi_graph; int lavfi; TYPE_1__* ao_chain; TYPE_3__* vo_chain; TYPE_2__** tracks; } ;
struct TYPE_6__ {int * filter_src; } ;
struct TYPE_5__ {int * sink; } ;
struct TYPE_4__ {int * filter_src; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_tracks; VAR_1++)
        VAR_0->tracks[VAR_1]->sink = ((void*)0);
    if (VAR_0->vo_chain)
        VAR_0->vo_chain->filter_src = ((void*)0);
    if (VAR_0->ao_chain)
        VAR_0->ao_chain->filter_src = ((void*)0);
    FUNC_0(&VAR_0->lavfi);
    FUNC_0(&VAR_0->lavfi_graph);
}
