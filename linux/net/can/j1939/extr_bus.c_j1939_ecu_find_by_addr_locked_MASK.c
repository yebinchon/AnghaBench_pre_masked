
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct j1939_priv {TYPE_1__* ents; int lock; } ;
struct j1939_ecu {int dummy; } ;
struct TYPE_2__ {struct j1939_ecu* ecu; } ;


 int FUNC_0 (int *) ;

struct j1939_ecu *FUNC_1(struct j1939_priv *VAR_0,
      u8 VAR_1)
{
 FUNC_0(&VAR_0->lock);

 return VAR_0->ents[VAR_1].ecu;
}
