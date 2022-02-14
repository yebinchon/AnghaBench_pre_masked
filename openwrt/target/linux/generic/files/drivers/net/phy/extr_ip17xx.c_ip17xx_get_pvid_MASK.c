
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int dummy; } ;
struct ip17xx_state {TYPE_1__* ports; } ;
struct TYPE_2__ {int pvid; } ;


 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_0, int VAR_1, int *VAR_2)
{
 struct ip17xx_state *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->ports[VAR_1].pvid;
 return 0;
}
