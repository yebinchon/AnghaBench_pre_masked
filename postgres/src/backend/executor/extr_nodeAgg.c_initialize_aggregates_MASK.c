
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numtrans; int * pertrans; TYPE_1__* phase; } ;
struct TYPE_6__ {int numsets; } ;
typedef int * AggStatePerTrans ;
typedef int * AggStatePerGroup ;
typedef TYPE_2__ AggState ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_3(AggState *VAR_0,
       AggStatePerGroup *VAR_1,
       int VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_0(VAR_0->phase->numsets, 1);
 int VAR_5 = 0;
 int VAR_6 = VAR_0->numtrans;
 AggStatePerTrans VAR_7 = VAR_0->pertrans;

 if (VAR_2 == 0)
  VAR_2 = VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  AggStatePerGroup VAR_8 = VAR_1[VAR_5];

  FUNC_2(VAR_0, VAR_5, 0);

  for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++)
  {
   AggStatePerTrans VAR_9 = &VAR_7[VAR_3];
   AggStatePerGroup VAR_10 = &VAR_8[VAR_3];

   FUNC_1(VAR_0, VAR_9, VAR_10);
  }
 }
}
