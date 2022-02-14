
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axg_pdm {TYPE_1__* cfg; int sysclk; } ;
struct TYPE_2__ {unsigned int sys_rate; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct axg_pdm *VAR_1, unsigned int VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2 * 2 * VAR_3 * VAR_0;






 if (VAR_4 < VAR_1->cfg->sys_rate)
  return FUNC_0(VAR_1->sysclk, VAR_4);

 return FUNC_0(VAR_1->sysclk, VAR_1->cfg->sys_rate);
}
