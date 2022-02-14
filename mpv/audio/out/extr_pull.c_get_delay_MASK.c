
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_pull_state {int * buffers; int end_time_us; } ;
struct ao {scalar_t__ bps; struct ao_pull_state* api_priv; } ;
typedef double int64_t ;


 double FUNC_0 (int ,double) ;
 double FUNC_1 (int *) ;
 double FUNC_2 (int ) ;
 double FUNC_3 () ;

__attribute__((used)) static double FUNC_4(struct ao *VAR_0)
{
    struct ao_pull_state *VAR_1 = VAR_0->api_priv;

    int64_t VAR_2 = FUNC_1(&VAR_1->end_time_us);
    int64_t VAR_3 = FUNC_3();
    double VAR_4 = FUNC_0(0, (VAR_2 - VAR_3) / (1000.0 * 1000.0));
    return FUNC_2(VAR_1->buffers[0]) / (double)VAR_0->bps + VAR_4;
}
