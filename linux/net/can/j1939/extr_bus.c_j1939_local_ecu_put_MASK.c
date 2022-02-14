
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct j1939_priv {int lock; TYPE_1__* ents; } ;
struct j1939_ecu {size_t addr; int nusers; } ;
typedef int name_t ;
struct TYPE_2__ {int nusers; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 struct j1939_ecu* FUNC_2 (struct j1939_priv*,int ) ;
 scalar_t__ FUNC_3 (struct j1939_ecu*) ;
 int FUNC_4 (struct j1939_ecu*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct j1939_priv *VAR_0, name_t VAR_1, u8 VAR_2)
{
 struct j1939_ecu *VAR_3;

 FUNC_5(&VAR_0->lock);

 if (FUNC_1(VAR_2))
  VAR_0->ents[VAR_2].nusers--;

 if (!VAR_1)
  goto done;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(!VAR_3))
  goto done;

 VAR_3->nusers--;

 if (FUNC_3(VAR_3))

  VAR_0->ents[VAR_3->addr].nusers--;
 FUNC_4(VAR_3);

 done:
 FUNC_6(&VAR_0->lock);
}
