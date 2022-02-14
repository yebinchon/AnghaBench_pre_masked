
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wb_domain {int dummy; } ;
struct bdi_writeback {TYPE_1__* bdi; int completions; } ;
struct TYPE_2__ {int max_prop_frac; } ;


 int VAR_0 ;
 struct wb_domain VAR_1 ;
 int FUNC_0 (struct bdi_writeback*,int ) ;
 struct wb_domain* FUNC_1 (struct bdi_writeback*) ;
 int FUNC_2 (struct wb_domain*,int *,int ) ;
 int * FUNC_3 (struct bdi_writeback*) ;

__attribute__((used)) static inline void FUNC_4(struct bdi_writeback *VAR_2)
{
 struct wb_domain *VAR_3;

 FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_1, &VAR_2->completions,
          VAR_2->bdi->max_prop_frac);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_3, FUNC_3(VAR_2),
           VAR_2->bdi->max_prop_frac);
}
