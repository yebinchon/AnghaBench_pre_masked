
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct can_ml_priv* ml_priv; } ;
struct j1939_priv {int dummy; } ;
struct can_ml_priv {struct j1939_priv* j1939_priv; } ;



__attribute__((used)) static inline void FUNC_0(struct net_device *VAR_0,
      struct j1939_priv *VAR_1)
{
 struct can_ml_priv *VAR_2 = VAR_0->ml_priv;

 VAR_2->j1939_priv = VAR_1;
}
