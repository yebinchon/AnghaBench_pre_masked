
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Count; scalar_t__ Summ; int Shift; } ;
struct TYPE_6__ {unsigned int MaxOrder; unsigned int RestoreMethod; TYPE_1__ DummySee; } ;
typedef TYPE_2__ CPpmd8 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(CPpmd8 *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
  VAR_1->MaxOrder = VAR_2;
  VAR_1->RestoreMethod = VAR_3;
  FUNC_0(VAR_1);
  VAR_1->DummySee.Shift = VAR_0;
  VAR_1->DummySee.Summ = 0;
  VAR_1->DummySee.Count = 64;
}
