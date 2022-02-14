
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct panda_inf_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct panda_inf_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
  struct panda_inf_priv *VAR_2 = FUNC_0(VAR_1);
  int VAR_3;


  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3)
    return VAR_3;


  VAR_2->can.state = VAR_0;

  FUNC_1(VAR_1);

  return 0;
}
