
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_priv {int lock; } ;
struct j1939_ecu {int addr; struct j1939_priv* priv; } ;


 struct j1939_ecu* FUNC_0 (struct j1939_priv*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct j1939_ecu *VAR_0)
{
 struct j1939_priv *VAR_1 = VAR_0->priv;

 FUNC_1(&VAR_1->lock);

 return FUNC_0(VAR_1, VAR_0->addr) == VAR_0;
}
