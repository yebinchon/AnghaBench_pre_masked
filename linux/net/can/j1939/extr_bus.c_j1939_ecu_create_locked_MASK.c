
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct j1939_priv {int ecus; int lock; } ;
struct TYPE_2__ {int function; } ;
struct j1939_ecu {int list; struct j1939_priv* priv; TYPE_1__ ac_timer; int name; int addr; int kref; } ;
typedef int name_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct j1939_ecu* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct j1939_priv*) ;
 int FUNC_5 (int *) ;
 struct j1939_ecu* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

struct j1939_ecu *FUNC_9(struct j1939_priv *VAR_5, name_t VAR_6)
{
 struct j1939_ecu *VAR_7;

 FUNC_8(&VAR_5->lock);

 VAR_7 = FUNC_6(sizeof(*VAR_7), FUNC_2());
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 FUNC_5(&VAR_7->kref);
 VAR_7->addr = VAR_3;
 VAR_7->name = VAR_6;

 FUNC_3(&VAR_7->ac_timer, VAR_0, VAR_2);
 VAR_7->ac_timer.function = VAR_4;
 FUNC_1(&VAR_7->list);

 FUNC_4(VAR_5);
 VAR_7->priv = VAR_5;
 FUNC_7(&VAR_7->list, &VAR_5->ecus);

 return VAR_7;
}
