
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra {int dummy; } ;
struct d3d_timer {int disjoint; int ts_end; int ts_start; } ;
typedef struct d3d_timer ra_timer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct d3d_timer*) ;

__attribute__((used)) static void FUNC_2(struct ra *VAR_0, ra_timer *VAR_1)
{
    if (!VAR_1)
        return;
    struct d3d_timer *VAR_2 = VAR_1;

    FUNC_0(VAR_2->ts_start);
    FUNC_0(VAR_2->ts_end);
    FUNC_0(VAR_2->disjoint);
    FUNC_1(VAR_2);
}
