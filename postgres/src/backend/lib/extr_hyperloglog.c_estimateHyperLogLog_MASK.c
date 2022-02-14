
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nRegisters; scalar_t__* hashesArr; double alphaMM; } ;
typedef TYPE_1__ hyperLogLogState ;


 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double,scalar_t__) ;

double
FUNC_2(hyperLogLogState *VAR_2)
{
 double VAR_3;
 double VAR_4 = 0.0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->nRegisters; VAR_5++)
 {
  VAR_4 += 1.0 / FUNC_1(2.0, VAR_2->hashesArr[VAR_5]);
 }


 VAR_3 = VAR_2->alphaMM / VAR_4;

 if (VAR_3 <= (5.0 / 2.0) * VAR_2->nRegisters)
 {

  int VAR_6 = 0;

  for (VAR_5 = 0; VAR_5 < VAR_2->nRegisters; VAR_5++)
  {
   if (VAR_2->hashesArr[VAR_5] == 0)
    VAR_6++;
  }

  if (VAR_6 != 0)
   VAR_3 = VAR_2->nRegisters * FUNC_0((double) VAR_2->nRegisters /
             VAR_6);
 }
 else if (VAR_3 > (1.0 / 30.0) * VAR_1)
 {

  VAR_3 = VAR_0 * FUNC_0(1.0 - (VAR_3 / VAR_1));
 }

 return VAR_3;
}
