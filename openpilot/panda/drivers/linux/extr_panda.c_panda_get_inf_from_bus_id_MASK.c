
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panda_inf_priv {int dummy; } ;
struct panda_dev_priv {struct panda_inf_priv** interfaces; } ;


 int VAR_0 ;
 int* VAR_1 ;

struct panda_inf_priv *
FUNC_0(struct panda_dev_priv *VAR_2, int VAR_3){
  int VAR_4;
  for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if(VAR_1[VAR_4] == VAR_3)
      return VAR_2->interfaces[VAR_4];
  return ((void*)0);
}
