
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int slot; TYPE_2__* dest; } ;
typedef TYPE_1__ TupOutputState ;
struct TYPE_6__ {int (* rShutdown ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(TupOutputState *VAR_0)
{
 VAR_0->dest->rShutdown(VAR_0->dest);

 FUNC_0(VAR_0->slot);
 FUNC_1(VAR_0);
}
