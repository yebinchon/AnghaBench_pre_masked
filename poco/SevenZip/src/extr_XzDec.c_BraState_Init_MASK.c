
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ methodId; int deltaState; int x86State; scalar_t__ bufTotal; scalar_t__ bufConv; scalar_t__ bufPos; } ;
typedef TYPE_1__ CBraState ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(void *VAR_1)
{
  CBraState *VAR_2 = ((CBraState *)VAR_1);
  VAR_2->bufPos = VAR_2->bufConv = VAR_2->bufTotal = 0;
  FUNC_1(VAR_2->x86State);
  if (VAR_2->methodId == VAR_0)
    FUNC_0(VAR_2->deltaState);
}
