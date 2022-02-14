
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RRange {int * edges; } ;
typedef int mrb_state ;
typedef int mrb_range_edges ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_0, struct RRange *VAR_1)
{

  VAR_1->edges = (mrb_range_edges *)FUNC_0(VAR_0, sizeof(mrb_range_edges));

}
