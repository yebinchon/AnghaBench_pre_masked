
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ds; } ;
struct axg_pdm_filters {TYPE_3__* lpf; TYPE_2__ hcic; } ;
struct axg_pdm {TYPE_1__* cfg; } ;
struct TYPE_6__ {unsigned int ds; } ;
struct TYPE_4__ {struct axg_pdm_filters* filters; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct axg_pdm *VAR_1)
{
 const struct axg_pdm_filters *VAR_2 = VAR_1->cfg->filters;
 unsigned int VAR_3 = VAR_2->hcic.ds;
 int VAR_4;






 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 *= VAR_2->lpf[VAR_4].ds;

 return VAR_3;
}
