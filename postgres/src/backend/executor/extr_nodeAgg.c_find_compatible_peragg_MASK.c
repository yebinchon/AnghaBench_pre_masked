
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* peragg; } ;
struct TYPE_7__ {int transno; scalar_t__ shareable; TYPE_1__* aggref; } ;
struct TYPE_6__ {scalar_t__ inputcollid; scalar_t__ aggtranstype; scalar_t__ aggstar; scalar_t__ aggvariadic; scalar_t__ aggkind; scalar_t__ aggfnoid; scalar_t__ aggtype; scalar_t__ aggcollid; int aggdirectargs; int aggfilter; int aggdistinct; int aggorder; int args; } ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ Aggref ;
typedef TYPE_2__* AggStatePerAgg ;
typedef TYPE_3__ AggState ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(Aggref *VAR_1, AggState *VAR_2,
        int VAR_3, List **VAR_4)
{
 int VAR_5;
 AggStatePerAgg VAR_6;

 *VAR_4 = VAR_0;


 if (FUNC_0((Node *) VAR_1))
  return -1;

 VAR_6 = VAR_2->peragg;
 for (VAR_5 = 0; VAR_5 <= VAR_3; VAR_5++)
 {
  AggStatePerAgg VAR_7;
  Aggref *VAR_8;

  VAR_7 = &VAR_6[VAR_5];
  VAR_8 = VAR_7->aggref;


  if (VAR_1->inputcollid != VAR_8->inputcollid ||
   VAR_1->aggtranstype != VAR_8->aggtranstype ||
   VAR_1->aggstar != VAR_8->aggstar ||
   VAR_1->aggvariadic != VAR_8->aggvariadic ||
   VAR_1->aggkind != VAR_8->aggkind ||
   !FUNC_1(VAR_1->args, VAR_8->args) ||
   !FUNC_1(VAR_1->aggorder, VAR_8->aggorder) ||
   !FUNC_1(VAR_1->aggdistinct, VAR_8->aggdistinct) ||
   !FUNC_1(VAR_1->aggfilter, VAR_8->aggfilter))
   continue;


  if (VAR_1->aggfnoid == VAR_8->aggfnoid &&
   VAR_1->aggtype == VAR_8->aggtype &&
   VAR_1->aggcollid == VAR_8->aggcollid &&
   FUNC_1(VAR_1->aggdirectargs, VAR_8->aggdirectargs))
  {
   FUNC_3(*VAR_4);
   *VAR_4 = VAR_0;
   return VAR_5;
  }
  if (VAR_7->shareable)
   *VAR_4 = FUNC_2(*VAR_4,
              VAR_7->transno);
 }

 return -1;
}
