
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_dev {int dummy; } ;
struct ip17xx_state {TYPE_2__* regs; TYPE_1__* ports; } ;
struct TYPE_4__ {int (* update_state ) (struct ip17xx_state*) ;} ;
struct TYPE_3__ {int pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (struct ip17xx_state*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct ip17xx_state *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_5->ports[VAR_3].pvid = VAR_4;
 return VAR_5->regs->update_state(VAR_5);
}
