
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct axg_pdm_hcic {int shift; int mult; int ds; int steps; } ;
struct axg_pdm {int map; TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* filters; } ;
struct TYPE_3__ {struct axg_pdm_hcic hcic; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 int VAR_3 ;
 unsigned int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct axg_pdm *VAR_5)
{
 const struct axg_pdm_hcic *VAR_6 = &VAR_5->cfg->filters->hcic;
 unsigned int VAR_7;

 VAR_7 = FUNC_3(VAR_6->steps);
 VAR_7 |= FUNC_0(VAR_6->ds);
 VAR_7 |= FUNC_1(VAR_6->mult);
 VAR_7 |= FUNC_2(VAR_6->shift);

 FUNC_4(VAR_5->map, VAR_0,
      VAR_4 |
      VAR_1 |
      VAR_2 |
      VAR_3,
      VAR_7);
}
