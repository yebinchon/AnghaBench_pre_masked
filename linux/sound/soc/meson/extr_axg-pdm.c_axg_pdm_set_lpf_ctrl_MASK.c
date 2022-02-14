
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct axg_pdm_lpf {int round_mode; int ds; int tap_num; } ;
struct axg_pdm {int map; TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* filters; } ;
struct TYPE_3__ {struct axg_pdm_lpf* lpf; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 int VAR_3 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct axg_pdm *VAR_4, unsigned int VAR_5)
{
 const struct axg_pdm_lpf *VAR_6 = &VAR_4->cfg->filters->lpf[VAR_5];
 unsigned int VAR_7 = VAR_5 * FUNC_3(VAR_4->map)
  + VAR_0;
 unsigned int VAR_8;

 VAR_8 = FUNC_2(VAR_6->tap_num);
 VAR_8 |= FUNC_0(VAR_6->ds);
 VAR_8 |= FUNC_1(VAR_6->round_mode);

 FUNC_4(VAR_4->map, VAR_7,
      VAR_3 |
      VAR_1 |
      VAR_2,
      VAR_8);
}
