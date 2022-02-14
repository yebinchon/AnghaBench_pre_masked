
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_entries; } ;
struct hist_browser {TYPE_1__ b; scalar_t__ nr_callchain_rows; } ;


 int FUNC_0 (struct hist_browser*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct hist_browser*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct hist_browser *VAR_0)
{




 VAR_0->nr_callchain_rows = 0;

 FUNC_2(VAR_0);
 VAR_0->b.nr_entries = FUNC_0(VAR_0);
 FUNC_1(&VAR_0->b);
 FUNC_3(&VAR_0->b);
}
