
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_priv {struct j1939_addr_ent* ents; int lock; } ;
struct j1939_ecu {size_t addr; scalar_t__ nusers; struct j1939_priv* priv; } ;
struct j1939_addr_ent {int nusers; int * ecu; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct j1939_ecu*) ;
 int FUNC_2 (struct j1939_ecu*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct j1939_ecu *VAR_0)
{
 struct j1939_priv *VAR_1 = VAR_0->priv;
 struct j1939_addr_ent *VAR_2;

 FUNC_3(&VAR_1->lock);

 if (!FUNC_0(VAR_0->addr))
  return;

 if (!FUNC_1(VAR_0))
  return;

 VAR_2 = &VAR_1->ents[VAR_0->addr];
 VAR_2->ecu = ((void*)0);
 VAR_2->nusers -= VAR_0->nusers;
 FUNC_2(VAR_0);
}
