
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct axg_pdm_hpf {int steps; int out_factor; } ;
struct axg_pdm {int map; TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* filters; } ;
struct TYPE_3__ {struct axg_pdm_hpf hpf; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct axg_pdm *VAR_3)
{
 const struct axg_pdm_hpf *VAR_4 = &VAR_3->cfg->filters->hpf;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_4->out_factor);
 VAR_5 |= FUNC_1(VAR_4->steps);

 FUNC_2(VAR_3->map, VAR_0,
      VAR_1 |
      VAR_2,
      VAR_5);
}
