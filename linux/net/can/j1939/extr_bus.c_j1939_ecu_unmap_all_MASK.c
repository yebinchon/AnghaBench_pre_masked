
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct j1939_priv {int lock; TYPE_1__* ents; } ;
struct TYPE_2__ {scalar_t__ ecu; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct j1939_priv *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->lock);
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->ents); VAR_1++)
  if (VAR_0->ents[VAR_1].ecu)
   FUNC_1(VAR_0->ents[VAR_1].ecu);
 FUNC_3(&VAR_0->lock);
}
