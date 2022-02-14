
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {struct batadv_algo_ops* algo_ops; } ;
struct batadv_algo_ops {int dummy; } ;


 int VAR_0 ;
 struct batadv_algo_ops* FUNC_0 (char*) ;

int FUNC_1(struct batadv_priv *VAR_1, char *VAR_2)
{
 struct batadv_algo_ops *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->algo_ops = VAR_3;

 return 0;
}
